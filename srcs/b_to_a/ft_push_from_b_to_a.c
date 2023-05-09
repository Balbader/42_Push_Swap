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
	// int	a_size;
	int	b_size;

	// (void)b;
	ft_re_init_index(*a);
	ft_print_stack(a, "a");
	printf("\n");
	ft_re_init_index(*b);
	ft_print_stack(b, "b");
	printf("\n");
	// a_size = ft_get_stack_size(a);
	b_size = ft_get_stack_size(b);
	tot_cost_arr = (int *)malloc(sizeof(int) * b_size);
	if (!tot_cost_arr)
		return ;
	tot_cost_arr = ft_get_total_cost_arr(a, b, tot_cost_arr);
	printf("\n");
	for (int i = 0; i < b_size; ++i) {
		printf("tot_cost_arr[%d]: %d\n", i, tot_cost_arr[i]);
	}
}
