/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:34:49 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/13 12:34:51 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_cost_and_rotate(int cost, t_list **b)
{
	int	i;

	if (cost < 0)
	{
		i = 0;
		cost *= -1;
		while (i < cost)
		{
			ft_rrb(b);
			++i;
		}
	}
	if (cost > 0)
	{
		i = 0;
		while (i < cost)
		{
			ft_rb(b);
			++i;
		}
	}
}

void	ft_push_cheapest(t_list **a, t_list **b, int cheapest_idx)
{
	int	cost;

	cost = ft_calculate_cost(b, cheapest_idx);
	ft_check_cost_and_rotate(cost, b);
	ft_pa(a, b);
}
