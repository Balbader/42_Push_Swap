/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:33:00 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 10:33:02 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push_smallest_node_5(t_list **a,
						t_list **b, int smallest_node_index)
{
	if (smallest_node_index == 1)
		ft_pb(a, b);
	if (smallest_node_index == 2)
	{
		ft_ra(a);
		ft_pb(a, b);
	}
	if (smallest_node_index == 3)
	{
		ft_ra(a);
		ft_ra(a);
		ft_pb(a, b);
	}
	if (smallest_node_index == 4)
	{
		ft_rra(a);
		ft_rra(a);
		ft_pb(a, b);
	}
	if (smallest_node_index == 5)
	{
		ft_rra(a);
		ft_pb(a, b);
	}
	ft_re_init_index(*a);
}

void	ft_sort_5(t_list **a, t_list **b)
{
	int		smallest_node_index;

	smallest_node_index = ft_find_smallest_node_idx(a);
	printf("smallest_node_index: %d\n", smallest_node_index);
	ft_push_smallest_node_5(a, b, smallest_node_index);

	smallest_node_index = ft_find_smallest_node_idx(a);
	printf("smallest_node_index: %d\n", smallest_node_index);
	ft_push_smallest_node_4(a, b, smallest_node_index);

	ft_sort_3(a);

	ft_re_init_index(*a);
	ft_pa(a, b);

	ft_re_init_index(*a);
	ft_pa(a, b);
}
