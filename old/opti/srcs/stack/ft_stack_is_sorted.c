/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:32:00 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 12:32:11 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_is_sorted(t_list *stack)
{
	int	data;

	data = stack->data;
	while (stack)
	{
		if (data > stack->data)
			return (1);
		data = stack->data;
		stack = stack->next;
	}
	return (0);
}
