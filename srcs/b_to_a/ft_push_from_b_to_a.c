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
	int	*b_pos_arr;
	int	*a_cost_arr;
	int	*b_cost_arr;
	int	b_size;
	int	a_size;

	a_size = ft_get_stack_size(a);
	a_pos_arr = NULL;
	a_pos_arr = ft_get_a_pos_arr(a);
	for (int i = 0; i < a_size; ++i) {
		printf("a_pos_arr[%d]: %d\n", i, a_pos_arr[i]);
	}

	printf("\n");

	a_cost_arr = NULL;
	a_cost_arr = ft_get_cost_arr(a);
	for (int i = 0; i < a_size; ++i) {
		printf("a_cost_arr[%d]: %d\n", i, a_cost_arr[i]);
	}

	printf("\n");

	b_size = ft_get_stack_size(b);
	b_pos_arr = NULL;
	b_pos_arr = ft_get_b_pos_arr(b);
	for (int i = 0; i < b_size; ++i) {
		printf("b_pos_arr[%d]: %d\n", i, b_pos_arr[i]);
	}

	printf("\n");

	b_cost_arr = NULL;
	b_cost_arr = ft_get_cost_arr(b);
	for (int i = 0; i < a_size; ++i) {
		printf("a_cost_arr[%d]: %d\n", i, a_cost_arr[i]);
	}
}

