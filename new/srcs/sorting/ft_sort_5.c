/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:11:12 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 11:11:14 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push_smallest_node_5(t_list **stack_a,
						t_list **stack_b, int smallest_node_index)
{
	if (smallest_node_index == 1)
		ft_pb(stack_a, stack_b);
	if (smallest_node_index == 2)
	{
		ft_ra(stack_a);
		ft_pb(stack_a, stack_b);
	}
	if (smallest_node_index == 3)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
		ft_pb(stack_a, stack_b);
	}
	if (smallest_node_index == 4)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
		ft_pb(stack_a, stack_b);
	}
	if (smallest_node_index == 5)
	{
		ft_rra(stack_a);
		ft_pb(stack_a, stack_b);
	}
	*stack_a = ft_re_init_index(*stack_a);
}

void	ft_sort_5(t_list *stack_a, t_list *stack_b)
{
	int		smallest_node_index;

	smallest_node_index = ft_find_smallest_node_pos(stack_a);
	ft_push_smallest_node_5(&stack_a, &stack_b, smallest_node_index);
	smallest_node_index = ft_find_smallest_node_pos(stack_a);
	ft_push_smallest_node_4(&stack_a, &stack_b, smallest_node_index);
	stack_a = ft_sort_3(stack_a);
	stack_a = ft_re_init_index(stack_a);
	ft_pa(&stack_a, &stack_b);
	stack_a = ft_re_init_index(stack_a);
	ft_pa(&stack_a, &stack_b);
}
