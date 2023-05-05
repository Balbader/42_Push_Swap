/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 07:13:23 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/04 07:13:24 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_biggest_arr_elem(int *arr, int arr_size, int big)
{
	int	i;

	i = 0;
	while (i < arr_size)
	{
		if (arr[i] > big)
			big = arr[i];
		++i;
	}
	return (big);
}

int	ft_find_cheapest_b_node_to_move_idx(t_list **a, t_list **b, int node_to_mv)
{
	int	node_to_mv_idx;
	int	cheapest;
	int	*tot_cost;
	int	b_size;
	int	i;

	node_to_mv_idx = 0;
	b_size = ft_get_stack_size(b);
	tot_cost = (int *)malloc(sizeof(int) * b_size);
	if (!tot_cost)
		return (0);
	tot_cost = ft_get_total_cost_arr(a, b, tot_cost);
	cheapest = ft_biggest_arr_elem(tot_cost, b_size, node_to_mv_idx);
	printf("cheapest: %d\n", cheapest);
	i = 0;
	while (i < b_size)
	{
		if (tot_cost[i] == 0)
			node_to_mv_idx = i + 1;
		++i;
	}
	return (free(tot_cost), node_to_mv);
}
