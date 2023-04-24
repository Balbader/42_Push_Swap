/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_to_a_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:52:38 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/18 13:52:39 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_cost_and_rotate(int cost, t_list **a, t_list **b)
{
	int	i;

	if (cost == 0)
		ft_pa(a, b);
	else if (cost > 0)
	{
		i = 0;
		while (i < cost)
		{
			ft_rb(b);
			++i;
		}
		ft_pa(a, b);
	}
	else if (cost < 0)
	{
		i = 0;
		cost *= -1;
		while (i < cost)
		{
			ft_rrb(b);
			++i;
		}
		ft_pa(a, b);
	}
}

void	ft_re_order_data_and_costs(t_list **b, int *data, int *costs)
{
	int	a_cost;
	int	b_cost;
	int	c_cost;

	a_cost = ft_cost_first_big(b);
	b_cost = ft_cost_second_big(b);
	c_cost = ft_cost_third_big(b);
	if (a_cost > c_cost)
	{
		ft_swap_values(&data[0], &data[2]);
		ft_swap_values(&costs[0], &costs[2]);
	}
	if (a_cost > b_cost)
	{
		ft_swap_values(&data[0], &data[1]);
		ft_swap_values(&costs[0], &costs[1]);
	}
	if (b_cost > c_cost)
	{
		ft_swap_values(&data[1], &data[2]);
		ft_swap_values(&costs[1], &costs[2]);
	}
}
