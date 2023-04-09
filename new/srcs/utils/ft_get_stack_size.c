/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_stack_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:22:54 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/23 02:22:56 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_stack_size(t_list *stack)
{
	int	size;

	size = 0;
	while (stack != NULL)
	{
		++size;
		stack = stack->next;
	}
	return (size);
}
