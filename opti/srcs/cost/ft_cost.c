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
		cost = 0;
	if (node_idx == size)
		cost = 1;
	if (node_idx <= mid)
		cost = (size - (size - node_idx)) - 1;
	if (node_idx > mid)
		cost = ((size - node_idx) + 1) * -1 ;
	return (cost);
}

int	*ft_init_indexes_array(t_list **b, int *indexes)
{
	indexes[0] = ft_find_biggest_node_idx(b);
	indexes[1] = ft_find_second_biggest_node_idx(b);
	indexes[2] = ft_find_third_biggest_node_idx(b);
	return (indexes);
}

int	*ft_sort_indexes(int *indexes, int cost_1st_big,
		int cost_2nd_big, int cost_3rd_big)
{
	if (cost_1st_big > cost_3rd_big)
		ft_swap_values(&indexes[0], &indexes[2]);
	else if (cost_1st_big > cost_2nd_big)
		ft_swap_values(&indexes[0], &indexes[1]);
	else if (cost_2nd_big > cost_3rd_big)
		ft_swap_values(&indexes[1], &indexes[2]);
	return (indexes);
}

/*
 * This function should return an array of the indexes of the 3 biggest nodes
 * in 'b' that nees to be pushed to 'a' in the order in which they need to
 * be pushed.
*/
int	*ft_compare_costs_and_sort_indexes(t_list **b, int *indexes)
{
	int	cost_1st_big;
	int	cost_2nd_big;
	int	cost_3rd_big;

	indexes = ft_init_indexes_array(b, indexes);
	cost_1st_big = ft_cost_first_big(b);
	cost_2nd_big = ft_cost_second_big(b);
	cost_3rd_big = ft_cost_third_big(b);
	if (ft_costs_are_different(cost_1st_big, cost_2nd_big, cost_3rd_big) == 1)
		indexes = ft_sort_indexes(indexes, cost_1st_big,
				cost_2nd_big, cost_3rd_big);
	else if (ft_costs_are_different(cost_1st_big,
			cost_2nd_big, cost_3rd_big) == 0)
		indexes = ft_re_sort_indexes(cost_1st_big, cost_2nd_big, cost_3rd_big,
				indexes);
	return (indexes);
}
