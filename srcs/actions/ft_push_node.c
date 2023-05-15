/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:10:40 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/02 16:10:42 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_node(t_list **src, t_list **dest)
{
	t_list	*tmp;

	tmp = NULL;
	if (!*src)
		return ;
	tmp = (*src)->next;
	(*src)->next = (*dest);
	(*dest) = (*src);
	*src = tmp;
}
