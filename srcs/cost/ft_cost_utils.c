/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 07:13:23 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/04 07:13:24 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_tot_cost_arr(t_list **a, t_list **b)
{
	int	*tot_cost;
	int	b_size;

	b_size = ft_get_stack_size(b);
	tot_cost = (int *)malloc(sizeof(int) * b_size);
	if (!tot_cost)
		return ;
	tot_cost = ft_get_total_cost_arr(a, b, tot_cost);
	for (int i = 0; i < b_size; ++i) {
		printf("tot_cost[%d]: %d\n", i, tot_cost[i]);
	}
	free(tot_cost);
}
