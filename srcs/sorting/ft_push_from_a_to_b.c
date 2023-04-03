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

static void	ft_run_job(t_list **a, t_list **b)
{
	int	*a_cost;
	int	*b_cost;
	// int	*a_data;
	// int	*cost;
	int	cheapest_a_node_idx;

	ft_re_init_index(*a);
	ft_re_init_index(*b);
	// cost = ft_calculate_cost_arr(a, b);
	// a_data = ft_init_data_array(a);
	a_cost = ft_init_a_cost_arr(a);
	b_cost = ft_init_b_cost_arr(a, b);
	cheapest_a_node_idx = ft_find_cheapest_a_node_idx(a, b);
	// printf("a_cost[%d]: %d\n", i, a_cost[i]);
	// printf("b_cost[%d]: %d\n", i, b_cost[i]);
	// printf("cost[%d]: %d\n", i, cost[i]);
	// printf("cheapest_a_node_idx:%d\n", cheapest_a_node_idx);
	// printf("cheapest_a_node_data:%d\n", a_data[cheapest_a_node_idx]);
	// printf("\n");
	ft_do_cheapest_a(a, b,
			a_cost[cheapest_a_node_idx], b_cost[cheapest_a_node_idx]);
}

void	ft_push_from_a_to_b(t_list **a, t_list **b, int a_size)
{
	int	i;

	printf("----------------------------->a_size: %d\n", a_size);
	i = 0;
	while (i < a_size)
	{
		// printf("test\n");
		// ft_run_job(a, b, i);
		ft_run_job(a, b);
		++i;
	}
		ft_print_stack(a, "a");
		ft_print_stack(b, "b");
}
