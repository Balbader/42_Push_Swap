/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:10:56 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/02 16:10:57 by baalbade         ###   ########.fr       */
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
	if (tmp == NULL)
		return ;
	(*stack)->next = NULL;
	ft_add_new_tail(&tmp, *stack);
	(*stack) = tmp;
}
