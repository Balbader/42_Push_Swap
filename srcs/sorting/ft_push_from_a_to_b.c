/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_a_to_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:27:02 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/24 12:27:04 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
static int	ft_get_arr_size(int *arr)
{
	int	i;

	i = 0;
	while (*arr)
		++i;
	return (i);
}

static void	ft_free_array(int *arr)
{
	int	i;
	int	arr_size;

	arr_size = ft_get_arr_size(arr);
	i = 0;
	while (i < arr_size)
	{
		free(&arr[i]);
		++i;
	}
}
*/

static void	ft_free_arr(int *a_cost, int *b_cost, int *cost)
{
	// ft_free_array(a_cost);
	// ft_free_array(b_cost);
	// ft_free_array(cost);
	free(a_cost);
	free(b_cost);
	free(cost);
}

void	ft_push_from_a_to_b(t_list **a, t_list **b, int a_size)
{
	int	i;
	int	cheapest_a_node_idx;
	int	*a_cost;
	int	*b_cost;
	int	*cost;

	i = 0;
	while (i < a_size)
	{
		ft_re_init_index(*a);
		ft_re_init_index(*b);
		a_cost = ft_init_a_cost_arr(a);
		b_cost = ft_init_b_cost_arr(a, b);
		cost = ft_calculate_cost_arr(a, b);
		cheapest_a_node_idx = ft_find_cheapest_a_node_idx(a, b);
		ft_do_cheapest_a(a, b, a_cost[cheapest_a_node_idx], b_cost[cheapest_a_node_idx]);
		++i;
	}
	ft_free_arr(a_cost, b_cost, cost);
}
