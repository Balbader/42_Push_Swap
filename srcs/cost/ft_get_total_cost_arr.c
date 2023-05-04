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

static int *ft_init_a_node_pos_arr(t_list **a, t_list **b, int *a_node_pos)
{
	int	*a_pos;
	int	*b_pos;

	a_pos = ft_get_a_pos_arr(a);
	b_pos = ft_get_b_pos_arr(b);
	a_node_pos = NULL;
	a_node_pos = ft_find_biggest_closest_a_node_idx(a, b, a_pos, b_pos);
	free(a_pos);
	free(b_pos);
	return (a_node_pos);
}

/*
 * Retrurns an array with the cost of the a_node to be selected
 * to receive the incoming b_node;
*/
static int	*ft_get_a_big_close_cost(t_list **a, t_list **b, int *a_node_cost)
{
	int	*a_cost;
	int	*a_pos;
	int	*a_node_pos;
	int	b_size;
	int	i;

	a_cost = ft_get_a_cost_arr(a);
	a_pos = ft_get_b_pos_arr(a);
	b_size = ft_get_stack_size(b);
	a_node_pos = NULL;
	a_node_pos = ft_init_a_node_pos_arr(a, b, a_node_pos);
	i = 0;
	while (i < b_size)
		{

		}
	return (free(a_node_pos), a_node_cost);
}

/*
 * Retrurns an array with the total cost of each b_node
*/
void	ft_get_total_cost_arr(t_list **a, t_list **b)
{
	int	*a_node_cost;
	int	b_size;

	b_size = ft_get_stack_size(b);
	a_node_cost = (int *)malloc(sizeof(int) * b_size);
	if (!a_node_cost)
		return ;
	a_node_cost = ft_get_a_big_close_cost(a, b, a_node_cost);
	// for (int i = 0; i < b_size; ++i) {
	// 	printf("a_node_cost[%d]: %d\n", i, a_node_cost[i]);
	// }
	free(a_node_cost);
}
