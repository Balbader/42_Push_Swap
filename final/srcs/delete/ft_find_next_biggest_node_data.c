/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_biggest_node_data.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:55:36 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/13 13:55:41 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_next_biggest_node_data(t_list **stack)
{
	t_list	*tmp;
	int		big;
	int		data;

	if (!stack)
		return (0);
	big = ft_find_biggest_node_data(stack);
	tmp = (*stack);
	data = tmp->data;
	while (tmp)
	{
		if (tmp->data > data && tmp->data < big)
			data = tmp->data;
		tmp = tmp->next;
	}
	return (data);
}
