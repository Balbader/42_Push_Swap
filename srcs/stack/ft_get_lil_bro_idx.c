/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_lil_bro_idx.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 07:42:44 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/20 07:42:45 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
