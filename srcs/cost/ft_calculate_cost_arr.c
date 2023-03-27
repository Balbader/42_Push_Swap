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

/*
static int	ft_rr_count(int a_cost, int b_cost)
{
	int	count;

	count = 0;
	if (a_cost > 0 && b_cost > 0 && a_cost > b_cost)
		count = b_cost; // rr
	else if (a_cost > 0 && b_cost > 0 && a_cost < b_cost)
		count = a_cost; // rr
	return (count);
}

static int	ft_rrr_count(int a_cost, int b_cost)
{
	int	count;

	count = 0;
	if (a_cost < 0 && b_cost < 0 && a_cost < b_cost)
		count = b_cost * -1; // rrr
	else if (a_cost < 0 && b_cost < 0 && a_cost > b_cost)
		count = a_cost * -1; // rrr
	return (count);
}
*/

static int	ft_calculate_optimized_cost(int a_cost, int b_cost) // the '+ 1' is for ft_pb
{
	int	opt_cost;

	if (ft_check_costs(a_cost, b_cost) == 1 && a_cost > b_cost)
		opt_cost = a_cost - b_cost + 1;
	if (ft_check_costs(a_cost, b_cost) == 1 && a_cost < b_cost)
		opt_cost = b_cost - a_cost + 1;
	if (ft_check_costs(a_cost, b_cost) == 0 && a_cost < b_cost)
		opt_cost = ((b_cost - a_cost) * -1) + 1;
	if (ft_check_costs(a_cost, b_cost) == 0 && a_cost > b_cost)
		opt_cost = ((a_cost - b_cost) * -1) + 1;
	return (opt_cost);
}

// Use this function to return the optimized cost count
int	*ft_calculate_cost_arr(t_list **a, t_list **b)
{
	int	a_size;
	int	*a_cost_arr;
	int	*b_cost_arr;
	int	*cost_arr;
	// int	rr_count;
	// int	rrr_count;
	int	i;
	int j;

	ft_re_init_index(*b);
	a_size = ft_get_stack_size(*a);
	a_cost_arr = ft_init_a_cost_arr(a);
	b_cost_arr = ft_init_b_cost_arr(a, b);
	cost_arr = (int *)malloc(sizeof(int) * a_size);
	if (!cost_arr)
		return (0);
	i = 0;
	j = 1;
	while (i < a_size)
	// while (i < 6)
	{
		if ((ft_check_costs(a_cost_arr[i], b_cost_arr[i]) == 1))
			cost_arr[i] = ft_calculate_optimized_cost(a_cost_arr[i], b_cost_arr[i]);
		else
			cost_arr[i] = ((ft_check_cost(a_cost_arr[i]) + 1) + ft_check_cost(b_cost_arr[i]));
		printf("\n--------------------------> %d\n", j);
		printf("incoming a_data: %d\n", (*a)->data);
		// printf("incoming a_idx: %d\n", (*a)->index);
		// printf("a_cost_arr[%d]: %d\n", i, a_cost_arr[i]);
		printf("\n");
		printf("b_cost_arr[%d]: %d\n", i, b_cost_arr[i]);
		printf("cost_arr[%d]: %d\n", i, cost_arr[i]);
		printf("\n");
		(*a) = (*a)->next;
		++i;
		++j;
	}
	return (free(a_cost_arr), free(b_cost_arr), cost_arr);
}
