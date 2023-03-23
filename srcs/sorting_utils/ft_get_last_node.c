/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_last_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:07:16 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/23 02:07:19 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_get_last_node(t_list *stack)
{
	while (stack && stack->next != NULL)
		stack = stack->next;
	return (stack);
}
