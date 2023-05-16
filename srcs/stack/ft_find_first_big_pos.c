/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_first_big_pos.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 08:33:44 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/16 08:33:46 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_first_big_pos(t_list *stack)
{
	int		data;
	int		pos;

	if (!stack)
		return (0);
	data = stack->data;
	pos = stack->pos;
	while (stack)
	{
		if (stack->data > data)
		{
			data = stack->data;
			pos = stack->pos;
		}
		stack = stack->next;
	}
	return (pos);
}
