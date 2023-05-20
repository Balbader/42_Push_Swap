/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_smallest_node_data.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:24:42 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 11:24:44 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_smallest_node_data(t_list *stack)
{
	int		data;

	if (!stack)
		return (0);
	data = stack->data;
	while (stack)
	{
		if (stack->data < data)
			data = stack->data;
		stack = stack->next;
	}
	return (data);
}