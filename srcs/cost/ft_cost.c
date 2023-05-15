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

typedef struct s_data
{
	int	lil_bro_idx;
	int	big_bro_idx;
	int	lil_bro_pos;
	int	big_bro_pos;
	int	lil_bro_cost;
	int	big_bro_cost;
	int	cheapest_idx;
	int	cheapest_cost;
}				t_data;

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
	return (cost);
}

/*
 * Returns the index of the cheapest b_node to push to "a"
 * The cost is calculated like so: cost of b_node_idx + cost of big_bro_idx
*/
int	ft_get_cheapest_b_node_idx(t_list **a, t_list **b)
{
	t_data	data;
	int		b_size;
	int		i;

	data.cheapest_cost = INT_MAX;
	data.cheapest_idx = 0;
	data.lil_bro_idx = 0;
	data.lil_bro_idx = ft_get_lil_bro_idx(b, data.lil_bro_idx);
	data.lil_bro_cost = ft_get_node_cost(b, data.lil_bro_idx);
	data.big_bro_idx = ft_get_big_bro_idx(a, data.lil_bro_pos);
	data.big_bro_cost = ft_get_node_cost(a, data.big_bro_idx);
	b_size = ft_get_stack_size(b);
	i = 0;
	while (i < b_size)
	{
		if (data.big_bro_cost + data.lil_bro_cost < data.cheapest_cost)
		{
			data.cheapest_cost = data.big_bro_cost + data.lil_bro_cost;
			data.cheapest_idx = data.lil_bro_idx;
		}
		++i;
	}
	return (data.cheapest_idx);
}
