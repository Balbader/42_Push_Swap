/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_re_init_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:57:45 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/23 02:57:49 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_re_init_index(t_list *stack)
{
	int		i;
	t_list	*head;

	head = NULL;
	head = stack;
	i = 1;
	while (stack)
	{
		stack->index = i;
		stack = stack->next;
		++i;
	}
	return (head);
}
