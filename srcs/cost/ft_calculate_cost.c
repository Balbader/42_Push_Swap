/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate_cost.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:07:00 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/24 13:07:02 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_calculate_cost(t_list **a, t_list **b)
{
	// int	cheapest; -> this will be returned value
	int	a_size;
	int	*a_cost_arr;
	int	closest_idx_cost;

	a_size = ft_get_stack_size(*a);
	closest_idx_cost = ft_init_b_cost_arr(a, b);
	printf("closest_idx_cost: %d\n", closest_idx_cost);
	a_cost_arr = ft_init_a_cost_arr(a);
	ft_print_stack(b, "b");
	free(a_cost_arr);
}
