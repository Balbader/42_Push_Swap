/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:11:13 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/02 16:11:16 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **stack)
{
	t_list	*tmp;

	if ((*stack)->next)
	{
		tmp = (*stack)->next;
		(*stack)->next = tmp->next;
		tmp->next = *stack;
		*stack = tmp;
		(*stack)->index = 0;
		(*stack)->next->index = 1;
	}
}
