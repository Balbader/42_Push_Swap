/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_b_cost_arr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:53:40 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/25 15:53:42 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_cost_biggest_b(t_list **b)
{
	int	biggest_b_node_idx;
	int	b_size;
	int	mid;
	int	cost;

	cost = 0;
	biggest_b_node_idx = ft_find_biggest_node_idx(b);
	b_size = ft_get_stack_size(*b);
	mid = b_size / 2;
	if (biggest_b_node_idx <= mid)
		cost = biggest_b_node_idx - 1;
	if (biggest_b_node_idx > mid)
		cost = ((b_size - biggest_b_node_idx) + 1) * -1;
	return (cost);
}

static int	ft_cost_closest_b(t_list **b, int closest_idx)
{
	int	b_size;
	int	mid;
	int	cost;

	cost = 0;
	b_size = ft_get_stack_size(*b);
	mid = b_size / 2;
	if (closest_idx <= mid)
		cost = closest_idx - 1;
	else if (closest_idx > mid)
		cost = ((b_size - closest_idx) + 1) * -1;
	return (cost);
}

/*
 * Returns an array containg the tot number or rb || rrb
 * to bring the correct b_node to the top of 'b'
 * based on if the incoming a_node is either:
 * . == new smallest(b) || new biggest(b)
 * . != new smallest(b) || new biggest(b)
*/
int	*ft_init_b_cost_arr(t_list **a, t_list **b)
{
	int	*b_cost;
	int	*a_data;
	int	a_size;
	int	closest_b_node_idx;
	int	i;

	a_size = ft_get_stack_size(*a);
	a_data = ft_init_data_array(a);
	b_cost = NULL;
	b_cost = (int *)malloc(sizeof(int) * a_size);
	if (!b_cost)
		return (0);
	i = 0;
	while (i < a_size)
	{
		if (ft_check_incoming(b, a_data[i]) == 1)
			b_cost[i] = ft_cost_biggest_b(b);
		if (ft_check_incoming(b, a_data[i]) == 0)
		{
			closest_b_node_idx = ft_find_closest_b_node_idx(b, a_data[i]);
			b_cost[i] = ft_cost_closest_b(b, closest_b_node_idx);
		}
		++i;
	}
	return (b_cost);
}
