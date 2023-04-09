/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_smallest_node_data.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:37:15 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/24 11:37:16 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_smallest_node_data(t_list **stack)
{
	t_list	*tmp;
	int		smallest_data;

	tmp = NULL;
	tmp = *stack;
	smallest_data = tmp->data;
	while (tmp)
	{
		if (tmp->data < smallest_data)
			smallest_data = tmp->data;
		tmp = tmp->next;
	}
	return (smallest_data);
}
