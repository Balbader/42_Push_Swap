/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:47:00 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 10:47:02 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*ft_create_list(t_list *stack_a, int *entries, int ac)
{
	t_list	*head;
	int		i;
	int		j;
	int		pos;

	pos = 1;
	i = 1;
	j = 0;
	stack_a = ft_create_node(entries[j], i, pos);
	head = stack_a;
	while (i < ac)
	{
		++i;
		++j;
		++pos;
		stack_a->next = ft_create_node(entries[j], i, pos);
		stack_a = stack_a->next;
	}
	return (head);
}

t_list	*ft_init_stack(t_list *stack_a, int *entries, int ac)
{
	stack_a = ft_create_list(stack_a, entries, ac);
	return (stack_a);
}
