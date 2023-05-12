/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_first_big_idx.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 06:46:33 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/03 06:46:34 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_first_big_idx(t_list **stack)
{
	t_list	*tmp;
	int		data;
	int		index;

	if (!stack)
		return (0);
	tmp = NULL;
	tmp = (*stack);
	data = tmp->data;
	index = tmp->index;
	while (tmp)
	{
		if (tmp->data > data)
		{
			data = tmp->data;
			index = tmp->index;
		}
		tmp = tmp->next;
	}
	ft_free_stack(&tmp);
	return (index);
}
