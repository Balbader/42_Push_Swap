/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_biggest_node_data.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:25:17 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 11:25:24 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_biggest_node_data(t_list **stack)
{
	t_list	*tmp;
	int		data;

	if (!stack)
		return (0);
	tmp = (*stack);
	data = tmp->data;
	while (tmp)
	{
		if (tmp->data > data)
			data = tmp->data;
		tmp = tmp->next;
	}
	return (data);
}
