/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_cheapest_a_node_idx.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:42:26 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/01 16:42:28 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * This function will run through cost_arr
 * and return the index of the cheapest a_node in 'a'.
 *
*/
int	ft_find_cheapest_a_node_idx(t_list **a, t_list **b)
{
	int	*cost_arr;
	int	*a_cost;
	int	*b_cost;
	int	a_size;
	int	cheapest;
	int	cheapest_idx;
	int	i;

	a_size = ft_get_stack_size(*a);
	cost_arr = NULL;
	a_cost = NULL;
	b_cost = NULL;
	a_cost = ft_init_a_cost_arr(a);
	b_cost = ft_init_b_cost_arr(a, b);
	cost_arr = ft_calculate_cost_arr(a, b);
	cheapest = INT_MAX;
	cheapest_idx = 0;
	i = 0;
	while (i < a_size)
	{

		printf("a_cost: %d\n", a_cost[i]);
		printf("b_cost: %d\n", b_cost[i]);
		printf("cost_arr[%d]: %d\n", i + 1, cost_arr[i]);
		printf("\n");
		if (cost_arr[i] < cheapest)
		{
			cheapest = cost_arr[i];
			cheapest_idx = i;
		}
		++i;
	}
	// return (free(cost_arr), cheapest_idx + 1);
	return (free(cost_arr), cheapest_idx);
}
