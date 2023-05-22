/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_smallest_idx.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 07:26:34 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/20 07:26:45 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_smallest_idx(t_list *stack)
{
	int		data;
	int		index;

	if (!stack)
		return (0);
	ft_re_init_index(stack);
	data = ft_find_smallest_data(stack);
	index = INT_MAX;
	while (stack)
	{
		if (stack->data == data)
			index = stack->index;
		stack = stack->next;
	}
	return (index);
}
