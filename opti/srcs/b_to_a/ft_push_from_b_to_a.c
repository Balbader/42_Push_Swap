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

void		ft_push_node_to_a(t_list **a, t_list **b, int *data)
{
	int	first;
	int	second;
	int	third;

	first = ft_find_biggest_node_idx(b);
	second = ft_find_second_biggest_node_idx(b);
	third = ft_find_third_biggest_node_idx(b);
	if (data[0] > data[1] && data[0] > data[2]) // big == cheapest
		ft_push_first(a, b, first);
	if (data[0] < data[1] && data[0] > data[2]) // 2nd big == cheapest
		ft_push_second(a, b, second, first);
	if (data[0] < data[1] && data[0] < data[2]) // 3rd big == cheapest
		ft_push_third(a, b, third, first);
	if (data[0] > data[1] && data[0] < data[2]) // 3rd big == cheapest
		ft_push_third(a, b, third, first);
}

int	*ft_costs(t_list **b, int *costs)
{
	costs[0]= ft_cost_first_big(b);
	costs[1]= ft_cost_second_big(b);
	costs[2]= ft_cost_third_big(b);
	return (costs);
}

int	*ft_data(t_list **b, int *data)
{
	data[0] = ft_find_biggest_node_data(b);
	data[1] = ft_find_second_biggest_node_data(b);
	data[2] = ft_find_third_biggest_node_data(b);
	return(data);
}

void	ft_final_sort(t_list **a, t_list **b)
{
	int	*costs;
	int	*data;

	data = (int *)malloc(sizeof(int) * 3);
	costs = (int *)malloc(sizeof(int) * 3);
	if (!costs || !data)
		return ;
	costs = ft_costs(b, costs);
	data = ft_data(b, data);
	// printf("\n");
	// for (int i = 0; i < 3; ++i) {
	// 	printf("data: %d\n", data[i]);
	// }
	// printf("\n");
	ft_re_order_data_and_costs(b, data, costs);
	// for (int i = 0; i < 3; ++i) {
	// 	printf("data: %d\n", data[i]);
	// 	printf("cost: %d\n", costs[i]);
	// }
	// printf("\n");
	ft_push_node_to_a(a, b, data);
	// ft_re_init_index(*a);
	// ft_print_stack(a, "a");
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	// int	i;

	// i = 0;
	// while (i < 10)
	// while (i < 5)
	while ((*b))
	{
		// printf("-------------------------->%d\n", i + 1);
		ft_re_init_index(*a);
		ft_re_init_index(*b);
		ft_final_sort(a, b);
		// ++i;
	}
}
