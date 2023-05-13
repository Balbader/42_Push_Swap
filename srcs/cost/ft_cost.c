/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:01:40 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/11 13:01:42 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_node_cost(t_list **stack, int idx)
{
	int	stack_size;
	int	mid;
	int	cost;

	stack_size = ft_get_stack_size(stack);
	mid = stack_size / 2;
	cost = 0;
	if (idx <= mid)
		cost = idx;
	if (idx > mid)
		cost = (stack_size - idx) * -1;
	return (cost);
}

/*
 * Returns the index of the cheapest b_node to push to "a"
*/
int	ft_get_cheapest_b_node(t_list **a, t_list **b)
{
	int	cheapest_idx;
	int	big_bro_idx;
	int	cost_b;

	cost
	return (cheapest_idx);
}
