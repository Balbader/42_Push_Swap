/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_biggest_node_data.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:37:27 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/24 11:37:29 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_biggest_node_data(t_list **stack)
{
	t_list	*tmp;
	int		biggest_data;

	tmp = NULL;
	tmp = *stack;
	biggest_data = tmp->data;
	while (tmp)
	{
		if (tmp->data > biggest_data)
			biggest_data = tmp->data;
		tmp = tmp->next;
	}
	return (biggest_data);
}
