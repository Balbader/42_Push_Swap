/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_to_a_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:26:32 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/13 13:26:50 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_cost_and_rotate(int cost, t_list **a, t_list **b)
{
	int	i;

	if (cost == 0)
		ft_pa(a, b);
	if (cost > 0)
	{
		i = 0;
		while (i < cost)
		{
			ft_rb(b);
			++i;
		}
		ft_pa(a, b);
	}
	else if (cost < 0)
	{
		i = 0;
		cost *= -1;
		while (i < cost)
		{
			ft_rrb(b);
			++i;
		}
		ft_pa(a, b);
	}
}

void	ft_push_node_to_a(t_list **a, t_list **b, int node_idx)
{
	int	cost;

	cost = ft_calculate_cost(b, node_idx);
	ft_check_cost_and_rotate(cost, a, b);
	ft_re_init_index(*a);
	ft_re_init_index(*b);
}

int	ft_return_new_idx_to_push(t_list **b, int node_value)
{
	t_list	*tmp;
	int		new_idx;

	new_idx = 0;
	ft_re_init_index(*b);
	tmp = (*b);
	while (tmp)
	{
		if (tmp->data == node_value)
			new_idx = tmp->index;
		tmp = tmp->next;
	}
	return (new_idx);
}
