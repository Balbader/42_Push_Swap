/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_third_biggest_node_idx.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:47:58 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/15 12:47:59 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_third_biggest_node_idx(t_list **stack)
{
	t_list	*tmp;
	int		third_idx;
	int		third_data;
	int		second_data;
	int		i;

	if (!stack)
		return (0);
	tmp = NULL;
	tmp = *stack;
	third_data = INT_MIN;
	i = 0;
	second_data = ft_find_second_biggest_node_data(stack);
	while (tmp)
	{
		if (tmp->data > third_data && tmp->data < second_data)
		{
			third_data = tmp->data;
			third_idx = tmp->index;
		}
		++i;
		tmp = tmp->next;
	}
	return (third_idx);
}
