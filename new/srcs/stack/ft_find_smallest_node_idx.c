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

	if (!stack)
		return (0);
	ft_re_init_index(stack);
	data = ft_find_smallest_node_data(stack);
	index = INT_MAX;
	while (stack)
	{
		if (stack->data == data)
			index = stack->index;
		stack = stack->next;
	}
	return (index);
}
