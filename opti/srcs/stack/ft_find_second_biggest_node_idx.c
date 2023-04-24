/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_second_biggest_node_idx.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:48:36 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/15 12:48:38 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_second_biggest_node_idx(t_list **stack)
{
	t_list	*tmp;
	int		second_idx;
	int		second_data;
	int		first_data;
	int		i;

	if (!stack)
		return (0);
	tmp = NULL;
	tmp = *stack;
	second_data = INT_MIN;
	i = 0;
	first_data = ft_find_biggest_node_data(stack);
	while (tmp)
	{
		if (tmp->data > second_data && tmp->data < first_data)
		{
			second_data = tmp->data;
			second_idx = tmp->index;
		}
		++i;
		tmp = tmp->next;
	}
	return (free(tmp), second_idx);
}
