/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_stack.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 08:41:30 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 08:41:31 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_stack(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;
	t_list	*before_last;

	tmp = NULL;
	last = NULL;
	before_last = NULL;
	last = ft_get_last_node(*stack);
	before_last = ft_get_before_last_node(*stack);
	tmp = *stack;
	*stack = last;
	(*stack)->next = tmp;
	before_last->next = NULL;
}
