/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_third_big_idx.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 06:45:54 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/03 06:45:56 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_third_big_idx(t_list *stack)
{
	int		third_idx;
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
			third_idx = stack->index;
		}
		++i;
		stack = stack->next;
	}
	return (third_idx);
}
