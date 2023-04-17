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

static int	ft_which_2_costs_are_the_same(int cost_1st_big, int cost_2nd_big,
										int cost_3rd_big)
{
	if (ft_costs_are_same(cost_1st_big, cost_3rd_big) == 1)
		return (1);
	else if (ft_costs_are_same(cost_1st_big, cost_2nd_big) == 1)
		return (2);
	else if (ft_costs_are_same(cost_2nd_big, cost_3rd_big) == 1)
		return (3);
	else
		return (0);
}

int	*ft_re_sort_indexes(int cost_1st_big, int cost_2nd_big,
							int cost_3rd_big, int *indexes)
{
	int	same;

	same = ft_which_2_costs_are_the_same(cost_1st_big,
			cost_2nd_big, cost_3rd_big);
	if (same == 1 && cost_1st_big > cost_2nd_big)
		ft_swap_values(&indexes[0], &indexes[1]);
	else if (same == 1 && cost_1st_big < cost_2nd_big
		&& cost_2nd_big > cost_3rd_big)
		ft_swap_values(&indexes[1], &indexes[2]);
	else if (same == 2 && cost_1st_big > cost_3rd_big)
	{
		ft_swap_values(&indexes[1], &indexes[2]);
		ft_swap_values(&indexes[0], &indexes[1]);
	}
	else if (same == 3 && cost_1st_big > cost_2nd_big)
	{
		ft_swap_values(&indexes[0], &indexes[1]);
		ft_swap_values(&indexes[1], &indexes[2]);
	}
	return (indexes);
}
