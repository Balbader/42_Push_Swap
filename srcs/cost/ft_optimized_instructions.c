/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optimized_instructions.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:47:45 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/30 00:47:47 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_get_next_digit(int a_cost, int b_cost)
{
	int	next;

	next = 0;
	if (ft_is_pos(a_cost, b_cost) == 1)
	{
		if (a_cost > b_cost)
			next = a_cost - b_cost;
		if (b_cost > a_cost)
			next = b_cost - a_cost;
	}
	if (ft_is_neg(a_cost, b_cost) == 1)
	{
		if (a_cost < b_cost)
			next = a_cost - b_cost;
		if (b_cost < a_cost)
			next = b_cost - a_cost;
	}
	return (next);
}

/*
 * Returns a 3 digit arr which will be used
 * to print instructions in 'ft_push_from_a_to_b.c'

 * 1st digit = nbr of rr || rrr
 * 2nd digit = remainder operations to do (ra || rb || rra || rrb)
 * 3rd digit = ft_pb
*/
int	*ft_optimized_instructions(int a_cost, int b_cost)
{
	int	*instructions_arr;
	int	opti_count;
	int	next;

	opti_count = ft_find_rr_or_rrr_count(a_cost, b_cost);
	next = ft_get_next_digit(a_cost, b_cost);
	instructions_arr = NULL;
	instructions_arr = (int *)malloc(sizeof(int) * 3);
	if (!instructions_arr)
		return (0);
	instructions_arr[0] = opti_count;
	instructions_arr[1] = next;
	instructions_arr[2] = 1;
	return (instructions_arr);
}
