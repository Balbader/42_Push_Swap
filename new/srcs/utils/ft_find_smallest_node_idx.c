/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_smallest_node_idx.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:02:17 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/24 11:02:20 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_smallest_node_idx(t_list **stack)
{
	t_list	*tmp;
	int		data;
	int		sml_node_idx;

	tmp = NULL;
	tmp = *stack;
	data = tmp->data;
	sml_node_idx = tmp->index;
	while (tmp)
	{
		if (tmp->data < data)
		{
			data = tmp->data;
			sml_node_idx = tmp->index;
		}
		tmp = tmp->next;
	}
	return (sml_node_idx);
}
