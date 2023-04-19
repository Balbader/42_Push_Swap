/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:52:42 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/18 13:52:43 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_costs(t_list **b, int *cost_arr)
{
	cost_arr[0]= ft_cost_first_big(b);
	cost_arr[1]= ft_cost_second_big(b);
	cost_arr[2]= ft_cost_third_big(b);
	return (cost_arr);
}

void	ft_final_sort(t_list **a, t_list **b)
{
	int	*cost_arr;

	(void)a;
	cost_arr = (int *)malloc(sizeof(int) * 3);
	if (!cost_arr)
		return ;
	cost_arr = ft_costs(b, cost_arr);
	for (int i = 0; i < 3; ++i) {
		printf("cost_arr: %d\n", cost_arr[i]);
	}
	// while ((*b))
	// 	{
	// 		if (cost_arr[0] < cost_arr[1] && cost_arr[0] < cost_arr[2])
	// 			ft_

	// 	}
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	// (void)a;
	ft_final_sort(a, b);
}
