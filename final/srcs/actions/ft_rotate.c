/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 09:17:18 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 09:17:20 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list **stack)
{
	t_list	*tmp;

	if (!(*stack))
		return ;
	tmp = NULL;
	tmp = *stack;
	tmp = tmp->next;
	(*stack)->next = NULL;
	ft_add_new_tail(&tmp, *stack);
	(*stack) = tmp;
}
