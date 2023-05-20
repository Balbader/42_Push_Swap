/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_utils_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:01:47 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/11 13:01:48 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Returns the idx of the a_node to bring to top of a_stack based on incoming
 * b_node_pos that is greater and closest to incoming b_node_pos
*/
int	ft_get_big_bro_idx(t_list **a, int incoming_pos)
{
	t_list	*tmp;
	int		big_bro_idx;
	int		closest;
	int		a_size;
	int		i;

	ft_re_init_index(*a);
	tmp = (*a);
	a_size = ft_get_stack_size(a);
	closest = INT_MAX;
	big_bro_idx = tmp->index;
	i = 0;
	while (i < a_size)
	{
		if (tmp->pos > incoming_pos && tmp->pos <= closest)
		{
			closest = tmp->pos;
			big_bro_idx = tmp->index;
		}
		tmp = tmp->next;
		++i;
	}
	ft_free_stack(&tmp);
	return (big_bro_idx);
}

/* Returns the idx of the cheapest b_node to bring to top of b_stack */
int	ft_get_lil_bro_idx(t_list **b, int lil_bro_idx)
{
	t_list	*tmp;
	int		b_cost;
	int		cheapest;

	ft_re_init_index(*b);
	tmp = (*b);
	cheapest = INT_MAX;
	while (tmp)
	{
		b_cost = ft_get_node_cost(b, tmp->index);
		if (b_cost < cheapest)
		{
			cheapest = b_cost;
			lil_bro_idx = tmp->index;
		}
		tmp = tmp->next;
	}
	ft_free_stack(&tmp);
	return (lil_bro_idx);
}