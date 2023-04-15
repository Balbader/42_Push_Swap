/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:30:00 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/15 12:30:02 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_costs_are_different(int a, int b, int c)
{
	return ((a != b) && (a != c) && (b != c));
}

int	ft_costs_are_same(int a, int b)
{
	return (a == b);
}

int	ft_first_cost(t_list **b)
{
	int	first_idx;
	int	cost;

	first_idx = ft_find_biggest_node_idx(b);
	cost = ft_calculate_cost(b, first_idx);
	return (cost);
}

int	ft_second_cost(t_list **b)
{
	int	second_idx;
	int	cost;

	second_idx = ft_find_second_biggest_node_idx(b);
	cost = ft_calculate_cost(b, second_idx);
	return (cost);
}

int	ft_third_cost(t_list **b)
{
	int	third_idx;
	int	cost;

	third_idx = ft_find_third_biggest_node_idx(b);
	cost = ft_calculate_cost(b, third_idx);
	return (cost);
}
