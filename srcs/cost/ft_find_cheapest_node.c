/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_cheapest_node.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 08:23:44 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/22 08:23:46 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_find_cheapest_node(t_list **a, t_list **b)
{
	t_list	*tmp_a;
	t_list	*tmp_b;
	t_list	*node;
	int		cheapest_cost;

	tmp_a = (*a);
	tmp_b = (*b);
	node = tmp_b;
	cheapest_cost = ft_find_cheapest_cost(&tmp_a, &tmp_b,
			ft_get_big_bro_idx(&tmp_a, node->data), node->index);
	while (tmp_b)
	{
		if (cheapest_cost >= ft_find_cheapest_cost(&tmp_a, &tmp_b,
				ft_get_big_bro_idx(&tmp_a, tmp_b->data), tmp_b->index))
		{
			cheapest_cost = ft_find_cheapest_cost(&tmp_a, &tmp_b,
				ft_get_big_bro_idx(&tmp_a, tmp_b->data), tmp_b->index);
			node = tmp_b;
		}
		tmp_b = tmp_b->next;
	}
	return (node);
}
