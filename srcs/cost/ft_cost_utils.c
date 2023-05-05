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

int	ft_find_cheapest_b_node_to_move_idx(t_list **a, t_list **b, int node_to_mv)
{
	int	*tot_cost;
	int	b_size;
	int	i;

	b_size = ft_get_stack_size(b);
	node_to_mv = INT_MAX;
	tot_cost = (int *)malloc(sizeof(int) * b_size);
	if (!tot_cost)
		return (0);
	tot_cost = ft_get_total_cost_arr(a, b, tot_cost);
	i = 0;
	while (i < b_size)
	{
		if (tot_cost[i] < node_to_mv)
			node_to_mv = tot_cost[i];
		++i;
	}
	return (free(tot_cost), node_to_mv);
}
