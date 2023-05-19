/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a_opti.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:44:43 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/12 11:44:44 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static int	ft_find_node_pos(t_list *stack, int idx)
// {
// 	int	pos;

// 	pos = 0;
// 	while (stack)
// 	{
// 		if (stack->index == idx)
// 			pos = stack->pos;
// 		stack = stack->next;
// 	}
// 	return (pos);
// }

int	ft_find_lil_idx(t_list *b, int pos)
{
	int	idx;

	idx = 0;
	while (b)
	{
		if (b->pos == pos)
			idx = b->index;
		b = b->next;
	}
	return (idx);
}
