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

void	ft_push_first(t_list **a, t_list **b, int first)
{
	int	cost;

	ft_re_init_index(*b);
	cost = ft_calculate_cost(b, first);
	ft_check_cost_and_rotate(cost, a, b);
}

void	ft_push_second(t_list **a, t_list **b, int second, int first)
{
	int	cost;

	ft_re_init_index(*b);
	cost = ft_calculate_cost(b, second);
	ft_check_cost_and_rotate(cost, a, b);
	ft_re_init_index(*b);
	first = ft_find_biggest_node_idx(b);
	cost = ft_calculate_cost(b, first);
	ft_check_cost_and_rotate(cost, a, b);
	if ((*a)->data > (*a)->next->data)
		ft_sa(a);
}

void	ft_push_third(t_list **a, t_list **b, int third, int first)
{
	int	cost;

	ft_re_init_index(*b);
	cost = ft_calculate_cost(b, third);
	ft_check_cost_and_rotate(cost, a, b);
	ft_re_init_index(*b);
	first = ft_find_biggest_node_idx(b);
	cost = ft_calculate_cost(b, first);
	ft_check_cost_and_rotate(cost, a, b);
	if ((*a)->data > (*a)->next->data)
		ft_sa(a);
	ft_re_init_index(*b);
	first = ft_find_biggest_node_idx(b);
	cost = ft_calculate_cost(b, first);
	ft_check_cost_and_rotate(cost, a, b);
	if ((*a)->data > (*a)->next->data)
		ft_sa(a);
}
