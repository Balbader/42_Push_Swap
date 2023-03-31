/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_cheapest_a_node.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 03:16:45 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/30 03:16:51 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * This function will run through 'a' and return the a_node.idx that is the
 * cheapest to send to 'b'.
*/
int	ft_find_cheapest_a(t_list **a, t_list **b)
{
	int	*cost_arr;
	int	a_size;
	int	cheapest;
	int	cheapest_idx;
	int	i;

	//==========================================
	// int *a_data = ft_init_data_array(a);
	//==========================================

	a_size = ft_get_stack_size(*a);
	printf("ft_find_cheapest_a: a_size: %d\n", a_size);
	cost_arr = NULL;
	cost_arr = ft_calculate_cost_arr(a, b);
	cheapest = INT_MAX;
	cheapest_idx = 0;
	i = 0;
	while (i < a_size)
	{
		if (cost_arr[i] < cheapest)
		{
			cheapest = cost_arr[i];
			cheapest_idx = i;
		}
		++i;
	}
	// printf("cheapest a_node idx: %d\n", cheapest_idx);
	// printf("cheapest a_node data: %d\n", a_data[cheapest_idx]);
	return (free(cost_arr), cheapest_idx);
}

//==========================================
// int *a_data = ft_init_data_array(a);
// int *a_idx = ft_init_idx_array(a);
//==========================================

//==========================================
// int *instructions = NULL;
// int *reg = NULL;
//==========================================

// instructions = ft_optimized_instructions(a_cost_arr[i], b_cost_arr[i]);
// printf("-------------------------------> %d\n", a_data[i]);
// printf("idx: %d\n", a_idx[i]);
// printf("a_cost: %d\n", a_cost_arr[i]);
// printf("b_cost: %d\n", b_cost_arr[i]);
// printf("cost_arr[%d]: %d\n", i, cost_arr[i]);
// printf("opt_instructions = [%d, %d, %d]\n", instructions[0],
// 		instructions[1], instructions[2]);
// printf("\n");

// reg = ft_reg_instructions(a_cost_arr[i], b_cost_arr[i]);
// printf("-------------------------------> %d\n", a_data[i]);
// printf("idx: %d\n", a_idx[i]);
// printf("a_cost: %d\n", a_cost_arr[i]);
// printf("b_cost: %d\n", b_cost_arr[i]);
// printf("cost_arr[%d]: %d\n", i, cost_arr[i]);
// printf("reg_instructions = [%d, %d, %d]\n", reg[0], reg[1], reg[2]);
// printf("\n");
