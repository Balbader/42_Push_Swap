/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_smallest_node_idx.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:24:53 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 11:24:55 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_smallest_node_idx(t_list *stack)
{
	int		data;
	int		index;

	index = 1;
	data = stack->data;
	while (stack)
	{
		if (stack->data < data)
		{
			data = stack->data;
			index = stack->index;
		}
		stack = stack->next;
	}
	return (index);
}
