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

void	ft_push_from_a_to_b(t_list **a, t_list **b)
{
	int	*a_cost_arr;
	int	*b_cost_arr;
	int	a_size;
	int	cheapest_idx;
	int	i;

	a_size = ft_get_stack_size(*a);
	cheapest_idx = 0;
	cheapest_idx = ft_find_cheapest_a(a, b);
	a_cost_arr = ft_init_a_cost_arr(a);
	b_cost_arr = ft_init_b_cost_arr(a, b);
	for (int j = 0; j < a_size)
	i = 0;
	while (i < a_size)
	{
		a_size = ft_get_stack_size(*a);

		// --------------------------------------------------------------------
		printf("-----------------------------------> %d\n", i + 1);
		// --------------------------------------------------------------------

		ft_do_cheapest_a(a, b, a_cost_arr[cheapest_idx], b_cost_arr[cheapest_idx]);
		cheapest_idx = ft_find_cheapest_a(a, b);
		a_cost_arr = ft_init_a_cost_arr(a);
		b_cost_arr = ft_init_b_cost_arr(a, b);

		// --------------------------------------------------------------------
		// ft_print_stack(b, "b");
		// printf("cheapest_idx_a: %d\n", cheapest_idx);
		// printf("a_cost_arr[%d]: %d\n", cheapest_idx, a_cost_arr[cheapest_idx]);
		// printf("b_cost_arr[%d]: %d\n", cheapest_idx, b_cost_arr[cheapest_idx]);
		printf("\n");
		// --------------------------------------------------------------------
		++i;
	}
}
