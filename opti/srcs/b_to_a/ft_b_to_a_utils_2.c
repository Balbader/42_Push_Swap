/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_to_a_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 07:28:53 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/14 07:28:57 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_if_smallest_is_first(t_list **a, t_list **b)
{
	int	next_idx;

	ft_re_init_index(*b);
	next_idx = ft_find_biggest_node_idx(b);
	ft_push_node_to_a(a, b, next_idx);
	ft_sa(a);
	ft_re_init_index(*b);
	next_idx = ft_find_biggest_node_idx(b);
	ft_push_node_to_a(a, b, next_idx);
	ft_sa(a);
}

void	ft_if_middle_is_first(t_list **a, t_list **b)
{
	int	next_idx;

	ft_re_init_index(*b);
	next_idx = ft_find_biggest_node_idx(b);
	ft_push_node_to_a(a, b, next_idx);
	ft_sa(a);
	ft_re_init_index(*b);
	next_idx = ft_find_biggest_node_idx(b);
	ft_push_node_to_a(a, b, next_idx);
}

void	ft_if_biggest_is_first(t_list **a, t_list **b, int *sorted_values)
{
	int	next_idx;

	if (sorted_values[1] < sorted_values[2])
	{
		ft_re_init_index(*b);
		next_idx = ft_find_second_biggest_node_idx(b);
		ft_push_node_to_a(a, b, next_idx);
		ft_re_init_index(*b);
		next_idx = ft_find_biggest_node_idx(b);
		ft_push_node_to_a(a, b, next_idx);
		ft_sa(a);
	}
	else
	{
		ft_re_init_index(*b);
		next_idx = ft_find_biggest_node_idx(b);
		ft_push_node_to_a(a, b, next_idx);
		ft_re_init_index(*b);
		next_idx = ft_find_biggest_node_idx(b);
		ft_push_node_to_a(a, b, next_idx);
	}
}
