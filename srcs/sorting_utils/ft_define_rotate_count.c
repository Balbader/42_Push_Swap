/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define_rotate_count.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:32:55 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/24 11:32:57 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	ft_define_rotate_count(t_list *stack, int node_to_move_idx)
{
	int	first_node_idx;
	int	mid_idx;
	int	rotate_counts;
	int	stack_size;

	stack_size = ft_get_stack_size(stack);
	mid_idx = ft_find_middle_node_idx(&stack);
	first_node_idx = stack->index;
	if (node_to_move_idx == 1)
		rotate_counts = 0;
	else if (node_to_move_idx < mid_idx)
		rotate_counts = node_to_move_idx - first_node_idx;
	else
		rotate_counts = (stack_size - node_to_move_idx + 1) * -1;
	return (rotate_counts);
}
