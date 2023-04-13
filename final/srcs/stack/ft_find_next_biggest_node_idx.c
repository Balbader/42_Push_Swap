/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_biggest_node_idx.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:39:31 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/12 14:39:33 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_next_biggest_node_idx(t_list **stack)
{
	t_list	*tmp;
	int		next_biggest_idx;
	int		next_biggest_data;
	int		biggest_node_data;
	int		i;

	if (!stack)
		return (0);
	tmp = NULL;
	tmp = *stack;
	next_biggest_data = 0;
	i = 0;
	biggest_node_data = ft_find_biggest_node_data(stack);
	while (tmp)
	{
		if (tmp->data > next_biggest_data && tmp->data < biggest_node_data)
		{
			next_biggest_data = tmp->data;
			next_biggest_idx = tmp->index;
		}
		++i;
		tmp = tmp->next;
	}
	printf("biggest_node_data: %d\n", biggest_node_data);
	return (next_biggest_idx);
}
