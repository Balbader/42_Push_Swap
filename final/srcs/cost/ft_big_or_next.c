/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_or_next.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:15:38 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/13 11:15:40 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * returns 1 if biggest node is cheapest
 * returns 2 if 2nd biggest node is cheapest
*/
int	ft_big_or_next(int big_idx, int next_idx, t_list **stack)
{
	int	big_cost;
	int	next_cost;

	big_cost = ft_calculate_cost(stack, big_idx);
	next_cost = ft_calculate_cost(stack, next_idx);
	if (!stack)
		return (0);
	if (big_cost > 0 && next_cost > 0)
	{
		if (big_cost < next_cost)
			return (1);
		if (big_cost > next_cost)
			return (2);
	}
	else if (big_cost > 0 && next_cost < 0)
	{
		if (big_cost < (next_cost * -1))
			return (1);
		if (big_cost > (next_cost * -1))
			return (2);
	}
	return (0);
}
