/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_smallest_node.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 07:29:16 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/22 07:29:18 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_find_smallest_node(t_list *stack)
{
	t_list	*smallest_node;

	smallest_node = stack;
	while (stack)
	{
		if (stack->data < smallest_node->data)
			smallest_node = stack;
		stack = stack->next;
	}
	return (smallest_node);
}

// t_list	*ft_find_smallest_node(t_list **stack)
// {
// 	t_list	*smallest_node;

// 	smallest_node = (*stack);
// 	while (*stack)
// 	{
// 		if ((*stack)->data < smallest_node->data)
// 			smallest_node = (*stack);
// 		*stack = (*stack)->next;
// 	}
// 	return (smallest_node);
// }
