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

static int	ft_check_costs(int a_cost, int b_cost)
{
	return ((a_cost < 0 && b_cost < 0) || (a_cost > 0 && b_cost > 0));
}

static int	ft_check_cost(int cost)
{
	if (cost < 0)
		cost *= -1;
	return (cost);
}

int	*ft_calculate_cost_arr(t_list **a, t_list **b)
{
	int	a_size;
	int	*a_cost_arr;
	int	*b_cost_arr;
	int	*cost_arr;
	int	i;

	//==========================================
	int *a_data = ft_init_data_array(a);
	int *a_idx = ft_init_idx_array(a);
	//==========================================

	//==========================================
	int *instructions = NULL;
	//==========================================

	ft_re_init_index(*b);
	a_size = ft_get_stack_size(*a);
	a_cost_arr = ft_init_a_cost_arr(a);
	b_cost_arr = ft_init_b_cost_arr(a, b);
	cost_arr = (int *)malloc(sizeof(int) * a_size);
	if (!cost_arr)
		return (0);
	i = 0;
	while (i < a_size)
	{
		// printf("-------------------------------> %d\n", a_data[i]);
		if ((ft_check_costs(a_cost_arr[i], b_cost_arr[i]) == 1))
		{
			instructions =
					ft_optimized_instructions(a_cost_arr[i], b_cost_arr[i]);

			cost_arr[i] = ft_optimize_cost(a_cost_arr[i], b_cost_arr[i]);

			printf("-------------------------------> %d\n", a_data[i]);
			printf("idx: %d\n", a_idx[i]);
			printf("a_cost: %d\n", a_cost_arr[i]);
			printf("b_cost: %d\n", b_cost_arr[i]);
			printf("cost_arr[%d]: %d\n", i, cost_arr[i]);
			printf("instructions = [%d, %d, %d]\n", instructions[0],
		  			instructions[1], instructions[2]);
			printf("\n");
		}
		else
		{
			cost_arr[i] = ((ft_check_cost(a_cost_arr[i]))
					+ ft_check_cost(b_cost_arr[i]) + 1);
			printf("-------------------------------> %d\n", a_data[i]);
			printf("idx: %d\n", a_idx[i]);
			printf("a_cost: %d\n", a_cost_arr[i]);
			printf("b_cost: %d\n", b_cost_arr[i]);
			printf("cost_arr[%d]: %d\n", i, cost_arr[i]);
			printf("opti_count: %d\n", cost_arr[i]);
			printf("\n");
		}
		(*a) = (*a)->next;
		++i;
	}
	return (free(a_cost_arr), free(b_cost_arr), cost_arr);
}
