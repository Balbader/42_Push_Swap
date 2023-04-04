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
static void	ft_run_job(t_list **a, t_list **b)
{
	int	*a_cost;
	int	*b_cost;
	// int	closest_b_node_idx;
	int	cheapest_a_node_idx;
	int	*cost;

	ft_re_init_index(*a);
	ft_re_init_index(*b);
	cost = ft_calculate_cost_arr(a, b);
	a_cost = ft_init_a_cost_arr(a);
	b_cost = ft_init_b_cost_arr(a, b);
	cheapest_a_node_idx = ft_find_cheapest_a_node_idx(a, b);
	// closest_b_node_idx = ft_find_closest_b_node_idx(b, a_data[cheapest_a_node_idx]);
	// printf("ft_run_job: cost[%d]: %d\n", i, cost[i]);
	// printf("cheapest_a_node_idx:%d\n", cheapest_a_node_idx);
	// printf("closest_b_node_idx:%d\n", closest_b_node_idx);
	// printf("\n");

	ft_do_cheapest_a(a, b,
			a_cost[cheapest_a_node_idx], b_cost[cheapest_a_node_idx]);
}
*/

void	ft_push_from_a_to_b(t_list **a, t_list **b)
{
	int	i;
	int	a_size;
	int	cheapest_a_node_idx;
	int	*a_cost;
	int	*b_cost;
	int	*cost;

	i = 0;
	while (i < 6)
	{
		a_size = ft_get_stack_size(*a);
		printf("----------------------------->a_size: %d\n", a_size);
		ft_re_init_index(*a);
		ft_re_init_index(*b);
		ft_print_stack(b, "b");
		ft_print_stack(a, "a");
		a_cost = ft_init_a_cost_arr(a);
		b_cost = ft_init_b_cost_arr(a, b);
		cost = ft_calculate_cost_arr(a, b);
		cheapest_a_node_idx = ft_find_cheapest_a_node_idx(a, b);
		printf("cheapest_a_node_idx:%d\n", cheapest_a_node_idx);
		printf("a_cost[%d]: %d\n", cheapest_a_node_idx, a_cost[cheapest_a_node_idx]);
		printf("b_cost[%d]: %d\n", cheapest_a_node_idx, b_cost[cheapest_a_node_idx]);
		printf("cost[%d]: %d\n", cheapest_a_node_idx, cost[cheapest_a_node_idx]);
		printf("cheapest_a_node_idx:%d\n", cheapest_a_node_idx);
		ft_do_cheapest_a(a, b,
				a_cost[cheapest_a_node_idx], b_cost[cheapest_a_node_idx]);
		printf("\n");
		++i;
	}
}
