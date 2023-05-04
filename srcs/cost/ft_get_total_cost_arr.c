/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_total_cost_arr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:26:43 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/04 10:26:44 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_get_total_cost_arr(t_list **a, t_list **b)
{
	int	*a_pos;
	int	*b_pos;
	int	*a_node_pos;
	int	b_size;

	a_pos = ft_get_a_pos_arr(a);
	b_pos = ft_get_b_pos_arr(b);
	b_size = ft_get_stack_size(b);
	a_node_pos = NULL;
	a_node_pos = ft_find_biggest_closest_a_node_idx(a, b, a_pos, b_pos);
	for (int i = 0; i < b_size; ++i) {
		printf("a_node_pos[%d]: %d\n", i, a_node_pos[i]);
	}
	free(a_node_pos);
	free(a_pos);
	free(b_pos);
}
