/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_cheapest_a_node.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 03:16:45 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/30 03:16:51 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * This function will run through 'a' and return the a_node.idx that is the
 * cheapest to send to 'b'.
*/
int	ft_find_cheapest_a(t_list **a, t_list **b)
{
	int	*cost_arr;
	int	a_size;
	int	cheapest;
	int	cheapest_idx;
	int	i;

	a_size = ft_get_stack_size(*a);
	cost_arr = NULL;
	cost_arr = ft_calculate_cost_arr(a, b);
	cheapest = INT_MAX;
	cheapest_idx = 0;
	i = 0;
	while (i < (a_size))
	{
		if (cost_arr[i] < cheapest)
		{
			cheapest = cost_arr[i];
			cheapest_idx = i + 1;
		}
		++i;
	}
	printf("cheapest a_node val: %d\n", cheapest);
	printf("cheapest a_node idx: %d\n", cheapest_idx);
	return (free(cost_arr), cheapest_idx);
}
