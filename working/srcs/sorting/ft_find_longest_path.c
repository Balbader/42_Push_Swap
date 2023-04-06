/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_longest_path.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 07:05:22 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/21 07:05:24 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_longest_path(t_list *stack, int *arr)
{
	t_list	*head;
	int		**tab;
	int		stack_size;
	int		i;
	int		j;

	head = stack;
	stack_size = ft_get_stack_size(stack);
	tab = ft_find_all_path_len(stack, arr);
	i = 0;
	while (i < stack_size)
	{
		j = 0;
		printf(" %d  ", tab[i][j]);
		++i;
	}
	i = 0;
	while (i < stack_size)
	{
		printf("[%d] ", head->index);
		head = head->next;
		++i;
	}
}
