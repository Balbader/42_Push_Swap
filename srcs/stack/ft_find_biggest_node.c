/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_biggest_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 07:29:23 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/22 07:29:25 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_find_biggest_node(t_list **stack)
{
	t_list	*biggest_node;

	biggest_node = (*stack);
	while (*stack)
	{
		if ((*stack)->data > biggest_node->data)
			biggest_node = (*stack);
		*stack = (*stack)->next;
	}
	return (biggest_node);
}
