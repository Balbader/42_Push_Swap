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

static int	ft_find_node_pos(t_list *stack, int idx)
{
	int	pos;

	pos = 0;
	while (stack)
	{
		if (stack->index == idx)
			pos = stack->pos;
		stack = stack->next;
	}
	return (pos);
}

int	*ft_get_big_3_idx(t_list **b)
{
	int	*big_3_idx;

	big_3_idx = (int *)malloc(sizeof(int) * 3);
	if (!big_3_idx)
		return (0);
	big_3_idx[0] = ft_find_first_big_idx(*b);
	big_3_idx[1] = ft_find_second_big_idx(*b);
	big_3_idx[2] = ft_find_third_big_idx(*b);
	return (big_3_idx);
}

/*
 * Returns an array whith the pos of the 3 big nodes to be pushed to "b"
 * in order, starting at the cheapest.
*/
int	*ft_get_big_3_pos(t_list **b, int *big_3_idx)
{
	int	*big_3_pos;

	big_3_pos = (int *)malloc(sizeof(int) * 3);
	if (!big_3_pos)
		return (0);
	big_3_pos[0] = ft_find_node_pos(*b, big_3_idx[0]);
	big_3_pos[1] = ft_find_node_pos(*b, big_3_idx[1]);
	big_3_pos[2] = ft_find_node_pos(*b, big_3_idx[2]);
	return (big_3_pos);
}

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
