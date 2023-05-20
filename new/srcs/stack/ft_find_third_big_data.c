/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_third_big_data.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 07:01:01 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/03 07:01:04 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_third_big_data(t_list *stack)
{
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
			third_data = stack->data;
		++i;
		stack = stack->next;
	}
	return (third_data);
}
