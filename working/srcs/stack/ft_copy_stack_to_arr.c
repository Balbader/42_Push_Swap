/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_stack_to_arr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:00:54 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/01 09:00:57 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_copy_stack_to_arr(t_list *stack, int stack_size, int *arr)
{
	int	i;

	arr = (int *)malloc(sizeof(int) * stack_size);
	if (!arr)
		return (0);
	i = 0;
	while (stack)
	{
		arr[i] = stack->data;
		++i;
		stack = stack->next;
	}
	return (arr);
}
