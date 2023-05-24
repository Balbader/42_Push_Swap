/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_new_tail.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 09:56:40 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 09:56:43 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_new_tail(t_list **stack, t_list *node)
{
	if (!(*stack))
		*stack = node;
	else
		ft_get_last_node(*stack)->next = node;
}
