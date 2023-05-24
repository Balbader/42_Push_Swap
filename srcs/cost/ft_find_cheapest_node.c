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

t_list	*ft_find_cheapest_node(t_list *a, t_list *b)
{
	t_list	*node;
	int		cheapest;

	node = b;
	cheapest = ft_find_cheapest_cost(a, b,
			ft_get_big_bro_idx(a, node->data), node->index);
	while (b)
	{
		if (cheapest >= ft_find_cheapest_cost(a, b,
				ft_get_big_bro_idx(a, b->data), b->index))
		{
			cheapest = ft_find_cheapest_cost(a, b,
					ft_get_big_bro_idx(a, b->data), b->index);
			node = b;
		}
		b = b->next;
	}
	return (node);
}
