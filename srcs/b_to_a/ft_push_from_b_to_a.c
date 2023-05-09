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
	int	*a_node_to_ra;
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
	a_node_to_ra = (int *)malloc(sizeof(int) * b_size);

	if (!tot_cost_arr || !a_final_cost_arr || !a_node_to_ra)
		return ;

	tot_cost_arr = ft_get_total_cost_arr(a, b, tot_cost_arr);
	a_node_to_ra = ft_find_big_close_a_node_idx(a, b, a_pos, b_pos);
	a_final_cost_arr = ft_get_a_final_cost_arr(a, b, a_node_to_ra, a_final_cost_arr);

	printf("\n");

	// for (int i = 0; i < b_size; ++i) {
	// 	printf("a_cost[%d]: %d\n", i, a_cost[i]);
	// 	printf("b_cost[%d]: %d\n", i, b_cost[i]);
	// 	printf("tot_cost_arr[%d]: %d\n", i, tot_cost_arr[i]);
	// 	printf("a_node_to_ra[%d]: %d\n", i, a_node_to_ra[i]);
	// 	printf("a_final_cost_arr[%d]: %d\n", i, a_final_cost_arr[i]);
	// 	printf("\n");
	// }

	int	incoming;
	int	big_bro;

	incoming = 1264;
	big_bro = ft_find_big_bro(a, incoming);
	printf("incoming: %d\n", incoming);
	printf("big_bro: %d\n", big_bro);


	free(a_pos);
	free(b_pos);
	// free(a_cost);
	// free(b_cost);
	free(tot_cost_arr);
	free(a_node_to_ra);
	free(a_final_cost_arr);
}
