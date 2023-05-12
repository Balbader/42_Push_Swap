/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_third_big_idx.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 06:45:54 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/03 06:45:56 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_third_big_idx(t_list **stack)
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
	second_data = ft_find_second_big_data(stack);
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
	ft_free_stack(&tmp);
	return (third_idx);
}
