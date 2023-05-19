/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a_utils.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:15:53 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/12 09:15:55 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct s_data
{
	t_list	*tmp_b;
	int		b_cost;
	int		big_bro_idx;
	int		big_bro_cost;
	int		tot_b_cost;
	int		b_size;
	int		i;
}				t_data;

/* Return the idx of the cheapest node in a given stack based on its cost */
int	ft_get_cheapest_node_idx(t_list **stack, int cheapest_node_idx)
{
	int	stack_size;
	int	cost;
	int	cheapest;
	int	i;

	stack_size = ft_get_stack_size(stack);
	cheapest = INT_MAX;
	cost = 0;
	i = 0;
	while (i < stack_size)
	{
		cost = ft_get_node_cost(stack, i);
		if (cost < cheapest)
		{
			cheapest = cost;
			cheapest_node_idx = i;
		}
		++i;
	}
	return (cheapest_node_idx);
}

/*
 * Returns the position of the cheapest node in a given stack based on
 * the cheapest_idx found
*/
int	ft_get_cheapest_node_pos(t_list **stack, int cheapest_idx, int cheapest_pos)
{
	t_list	*tmp;
	int		stack_size;
	int		i;

	stack_size = ft_get_stack_size(stack);
	tmp = (*stack);
	i = 0;
	while (i < stack_size)
	{
		if (i == cheapest_idx)
			cheapest_pos = tmp->pos;
		tmp = tmp->next;
		++i;
	}
	ft_free_stack(&tmp);
	return (cheapest_pos);
}

/* Returns the tot cost of b_node (b_cost + a_cost) */
int	ft_get_cheapest_b_idx(t_list **a, t_list **b)
{
	t_data	data;
	int		cheapest_b_idx;

	data.b_size = ft_get_stack_size(b);
	data.tmp_b = (*b);
	data.b_cost = 0;
	data.big_bro_idx = 0;
	data.big_bro_cost = 0;
	data.tot_b_cost = 0;
	cheapest_b_idx = INT_MAX;
	data.i = 0;
	while (data.i < data.b_size)
	{
		data.b_cost = ft_get_node_cost(b, data. i);
		data.big_bro_idx = ft_get_big_bro_idx(a, data.tmp_b->pos);
		data.big_bro_cost = ft_get_node_cost(a, data.big_bro_idx);
		data.tot_b_cost = data.b_cost + data.big_bro_cost;
		if (data.tot_b_cost < cheapest_b_idx)
			cheapest_b_idx = data.tot_b_cost;
		data.tmp_b = data.tmp_b->next;
		++data.i;
	}
	ft_free_stack(&data.tmp_b);
	return (cheapest_b_idx);
}
