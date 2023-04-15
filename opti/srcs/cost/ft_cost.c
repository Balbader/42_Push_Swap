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

int	*ft_init_indexes_array(t_list **b, int *indexes)
{
	indexes[0] = ft_find_biggest_node_idx(b);
	indexes[1] = ft_find_second_biggest_node_idx(b);
	indexes[2] = ft_find_third_biggest_node_idx(b);
	return (indexes);
}

int	*ft_sort_indexes(t_list **b, int *indexes)
 {
	int	cost_1st;
	int	cost_2nd;
	int	cost_3rd;

	cost_1st = ft_first_cost(b);
	cost_2nd = ft_second_cost(b);
	cost_3rd = ft_third_cost(b);
	if (cost_1st > cost_3rd)
		ft_swap_values(&indexes[0], &indexes[2]);
	else if (cost_1st > cost_2nd)
		ft_swap_values(&indexes[0], &indexes[1]);
	else if (cost_2nd > cost_3rd)
		ft_swap_values(&indexes[1], &indexes[2]);
	return (indexes);
}

/*
 * This function should return an array of the indexes of the 3 biggest nodes
 * in 'b' that nees to be pushed to 'a' in the order in which they need to
 * be pushed.
*/
void	ft_compare_costs_and_sort_indexes(t_list **b)
{
	int	cost_1st;
	int	cost_2nd;
	int	cost_3rd;
	int	*indexes;

	indexes = (int *)malloc(sizeof(int) * 3);
	if (!indexes)
		return ;
	indexes = ft_init_indexes_array(b, indexes);
	cost_1st = ft_first_cost(b);
	cost_2nd = ft_second_cost(b);
	cost_3rd = ft_third_cost(b);
	if (ft_costs_are_different(cost_1st, cost_2nd, cost_3rd) == 1)
	{
		indexes = ft_sort_indexes(b, indexes);
		for (int i = 0; i < 3; ++i) {
			printf("indexes[%d]: [%d]\n", i, indexes[i]);
		}
	}
	else if (ft_costs_are_different(cost_1st, cost_2nd, cost_3rd) == 0)
		ft_re_order_costs(first, second, third);
}
