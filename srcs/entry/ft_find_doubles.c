/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_doubles.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:15:42 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/02 16:15:44 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_doubles(t_list *stack, int data)
{
	while (stack)
	{
		if (stack->data == data)
			return (1);
		stack = stack->next;
	}
	return (0);
}
