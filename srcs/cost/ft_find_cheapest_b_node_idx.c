/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_cheapeast_b_node_idx.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:54:37 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/05 13:54:41 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Logic:
 * if incoming_pos is < a_node->pos && a_node->pos is the smallest
 * 		ft_pa(incoming);
 * if incoming_pos is < a_node->pos && a_node->pos is the not smallest
 * 		find a_node->pos that is the smallest && greater && closest to incoming_pos
 * 		ft_ra(a) until a_node is on top of "a"
 * 		ft_pa(incoming);
 * if incoming_pos is > a_node->pos
 * 		find a_node->pos that is the smallest && greater && closest to incoming_pos
 * 		ft_ra(a) until a_node is on top of "a"
 * 		ft_pa(incoming);
*/

static int	ft_smallest_arr_elem(int *arr, int arr_size, int cheapest)
{
	int	i;

	i = 0;
	while (i < arr_size)
	{
		if (arr[i] < cheapest)
			cheapest = arr[i];
		++i;
	}
	return (cheapest);
}

int	ft_find_cheapest_b_node_idx(t_list **a, t_list **b, int node_to_mv)
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
	cheapest = ft_smallest_arr_elem(tot_cost, b_size, node_to_mv_idx);
	i = 0;
	while (i < b_size)
	{
		if (tot_cost[i] < 0)
				tot_cost[i] *= -1;
		if (tot_cost[i] == 0)
			node_to_mv_idx = i + 1;
		else if (tot_cost[i] < cheapest)
			node_to_mv_idx = i;
		++i;
	}
	return (free(tot_cost), node_to_mv);
}
