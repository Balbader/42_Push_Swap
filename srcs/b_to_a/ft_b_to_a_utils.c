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

static int	ft_check_a_pos(t_list **a, int big_bro_idx)
{
	int	a_size;
	int	mid;

	a_size = ft_get_stack_size(a);
	mid = a_size / 2;
	if (big_bro_idx < mid)
		return (1);
	return (0);
}

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
	if (ft_check_a_pos(a, big_bro_idx) == 1)
	{
		while (i < big_bro_idx)
		{
			ft_ra(a);
			++i;
		}
	}
	else if (ft_check_a_pos(a, big_bro_idx) == 0)
	{
		rra_tot = a_size - (big_bro_idx - 1);
		while (i < rra_tot)
		{
			ft_rra(a);
			++i;
		}
	}
}
