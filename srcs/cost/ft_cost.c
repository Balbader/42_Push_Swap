/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:01:40 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/11 13:01:42 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Returns the cost of moving a node to the top of a stack based on its idx */
int	ft_get_node_cost(t_list **stack, int idx)
{
	int	stack_size;
	int	mid;
	int	cost;

	stack_size = ft_get_stack_size(stack);
	mid = stack_size / 2;
	cost = 0;
	if (idx <= mid)
		cost = idx;
	if (idx > mid)
		cost = (stack_size - idx);
		// cost = (stack_size - idx) * -1;
	return (cost);
}

/*
 * Returns the index of the cheapest b_node to push to "a"
 * The cost is calculated like so: cost of b_node_idx + cost of big_bro_idx
*/
// int	ft_get_cheapest_b_node(t_list **a, t_list **b)
void	ft_get_cheapest_b_node(t_list **a, t_list **b)
{
	// int	cheapest_idx;
	int	big_bro_idx;
	int	lil_bro_pos;
	int	big_bro_pos;
	// int	lil_bro_cost;
	int	big_bro_cost;

	big_bro_idx = ft_get_big_bro_idx(a, 12);
	big_bro_pos = ft_get_big_bro_pos(a, big_bro_idx);
	big_bro_cost = ft_get_node_cost(a, big_bro_idx);
	printf("big_bro_idx: %d\n", big_bro_idx);
	printf("big_bro_pos: %d\n", big_bro_pos);
	printf("big_bro_cost: %d\n", big_bro_cost);
	lil_bro_pos = 0;
	lil_bro_pos = ft_get_lil_bro_pos(b, lil_bro_pos);
	printf("lil_bro_pos: %d\n", lil_bro_pos);
}
