/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_rr_or_rrr_count.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 01:15:28 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/30 01:15:30 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_rr_or_rrr_count(int a_cost, int b_cost)
{
	int	opti_count;

	opti_count = 0;
	if (ft_is_pos(a_cost, b_cost) == 1)
	{
		if (a_cost > b_cost)
			opti_count = b_cost;
		if (b_cost > a_cost)
			opti_count = a_cost;
	}
	if (ft_is_neg(a_cost, b_cost) == 1)
	{
		if (a_cost < b_cost)
		{
			opti_count = b_cost;
			if (opti_count > 0)
				opti_count *= -1;
		}
		if (b_cost < a_cost)
		{
			opti_count = a_cost;
			if (opti_count > 0)
				opti_count *= -1;
		}
	}
	return (opti_count);
}
