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
	if (cost > 0)
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
