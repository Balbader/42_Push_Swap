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
	t_list	*node;
	int		cheapest_cost;
	int		a_size;
	int		b_size;
	int		i;

	ft_re_init_index(*a);
	ft_re_init_index(*b);
	a_size = ft_get_stack_size(a);
	b_size = ft_get_stack_size(b);
	printf("a_size: %d\n", a_size);
	printf("b_size: %d\n", b_size);
	printf("\n");
	node = NULL;
	node = (*b);
	cheapest_cost = ft_find_cheapest_cost(a, b,
			ft_get_big_bro_idx(a, node->data), node->index);
	i = 0;
	// while (*b)
	while (i < b_size)
	{
		if (cheapest_cost >= ft_find_cheapest_cost(a, b,
				ft_get_big_bro_idx(a, (*b)->data), (*b)->index))
		{
			cheapest_cost = ft_find_cheapest_cost(a, b,
					ft_get_big_bro_idx(a, (*b)->data), (*b)->index);
			node = (*b);
		}
		*b = (*b)->next;
		++i;
	}
	return (node);
}
