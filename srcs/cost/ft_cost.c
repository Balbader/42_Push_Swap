/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:01:40 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/11 13:01:42 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Retruns an array with the cost of bringing each node to top of the stack
*/

int	*ft_get_cost_arr(t_list **stack, int *cost_arr)
{
	int	stack_size;
	int	mid;
	int	i;

	stack_size = ft_get_stack_size(stack);
	cost_arr = (int *)malloc(sizeof(int) * stack_size);
	if (!cost_arr)
		return (0);
	mid = stack_size / 2;
	i = 0;
	while (i < stack_size)
	{
		if (i <= mid)
			cost_arr[i] = i;
		else
			cost_arr[i] = ((i - stack_size) + 1);
		++i;
	}
	return (cost_arr);
}
