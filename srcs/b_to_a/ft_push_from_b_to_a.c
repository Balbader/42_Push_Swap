/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:59:42 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/05 13:59:44 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void	ft_rotate_b(t_list **b)
// {
// }

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	*a_pos_arr;
	int	b_pos_arr[5] = {23, 44, 12, 13, 32};
	// int	*b_pos_arr;
	int	*a_cost_arr;
	int	*b_cost_arr;
	int	b_size;
	// int	a_size;

	// a_size = ft_get_stack_size(a);
	a_pos_arr = NULL;
	a_pos_arr = ft_get_pos_arr(a);
	a_cost_arr = NULL;
	a_cost_arr = ft_get_cost_arr(a);

	b_size = ft_get_stack_size(b);
	// b_pos_arr = NULL;
	// b_pos_arr = ft_get_pos_arr(b);
	b_cost_arr = NULL;
	b_cost_arr = ft_get_cost_arr(b);

	int *a_node_pos_to_ra;

	a_node_pos_to_ra = ft_find_big_close_a_node_idx(a, b, a_pos_arr, b_pos_arr);

	int	*a_final_cost;
	a_final_cost = NULL;
	a_final_cost = (int *)malloc(sizeof(int) * b_size);
	if (!a_final_cost)
		return ;
	a_final_cost = ft_get_a_final_cost_arr(a, b, a_node_pos_to_ra, a_final_cost);

	int	*a_final_cost_cpy;
	a_final_cost_cpy = NULL;
	a_final_cost_cpy = ft_cpy_a_final_cost(a_final_cost, b_size,
									a_final_cost_cpy);
	for (int i = 0; i < b_size; ++i) {
		printf("a_final_cost[%d]: %d\n", i, a_final_cost[i]);
	}

	printf("\n");
	for (int i = 0; i < b_size; ++i) {
		printf("a_final_cost_cpy[%d]: %d\n", i, a_final_cost_cpy[i]);
	}

	printf("\n");
	for (int i = 0; i < b_size; ++i) {
		printf("b_cost_arr[%d]: %d\n", i, b_cost_arr[i]);
	}

	printf("\n");

	int	*final_cost;
	final_cost = NULL;
	final_cost = ft_get_tot_cost(a_final_cost, b_cost_arr, b_size);
	for (int i = 0; i < b_size; ++i) {
		printf("final_cost[%d]: %d\n", i, final_cost[i]);
	}

	printf("\n");

	int	cheapest_idx;
	cheapest_idx = ft_get_cheapest_idx(final_cost, b_size);
	printf("cheapest_idx: %d\n", cheapest_idx);

	int	hit_a;
	hit_a = ft_get_hit(a_final_cost_cpy, b_size, cheapest_idx);
	printf("hit_a: %d\n", hit_a);

	ft_reorder_stack(a, hit_a);
	ft_re_init_index(*a);
	ft_print_stack(a, "a");

	printf("\n");

	int	hit_b;
	hit_b = ft_get_hit(b_cost_arr, b_size, cheapest_idx);
	printf("hit_b: %d\n", hit_b);
















	free(final_cost);
	free(a_pos_arr);
	// free(b_pos_arr);
	free(a_cost_arr);
	free(b_cost_arr);
	free(a_node_pos_to_ra);
	free(a_final_cost);
}
