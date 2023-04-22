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

int	*ft_biggest_data(t_list **b, int *biggest_data)
{
	biggest_data[0] = ft_find_biggest_node_data(b);
	biggest_data[1] = ft_find_second_biggest_node_data(b);
	biggest_data[2] = ft_find_third_biggest_node_data(b);
	return(biggest_data);
}

int	*ft_biggest_idx(t_list **b, int *biggest_idx)
{
	biggest_idx[0] = ft_find_biggest_node_idx(b);
	biggest_idx[1] = ft_find_second_biggest_node_idx(b);
	biggest_idx[2] = ft_find_third_biggest_node_idx(b);
	return(biggest_idx);
}

void	ft_get_data(t_list **b)
{
	int	*data;
	int	*idx;
	int	*cost;

	printf("\n");

	data = (int *)malloc(sizeof(int) * 3);
	idx = (int *)malloc(sizeof(int) * 3);
	cost = (int *)malloc(sizeof(int) * 3);
	if (!data || !idx || !cost)
		return ;
	data = ft_biggest_data(b, data);
	idx = ft_biggest_idx(b, idx);
	cost = ft_costs(b, cost);

	for (int i = 0; i < 3; ++i) {
		printf("data: %d\n", data[i]);
		printf("idx: [%d]\n", idx[i]);
		printf("cost: %d\n", cost[i]);
		printf("\n");
	}

	ft_print_stack(b, "b");
}

void	ft_final_sort(t_list **a, t_list **b)
{
	(void)a;
	ft_get_data(b);
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	// (void)a;
	ft_final_sort(a, b);
}
