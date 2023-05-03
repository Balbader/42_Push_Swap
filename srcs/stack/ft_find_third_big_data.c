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

int	ft_find_third_big_data(t_list **stack)
{
	t_list	*tmp;
	int		third_data;
	int		second_data;
	int		i;

	if (!stack)
		return (0);
	tmp = NULL;
	tmp = *stack;
	third_data = INT_MIN;
	i = 0;
	second_data = ft_find_second_big_data(stack);
	while (tmp)
	{
		if (tmp->data > third_data && tmp->data < second_data)
			third_data = tmp->data;
		++i;
		tmp = tmp->next;
	}
	return (third_data);
}
