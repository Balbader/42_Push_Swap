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

/*
 * Initiate the array containing the "pos" value of the a_node that needs
 * to be at the top of a_stack based on each b_node
*/
static int *ft_init_a_node_pos_arr(t_list **a, t_list **b, int *a_node_pos)
{
	int	*a_pos;
	int	*b_pos;

	a_pos = ft_get_a_pos_arr(a);
	b_pos = ft_get_b_pos_arr(b);
	a_node_pos = NULL;
	a_node_pos = ft_find_biggest_closest_a_node_idx(a, b, a_pos, b_pos);
	return (free(a_pos), free(b_pos),a_node_pos);
}

/*
 * Retrurns an array containing the cost for each a_node that needs
 * to be at the top of a_stack based on each b_node
*/
static int	*ft_get_a_big_close_cost(t_list **a, t_list **b, int *a_node_cost, int *a_cost)
{
	int	*a_pos;
	int	*a_node_pos;
	int	b_size;
	int	a_size;
	int	i;
	int	j;
	int	k;

	a_pos = ft_get_a_pos_arr(a);
	a_size = ft_get_stack_size(a);
	b_size = ft_get_stack_size(b);
	a_node_pos = NULL;
	a_node_pos = ft_init_a_node_pos_arr(a, b, a_node_pos);
	k = 0;
	i = 0;
	while (i < b_size)
	{
		j = 0;
		while (j < a_size)
		{
			if (a_node_pos[i] == a_pos[j])
			{
				a_node_cost[k] = a_cost[j];
				++k;
			}
			++j;
		}
		++i;
	}
	return (free(a_pos), free(a_node_pos), a_node_cost);
}

/*
 * Retrurns an array with the total cost of each b_node
*/
int	*ft_get_total_cost_arr(t_list **a, t_list **b, int *tot_cost)
{
	int	*a_node_cost;
	int	b_size;
	int	*a_cost;
	int	*b_cost;
	int	i;

	a_cost = ft_get_a_cost_arr(a);
	b_cost = ft_get_b_cost_arr(b);
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
