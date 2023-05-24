/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_biggest_idx.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 07:17:03 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/24 07:17:05 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_biggest_idx(t_list *stack)
{
	int		data;
	int		index;

	if (!stack)
		return (0);
	data = stack->data;
	index = stack->index;
	while (stack)
	{
		if (stack->data > data)
		{
			data = stack->data;
			index = stack->index;
		}
		stack = stack->next;
	}
	return (index);
}
