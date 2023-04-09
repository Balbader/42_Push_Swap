/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_new_tail.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:19:05 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/23 02:19:07 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_new_tail(t_list **lst, t_list *node)
{
	t_list	*current;

	current = NULL;
	current = *lst;
	while (current->next)
		current = current->next;
	current->next = node;
}
