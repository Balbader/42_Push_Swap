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
	// t_list	*tmp;
	int		stack_size;
	int		mid;
	int		i;

	// tmp = (*stack);
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
			cost_arr[i] = ((i - stack_size));
		++i;
	}
	return (cost_arr);
}

/*
 * Returns an array containing the final position of each node in given stack
*/

int	*ft_get_pos_arr(t_list **stack, int *pos_arr)
{
	t_list	*tmp;
	int		stack_size;
	int		i;

	tmp = (*stack);
	stack_size = ft_get_stack_size(stack);
	pos_arr = (int *)malloc(sizeof(int) * stack_size);
	if (!pos_arr)
		return (0);
	i = 0;
	while (i < stack_size)
	{
		pos_arr[i] = tmp->pos;
		tmp = tmp->next;
		++i;
	}
	ft_free_stack(&tmp);
	return (pos_arr);
}
