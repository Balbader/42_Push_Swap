/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_second_big_idx.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 06:46:46 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/03 06:46:47 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_second_big_idx(t_list **stack)
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
	first_data = ft_find_first_big_data(stack);
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
	return (second_idx);
}
