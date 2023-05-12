/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a_utils.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:15:53 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/12 09:15:55 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_incoming_idx(t_list **a, int big_bro_pos, int idx)
{
	t_list	*tmp;
	int		a_size;
	int		i;

	tmp = (*a);
	a_size = ft_get_stack_size(a);
	i = 0;
	while (i < a_size)
	{
		if (tmp->pos == big_bro_pos)
			idx = tmp->index;
		tmp = tmp->next;
		++i;
	}
	ft_free_stack(&tmp);
	return (idx);
}

/*
void	ft_re_init_stacks_index(t_list **a, t_list **b)
{
	ft_re_init_index(*a);
	ft_re_init_index(*b);
}

void	ft_reorder_a(t_list **a)
{
	int	smallest_idx;
	int	a_size;
	int	mid;

	smallest_idx = ft_find_smallest_node_idx(a);
	a_size = ft_get_stack_size(a);
	mid = a_size / 2;
	if (smallest_idx <= mid)
		ft_do_ra(a, smallest_idx);
	else if (smallest_idx > mid)
		ft_do_rra(a, smallest_idx, a_size);
}
*/
