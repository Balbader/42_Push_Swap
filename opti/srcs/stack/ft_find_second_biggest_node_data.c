/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_second_biggest_node_data.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:58:53 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/15 12:58:56 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_second_biggest_node_data(t_list **stack)
{
	t_list	*tmp;
	int		first_data;
	int		second_data;

	if (!stack)
		return (0);
	tmp = (*stack);
	first_data = ft_find_biggest_node_data(stack);
	second_data = INT_MIN;
	while (tmp)
	{
		if (tmp->data > second_data && tmp->data < first_data)
			second_data = tmp->data;
		tmp = tmp->next;
	}
	return (free(tmp), second_data);
}
