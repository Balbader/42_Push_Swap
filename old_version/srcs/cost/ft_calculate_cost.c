/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate_cost.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:49:52 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/13 10:49:54 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_calculate_cost(t_list **stack, int node_idx)
{
	int	size;
	int	cost;
	int	mid;

	if (!stack)
		return (0);
	size = ft_get_stack_size(stack);
	mid = size / 2;
	cost = 0;
	if (node_idx == 1)
		cost = 1;
	if (node_idx == size)
		cost = 1;
	if (node_idx <= mid)
		cost = (size - (size - node_idx)) - 1;
	if (node_idx > mid)
		cost = ((size - node_idx) + 1) * -1 ;
	return (cost);
}
