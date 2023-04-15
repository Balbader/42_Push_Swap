/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:29:42 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/15 12:29:47 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_calculate_cost(t_list **stack, int node_idx)
{
	int	size;
	int	cost;
	int	mid;

	if (!stack)
		return (0);
	size = ft_get_stack_size(stack);
	mid = size / 2;
	cost = 0;
	if (node_idx == 1)
		cost = 1;
	if (node_idx == size)
		cost = 1;
	if (node_idx <= mid)
		cost = (size - (size - node_idx)) - 1;
	if (node_idx > mid)
		cost = ((size - node_idx) + 1) * -1 ;
	return (cost);
}

static int	ft_costs_are_different(int a, int b, int c)
{
	return ((a != b) && (a != c) && (b != c));
}

void	ft_compare_costs(t_list **b)
{
	int	first;
	int	second;
	int	third;

	(void)b;
	first = -2;
	second = 9;
	third = 9;
	if (ft_costs_are_different(first, second, third) == 1)
		ft_sort_costs(first, second, third);
	else
		ft_re_order_costs(first, second, third);
}
// first = ft_first_cost(b);
// second = ft_second_cost(b);
// third = ft_third_cost(b);
// printf("first_cost: %d\n", first);
// printf("second_cost: %d\n", second);
// printf("third_cost: %d\n", third);
