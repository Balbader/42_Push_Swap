/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_biggest_closest_a_node_idx.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:03:29 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/04 09:03:30 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	NEED:
	1. Fct to find the biggest & closest a_node for each b_node
*/

#include "push_swap.h"

/*
 * Returns the index for the biggest a_node that is the closest ot the
 * incoming b_node_pos;
*/
static int	ft_get_pos_to_find(int *a_pos, int a_size, int b_node_pos)
{
	int	pos_to_find;
	int	closest_pos;
	int	i;

	pos_to_find = a_pos[0];
	closest_pos = a_pos[0] - b_node_pos;
	i = 0;
	while (i < a_size)
	{
		if (a_pos[i] - b_node_pos < closest_pos)
			pos_to_find = a_pos[i];
		++i;
	}
	return (pos_to_find);
}

/*
 * Returns an array containing the "pos" value of the a_node that needs
 * to be at the top of a_stack based on each b_node
*/
int	*ft_find_biggest_closest_a_node_idx(t_list **a, t_list **b,
									int *a_pos, int *b_pos)
{
	int	a_size;
	int	b_size;
	int	*a_nodes_pos;
	int	i;

	a_size = ft_get_stack_size(a);
	b_size = ft_get_stack_size(b);
	a_nodes_pos = (int *)malloc(sizeof(int) * b_size);
	if (!a_nodes_pos)
		return (0);
	i = 0;
	while (i < b_size)
	{
		a_nodes_pos[i] = ft_get_pos_to_find(a_pos, a_size, b_pos[i]);
		++i;
	}
	return (a_nodes_pos);
}
