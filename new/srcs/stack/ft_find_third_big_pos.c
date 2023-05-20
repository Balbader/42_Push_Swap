/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_third_big_pos.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 08:34:00 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/16 08:34:01 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_third_big_pos(t_list *stack)
{
	int		third_pos;
	int		third_data;
	int		second_data;
	int		i;

	if (!stack)
		return (0);
	third_data = INT_MIN;
	i = 0;
	second_data = ft_find_second_big_data(stack);
	while (stack)
	{
		if (stack->data > third_data && stack->data < second_data)
		{
			third_data = stack->data;
			third_pos = stack->pos;
		}
		++i;
		stack = stack->next;
	}
	return (third_pos);
}
