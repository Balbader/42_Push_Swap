/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_to_a_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:14:02 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/09 12:14:04 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Check if idx is before || after mid idx in stack
*/
static int	ft_check_pos(t_list **stack, int idx)
{
	int	stack_size;
	int	mid;

	stack_size = ft_get_stack_size(stack);
	mid = stack_size / 2;
	if (idx < mid)
		return (1);
	return (0);
}

/*
 * Returns the idx that needs to be fetched both in stack_a and stack_b to
 * push from b tp a
*/
int	ft_fetch_cheapest(int *tot_cost_arr, t_list **b)
{
	int	cheapest;
	int	b_size;
	int	i;

	b_size = ft_get_stack_size(b);
	cheapest = INT_MAX;
	i = 0;
	while (i < b_size)
	{
		if (tot_cost_arr[i] < 0)
			tot_cost_arr[i] *= -1;
		if (tot_cost_arr[i] < cheapest)
			cheapest = i;
		++i;
	}
	return (cheapest);
}

void	ft_reorder_a(t_list **a, int big_bro_idx)
{
	int	i;
	int	rra_tot;
	int	a_size;

	a_size = ft_get_stack_size(a);
	i = 0;
	if (ft_check_pos(a, big_bro_idx) == 1)
	{
		while (i < big_bro_idx)
		{
			ft_ra(a);
			++i;
		}
	}
	else if (ft_check_pos(a, big_bro_idx) == 0)
	{
		rra_tot = a_size - (big_bro_idx - 1);
		while (i < rra_tot)
		{
			ft_rra(a);
			++i;
		}
	}
}

void	ft_reorder_b(t_list **b, int small_bro_idx)
{
	int	i;
	int	rrb_tot;
	int	b_size;

	b_size = ft_get_stack_size(b);
	i = 0;
	if (ft_check_pos(b, small_bro_idx) == 1)
	{
		while (i < small_bro_idx)
		{
			ft_rb(b);
			++i;
		}
	}
	else if (ft_check_pos(b, small_bro_idx) == 0)
	{
		rrb_tot = b_size - (small_bro_idx - 1);
		while (i < rrb_tot)
		{
			ft_rrb(b);
			++i;
		}
	}
}
