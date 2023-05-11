/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:14:08 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/11 13:14:10 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	*cost_a;
	int	*cost_b;
	int	*pos_a;
	int	*pos_b;

	ft_re_init_index(*a);
	ft_re_init_index(*b);
	ft_print_stack(a, "a");
	ft_print_stack(b, "b");
	printf("\n");
	cost_a = NULL;
	cost_b = NULL;
	cost_a = ft_get_cost_arr(a, cost_a);
	cost_b = ft_get_cost_arr(b, cost_b);
	for (int i = 0; i < 3; ++i) {
		printf("cost_a[%d]: %d\n", i, cost_a[i]);
	}
	printf("\n");
	for (int i = 0; i < 7; ++i) {
		printf("cost_b[%d]: %d\n", i, cost_b[i]);
	}

	printf("\n");
	pos_a = NULL;
	pos_b = NULL;
	pos_a = ft_get_pos_arr(a, pos_a);
	pos_b = ft_get_pos_arr(b, pos_b);
	for (int i = 0; i < 3; ++i) {
		printf("pos_a[%d]: %d\n", i, pos_a[i]);
	}
	printf("\n");
	for (int i = 0; i < 7; ++i) {
		printf("pos_b[%d]: %d\n", i, pos_b[i]);
	}
	free(cost_a);
	free(cost_b);
	free(pos_a);
	free(pos_b);
}
