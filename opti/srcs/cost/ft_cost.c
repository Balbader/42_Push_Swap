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

int	*ft_calculate_costs(int first_idx, int second_idx, int third_idx)
{
	int	*costs;
	int	first;
	int	second;
	int	third;

	costs = (int *)malloc(sizeof(int) * 3);
	if (!costs)
		return (0);
}
