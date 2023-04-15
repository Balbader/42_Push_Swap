/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_utils_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:59:34 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/15 16:59:36 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_which_2_costs_are_the_same(int cost_1st, int cost_2nd, int cost_3rd)
{
	if (ft_costs_are_same(cost_1st, cost_2nd) == 1)
		return (1);
	else if (ft_costs_are_same(cost_1st, cost_3rd) == 1)
		return (2);
	else if (ft_costs_are_same(cost_2nd, cost_3rd) == 1)
		return (3);
	else
		return (0);
}

static int	ft_find_biggest_value_idx(int same_idx_1, int same_idx_2)
{
}

 /*
 * In the case where two cost values are identical, we need to compare the node
 * values that each cost represents in order to find the biggest node value,
 * then sort the indexes based on the cheapest cost knowing that in all cases,
 * when it comes to the 2 identical costs, we will always give the priority to
 * the biggest node value out of the 2 identical costs.
*/
void	ft_reorder_costs(int cost_1st, int cost_2nd, int cost_3rd)
{
	int	the_same_are;

	the_same_are = ft_which_2_costs_are_the_same(cost_1st, cost_2nd, cost_3rd);
	printf("the_same_are: %d\n", the_same_are);
}
