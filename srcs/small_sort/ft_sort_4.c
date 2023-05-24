/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:32:47 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 10:32:48 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_smallest_node_4(t_list **a,
				t_list **b, int smallest_node_index)
{
	if (smallest_node_index == 0)
		ft_pb(a, b);
	if (smallest_node_index == 1)
	{
		ft_ra(a);
		ft_pb(a, b);
	}
	if (smallest_node_index == 2)
	{
		ft_ra(a);
		ft_ra(a);
		ft_pb(a, b);
	}
	if (smallest_node_index == 3)
	{
		ft_rra(a);
		ft_pb(a, b);
	}
	ft_re_init_index(*a);
}

void	ft_sort_4(t_list *a, t_list *b)
{
	int		smallest_node_index;

	ft_re_init_index(a);
	smallest_node_index = ft_find_smallest_idx(a);
	ft_push_smallest_node_4(&a, &b, smallest_node_index);
	a = ft_sort_3(a);
	ft_pa(&a, &b);
	ft_re_init_index(a);
}
