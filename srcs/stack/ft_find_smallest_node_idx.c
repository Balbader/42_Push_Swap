/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_smallest_node_idx.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:24:53 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 11:24:55 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_smallest_node_idx(t_list **stack)
{
	t_list	*tmp;
	int		data;
	int		index;

	if (!stack)
		return (0);
	ft_re_init_index(*stack);
	tmp = NULL;
	tmp = (*stack);
	data = ft_find_smallest_node_data(stack);
	index = INT_MAX;
	while (tmp)
	{
		if (tmp->data == data)
			index = tmp->index;
		tmp = tmp->next;
	}
	ft_free_stack(&tmp);
	return (index);
}
