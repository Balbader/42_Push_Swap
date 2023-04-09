/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_biggest_node_idx.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:50:44 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/24 10:50:46 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_biggest_node_idx(t_list **stack)
{
	t_list	*tmp;
	int		data;
	int		big_node_idx;

	tmp = NULL;
	tmp = *stack;
	data = tmp->data;
	big_node_idx = tmp->index;
	while (tmp)
	{
		if (tmp->data > data)
		{
			data = tmp->data;
			big_node_idx = tmp->index;
		}
		tmp = tmp->next;
	}
	return (big_node_idx);
}
