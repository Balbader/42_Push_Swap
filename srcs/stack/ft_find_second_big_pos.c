/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_second_big_pos.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 08:33:51 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/16 08:33:53 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_second_big_pos(t_list *stack)
{
	int		second_pos;
	int		second_data;
	int		first_data;
	int		i;

	if (!stack)
		return (0);
	second_data = INT_MIN;
	i = 0;
	first_data = ft_find_first_big_data(stack);
	while (stack)
	{
		if (stack->data > second_data && stack->data < first_data)
		{
			second_data = stack->data;
			second_pos = stack->pos;
		}
		++i;
		stack = stack->next;
	}
	return (second_pos);
}
