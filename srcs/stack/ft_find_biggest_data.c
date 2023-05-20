/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_first_big_data.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 06:54:48 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/03 06:54:50 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_first_big_data(t_list *stack)
{
	int		big_data;

	if (!stack)
		return (0);
	big_data = INT_MIN;
	while (stack)
	{
		if (stack->data > big_data)
			big_data = stack->data;
		stack = stack->next;
	}
	return (big_data);
}