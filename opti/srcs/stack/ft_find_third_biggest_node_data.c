/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_third_biggest_node_data.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:50:04 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/17 09:50:06 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_third_biggest_node_data(t_list **stack)
{
	t_list	*tmp;
	int		second_data;
	int		third_data;

	if (!stack)
		return (0);
	tmp = (*stack);
	second_data = ft_find_second_biggest_node_data(stack);
	third_data = INT_MIN;
	while (tmp)
	{
		if (tmp->data > third_data && tmp->data < second_data)
			third_data = tmp->data;
		tmp = tmp->next;
	}
	return (third_data);
}
