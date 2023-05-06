/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:59:42 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/05 13:59:44 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void	ft_rotate_b(t_list **b)
// {
// }

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	*a_pos_arr;
	int	*b_pos_arr;
	int	*a_cost_arr;
	int	*b_cost_arr;
	int	b_size;
	int	a_size;

	a_size = ft_get_stack_size(a);
	a_pos_arr = NULL;
	a_pos_arr = ft_get_pos_arr(a);
	a_cost_arr = NULL;
	a_cost_arr = ft_get_cost_arr(a);

	b_size = ft_get_stack_size(b);
	b_pos_arr = ft_get_pos_arr(b);
	b_cost_arr = NULL;
	b_cost_arr = ft_get_cost_arr(b);

	int *a_node_pos_to_ra;

	a_node_pos_to_ra = ft_find_biggest_closest_a_node_idx(a, b, a_pos_arr, b_pos_arr);

	for (int i = 0; i < b_size; ++i) {
		printf("a_node_pos_to_ra[%d]: %d\n", i, a_node_pos_to_ra[i]);
	}
}

