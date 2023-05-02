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

void	ft_push_big_node_next(t_list **a, t_list **b)
{
	int	big_idx;
	int	cost;

	big_idx = ft_find_biggest_node_idx(b);
	cost = ft_calculate_cost(b, big_idx);
	ft_check_cost_and_rotate(cost, a, b);
}

void	ft_push_next_node_next(t_list **a, t_list **b)
{
	int	next_idx;
	int	cost;

	next_idx = ft_find_biggest_node_idx(b);
	cost = ft_calculate_cost(b, next_idx);
	ft_check_cost_and_rotate(cost, a, b);
}
