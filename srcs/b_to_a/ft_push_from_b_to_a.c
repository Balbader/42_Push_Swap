/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:13:08 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/09 10:13:55 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	*tot_cost_arr;
	int	*a_final_cost_arr;
	int	*a_pos_to_ra;
	int	*a_pos;
	int	*b_pos;
	// int	*a_cost;
	// int	*b_cost;

	// int	a_size;
	int	b_size;

	// (void)b;
	ft_re_init_index(*a);
	ft_print_stack(a, "a");
	printf("\n");
	ft_re_init_index(*b);
	ft_print_stack(b, "b");
	printf("\n");

	a_pos = NULL;
	b_pos = NULL;
	// a_cost = NULL;
	// b_cost = NULL;

	a_pos = ft_get_pos_arr(a);
	b_pos = ft_get_pos_arr(b);
	// a_cost = ft_get_cost_arr(a);
	// b_cost = ft_get_cost_arr(b);

	// a_size = ft_get_stack_size(a);
	b_size = ft_get_stack_size(b);

	tot_cost_arr = (int *)malloc(sizeof(int) * b_size);
	a_final_cost_arr = (int *)malloc(sizeof(int) * b_size);
	a_pos_to_ra = (int *)malloc(sizeof(int) * b_size);

	if (!tot_cost_arr || !a_final_cost_arr || !a_pos_to_ra)
		return ;

	tot_cost_arr = ft_get_total_cost_arr(a, b, tot_cost_arr);
	a_pos_to_ra = ft_find_big_close_a_node_pos(a, b, a_pos, b_pos);
	a_final_cost_arr = ft_get_a_final_cost_arr(a, b, a_pos_to_ra, a_final_cost_arr);

	printf("\n");

	int	big_bro_idx;
	big_bro_idx = 0;

	for (int i = 0; i < b_size; ++i) {
		// printf("a_cost[%d]: %d\n", i, a_cost[i]);
		// printf("b_cost[%d]: %d\n", i, b_cost[i]);
		// printf("tot_cost_arr[%d]: %d\n", i, tot_cost_arr[i]);
		printf("a_pos_to_ra[%d]: %d\n", i, a_pos_to_ra[i]);
		big_bro_idx = ft_find_big_bro_idx(a, a_pos_to_ra[i]);
		printf("big_bro_idx: %d\n", big_bro_idx);
		// printf("a_final_cost_arr[%d]: %d\n", i, a_final_cost_arr[i]);
		printf("\n");
	}


	free(a_pos);
	free(b_pos);
	// free(a_cost);
	// free(b_cost);
	free(tot_cost_arr);
	free(a_pos_to_ra);
	free(a_final_cost_arr);
}
