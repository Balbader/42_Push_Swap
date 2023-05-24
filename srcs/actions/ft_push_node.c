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

	tmp = *src;
	*src = (*src)->next;
	ft_add_new_head(dest, tmp);
	ft_re_init_index(*src);
	ft_re_init_index(*dest);
}

// void	ft_push_node(t_list **src, t_list **dest)
// {
// 	t_list	*tmp;

// 	if (!*src)
// 		return ;
// 	tmp = NULL;
// 	tmp = (*src)->next;
// 	(*src)->next = (*dest);
// 	(*dest) = (*src);
// 	*src = tmp;
// 	ft_re_init_index(*src);
// 	ft_re_init_index(*dest);
// }
