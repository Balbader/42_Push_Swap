/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_second_big_idx.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 06:46:46 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/03 06:46:47 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_second_big_idx(t_list *stack)
{
	int		second_idx;
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
			second_idx = stack->index;
		}
		++i;
		stack = stack->next;
	}
	return (second_idx);
}
