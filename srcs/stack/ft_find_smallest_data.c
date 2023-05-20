/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_smallest_data.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 07:26:21 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/20 07:26:28 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_smallest_data(t_list *stack)
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
