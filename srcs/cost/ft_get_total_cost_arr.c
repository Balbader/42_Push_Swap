/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_total_cost_arr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:26:43 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/04 10:26:44 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	NEED:
	1. Fct to create an array that store the calculated final cost for
	   b_node
*/

#include "push_swap.h"

typedef struct s_data
{
	int	*a_pos;
	int	*b_pos;
	int	*a_node;
	int	b_size;
	int	a_size;
	int	i;
	int	j;
	int	k;
}				t_data;

/*
 * Retrurns an array containing the cost for each a_node that needs
 * to be at the top of a_stack based on each b_node
*/
static int	*ft_get_a_big_close_cost(t_list **a, t_list **b,
								int *a_node_cost, int *a_cost)
{
	t_data	data;

	data.a_pos = ft_get_pos_arr(a);
	data.b_pos = ft_get_pos_arr(b);
	data.a_size = ft_get_stack_size(a);
	data.b_size = ft_get_stack_size(b);
	data.a_node = ft_find_big_close_a_node_pos(a, b, data.a_pos, data.b_pos);
	data.k = 0;
	data.i = 0;
	while (data.i < data.b_size)
	{
		data.j = 0;
		while (data.j < data.a_size)
		{
			if (data.a_node[data.i] == data.a_pos[data.j])
			{
				a_node_cost[data.k] = a_cost[data.j];
				++data.k;
			}
			++data.j;
		}
		++data.i;
	}
	return (free(data.a_pos), free(data.b_pos),
		free(data.a_node), a_node_cost);
}

/*
 * Retrurns an array with the total cost of moving each b_node to a_stack
 * tot_cost[i] = a_cost[i] + b_cost[i];
*/
int	*ft_get_total_cost_arr(t_list **a, t_list **b, int *tot_cost)
{
	int	*a_node_cost;
	int	b_size;
	int	*a_cost;
	int	*b_cost;
	int	i;

	a_cost = ft_get_cost_arr(a);
	b_cost = ft_get_cost_arr(b);
	b_size = ft_get_stack_size(b);
	a_node_cost = (int *)malloc(sizeof(int) * b_size);
	if (!a_node_cost)
		return (0);
	a_node_cost = ft_get_a_big_close_cost(a, b, a_node_cost, a_cost);
	i = 0;
	while (i < b_size)
	{
		tot_cost[i] = (a_node_cost[i] + b_cost[i]);
		++i;
	}
	return (free(a_cost), free(b_cost), free(a_node_cost), tot_cost);
}
