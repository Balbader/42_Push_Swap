/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_stack_index.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 08:52:47 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/22 08:52:50 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_copy_stack_index(t_list *stack)
{
	int	*arr;
	int	stack_size;
	int	i;

	stack_size = ft_get_stack_size(stack);
	arr = (int *)malloc(sizeof(int) * stack_size);
	if (!arr)
		return (0);
	i = 0;
	while (i < stack_size)
	{
		arr[i] = stack->index;
		stack = stack->next;
		++i;
	}
	return (arr);
}
