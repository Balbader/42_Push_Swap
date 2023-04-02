/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_a_to_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:27:02 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/24 12:27:04 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_from_a_to_b(t_list **a, t_list **b, int a_size)
{
	t_list	*tmp_a;
	t_list	*tmp_b;
	int	*a_cost;
	int	*b_cost;
	int	*a_data;
	int	cheapest_a_node_idx;
	int	i;

	(void)a_size;
	a_data = NULL;
	a_data = ft_init_data_array(a);
	i = 0;
	tmp_a = (*a);
	tmp_b = (*b);
	while (i < 6)
	// while (tmp_a)
	{
		tmp_a = (*a);
		a_cost = ft_init_a_cost_arr(&tmp_a);
		b_cost = ft_init_b_cost_arr(&tmp_a, &tmp_b);
		cheapest_a_node_idx = ft_find_cheapest_a_node_idx(&tmp_a, &tmp_b);
		printf("-----------------------------------> %d\n", a_data[cheapest_a_node_idx]);
		printf("a_cost[%d]: %d\n", cheapest_a_node_idx, a_cost[cheapest_a_node_idx]);
		printf("b_cost[%d]: %d\n", cheapest_a_node_idx, b_cost[cheapest_a_node_idx]);
		printf("\n");
		ft_do_cheapest_a(a, b, a_cost[cheapest_a_node_idx], b_cost[cheapest_a_node_idx]);
		// tmp_a = tmp_a->next;
		// (*a) = tmp_a;
		++i;
	}
}
