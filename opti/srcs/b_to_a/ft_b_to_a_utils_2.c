/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_to_a_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:54:17 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/18 13:54:18 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_smallest_is_first(t_list **a, t_list **b)
{
	int	next_idx;

	ft_re_init_index(*b);
	next_idx = ft_find_biggest_node_idx(b);
	ft_push_node_to_a(a, b, next_idx);
	ft_re_init_index(*b);
	if ((*a)->next)
	{
		if ((*a)->data > (*a)->next->data)
			ft_sa(a);
	}
	ft_re_init_index(*b);
	next_idx = ft_find_biggest_node_idx(b);
	ft_push_node_to_a(a, b, next_idx);
	ft_re_init_index(*b);
	if ((*a)->next)
	{
		if ((*a)->data > (*a)->next->data)
			ft_sa(a);
	}
}

void	ft_middle_is_first(t_list **a, t_list **b)
{
	int	next_idx;

	ft_re_init_index(*b);
	next_idx = ft_find_biggest_node_idx(b);
	ft_push_node_to_a(a, b, next_idx);
	ft_re_init_index(*b);
	if ((*a)->next)
	{
		if ((*a)->data > (*a)->next->data)
			ft_sa(a);
	}
	ft_re_init_index(*b);
	next_idx = ft_find_biggest_node_idx(b);
	ft_push_node_to_a(a, b, next_idx);
}

void	ft_biggest_is_first(t_list **a, t_list **b)
{
	int	next_idx;

	ft_re_init_index(*b);
	next_idx = ft_find_biggest_node_idx(b);
	ft_push_node_to_a(a, b, next_idx);
	ft_re_init_index(*b);
	next_idx = ft_find_biggest_node_idx(b);
	ft_push_node_to_a(a, b, next_idx);
}
