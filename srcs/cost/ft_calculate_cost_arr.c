/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate_cost_arr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 10:18:03 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/27 10:18:05 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_cost(int cost)
{
	if (cost < 0)
		cost = cost * -1;
	return (cost);
}

int	*ft_calculate_cost_arr(t_list **a, t_list **b)
{
	int	a_size;
	int	*a_cost_arr;
	int	*b_cost_arr;
	int	*cost_arr;
	int	i;

	a_size = ft_get_stack_size(*a);
	a_cost_arr = ft_init_a_cost_arr(a);
	b_cost_arr = ft_init_b_cost_arr(a, b);
	cost_arr = (int *)malloc(sizeof(int) * a_size);
	if (!cost_arr)
		return (0);
	ft_re_init_index(*b);
	i = 0;
	while (i < a_size)
	{
		cost_arr[i] = ft_check_cost(a_cost_arr[i]) + ft_check_cost(b_cost_arr[i]);
		printf("a_cost_arr[%d]: %d\n", i, a_cost_arr[i]);
		printf("b_cost_arr[%d]: %d\n", i, b_cost_arr[i]);
		printf("cost_arr[%d]: %d\n", i, cost_arr[i]);
		printf("\n");
		++i;
	}
	return (free(a_cost_arr), free(b_cost_arr), cost_arr);
}
