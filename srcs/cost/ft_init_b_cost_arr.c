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

// This is wrong: should return the number of ra || rra
static int	ft_cost_biggest_b(t_list **b)
{
	int	biggest_idx;
	int	b_size;
	int	mid;

	biggest_idx = ft_find_biggest_node_idx(b);
	b_size = ft_get_stack_size(*b);
	if (b_size > 2)
	{
		mid = b_size / 2;
		if (biggest_idx <= mid)
			return (biggest_idx - 1);
		else if (biggest_idx > mid)
			return (biggest_idx);
	}
	return (0);
}

// This is wrong: should return the number of ra || rra
static int	ft_cost_closest_b(t_list **b, int closest_idx)
{
	int	b_size;
	int	mid;

	b_size = ft_get_stack_size(*b);
	mid = b_size / 2;
	if (closest_idx <= mid)
		return (closest_idx - 1);
	else if (closest_idx > mid)
		return (closest_idx);
	return (0);
}

int	ft_init_b_cost_arr(t_list **a, t_list **b)
{
	int	closest_idx;
	int	closest_idx_cost;
	int	biggest_b_cost;

	(void)a;
	ft_re_init_index(*b);
	biggest_b_cost = ft_cost_biggest_b(b);
	closest_idx = ft_find_closest_node_idx(b, -18);
	closest_idx_cost = ft_cost_closest_b(b, closest_idx);
	printf("biggest_b_cost: %d\n", biggest_b_cost);
	printf("closest_idx: %d\n", closest_idx);
	printf("closest_idx_cost: %d\n", closest_idx_cost);
	return (closest_idx_cost);
}

/*
int	*ft_init_b_cost_arr(t_list **a, t_list **b)
{
	int	*b_cost_arr;
	int	*a_data_log;
	int	incoming;
	int	a_size;
	int	i;

	a_data_log = ft_init_data_array(a);
	b_cost_arr = ft_init_cost_arr(a);
	a_size = ft_get_stack_size(*a);
	i = 0;
	while (i < a_size)
		{
			incoming = ft_check_incoming(b, a_data_log[i]);
			if (incoming == 1)
				ft_get_biggest_b(b);
			else
			++i;
		}
	return (b_cost_arr);
}
*/
