/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 08:26:40 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/04 08:26:42 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
	NEED:
	1. Fct to calculate the cost for each a_node
	2. Fct to find the biggest & closest a_node for each b_node
*/

/*
 * Returns an array contining the cost of moving each a_node
 * to the top of a_stack
*/
int	*ft_get_a_cost_arr(t_list **a)
{
	t_list	*tmp;
	int		i;
	int		*a_cost;
	int		a_size;

	ft_re_init_index(*a);
	tmp = (*a);
	a_size = ft_get_stack_size(a);
	a_cost = (int *)malloc(sizeof(int) * a_size);
	if (!a_cost)
		return (0);
	i = 0;
	while (i < a_size)
	{
		a_cost[i] = ft_calculate_node_cost(&tmp, i + 1, a_size);
		tmp = tmp->next;
		++i;
	}
	return (a_cost);
}
