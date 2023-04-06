/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 08:43:32 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 08:43:36 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_stack(t_list **stack)
{
	t_list	*temp;

	temp = NULL;
	if (!(*stack))
		return ;
	temp = *stack;
	temp = temp->next;
	(*stack)->next = NULL;
	ft_add_new_tail(&temp, *stack);
	(*stack) = temp;
}
