/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a_utils.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:00:09 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/05 14:00:10 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_cpy_a_final_cost(int *a_final_cost, int a_final_cost_size, int *copy)
{
	int	i;

	copy = (int *)malloc(sizeof(int) * a_final_cost_size);
	if (!copy)
		return (0);
	i = 0;
	while (i < a_final_cost_size)
	{
		copy[i] = a_final_cost[i];
		++i;
	}
	return (copy);
}

int	ft_get_cheapest_idx(int *final_cost, int b_size)
{
	int	final_idx;
	int	i;

	final_idx = INT_MAX;
	i = 0;
	while (i < b_size)
	{
		if (final_cost[i] < final_idx)
			final_idx = i;
		++i;
	}
	return (final_idx);
}

int	ft_get_hit(int *cost_arr, int cost_arr_size, int cheapest_idx)
{
	int	hit;
	int	i;

	i = 0;
	while (i < cost_arr_size)
	{
		if (i == cheapest_idx)
			hit = cost_arr[i];
		++i;
	}
	return (hit);
}

void	ft_reorder_stack(t_list **stack, int hit)
{
	int	i;

	if (hit == 0)
		return ;
	if (hit < 0)
	{
		i = hit;
		while (i < 0)
		{
			ft_reverse_rotate(stack);
			++i;
		}
	}
	if (hit > 0)
	{
		i = 0;
		while (i < hit)
		{
			ft_rotate(stack);
			++i;
		}
	}
}
