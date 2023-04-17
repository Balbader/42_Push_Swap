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

// static int	ft_which_2_costs_are_the_same(int cost_1st_big, int cost_2nd_big,
// 										int cost_3rd_big)
// {
// 	if (ft_costs_are_same(cost_1st_big, cost_2nd_big) == 1)
// 		return (1);
// 	else if (ft_costs_are_same(cost_1st_big, cost_3rd_big) == 1)
// 		return (2);
// 	else if (ft_costs_are_same(cost_2nd_big, cost_3rd_big) == 1)
// 		return (3);
// 	else
// 		return (0);
// }

// static int	*ft_re_sort_indexex(int cost_1st_big, int cost_2nd_big,
// 							int cost_3rd_big)
// {
// 	int same;

// 	same = ft_which_2_costs_are_the_same(cost_1st_big,
// 									cost_2nd_big, cost_3rd_big);
// 	if (same == 1)
// 	else if (same == 2)
// 	else if (same == 3)
// }

 /*
 * In the case where two cost values are identical, we need to compare the node
 * values that each cost represents in order to find the biggest node value,
 * then sort the indexes based on the cheapest cost knowing that in all cases,
 * when it comes to the 2 identical costs, we will always give the priority to
 * the biggest node value out of the 2 identical costs.
*/
// void	ft_reorder_costs(int *indexes, int cost_1st_big, int cost_2nd_big,
// 					int cost_3rd_big)
// {
// 	int	*values;

// 	(void)cost_1st_big;
// 	(void)cost_2nd_big;
// 	(void)cost_3rd_big;
// 	values = (int *)malloc(sizeof(int) * 3);
// 	if (!values)
// 		return ;
// 	values = ft_init_values_array(b, values);
// 	for (int i = 0; i < 3; ++i) {
// 		printf("values[%d]: [%d]\n", i, values[i]);
// 	}
// }
