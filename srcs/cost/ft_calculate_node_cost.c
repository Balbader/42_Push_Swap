/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate_node_cost.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 08:47:18 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/04 08:47:20 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_calculate_node_cost(t_list **stack, int node_idx, int stk_size)
{
	int	cost;
	int	mid;

	if (!stack)
		return (0);
	cost = 0;
	mid = stk_size / 2;
	if (node_idx <= mid)
		cost = (stk_size - (stk_size - node_idx)) - 1;
	else if (node_idx > mid)
		cost = ((stk_size - node_idx) + 1) * -1 ;
	return (cost);
}
