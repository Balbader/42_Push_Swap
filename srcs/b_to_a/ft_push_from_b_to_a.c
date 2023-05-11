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
}
