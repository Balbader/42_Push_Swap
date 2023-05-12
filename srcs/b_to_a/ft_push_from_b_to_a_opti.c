/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a_opti.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:44:43 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/12 11:44:44 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * What am I trying to do?
 * Get the cheapest a_node_idx (big_bro_idx) && b_node_idx (lil_bro_idx)
*/

int	ft_get_cheapest_lil_bro_idx(t_list **b, int lil_bro_idx)
{
	int	*b_cost_arr;
	int	b_size;
	int	cheapest;
	int	i;

	ft_re_init_index(*b);
	b_size = ft_get_stack_size(b);
	b_cost_arr = NULL;
	b_cost_arr = ft_get_cost_arr(b, b_cost_arr);
	cheapest = INT_MAX;
	i = 0;
	while (i < b_size)
	{
		if (b_cost_arr[i] < 0)
			b_cost_arr[i] *= -1;
		if (b_cost_arr[i] < cheapest )
		{
			cheapest = b_cost_arr[i];
			lil_bro_idx = i;
		}
		++i;
	}
	return (free(b_cost_arr), lil_bro_idx);
}


int	ft_get_cheapest_lil_bro_pos(t_list **b, int lil_bro_pos)
{
	int	*b_pos_arr;
	int	b_size;
	int	lil_bro_idx;
	int	i;

	ft_re_init_index(*b);
	b_size = ft_get_stack_size(b);
	lil_bro_idx = 0;
	lil_bro_idx = ft_get_cheapest_lil_bro_idx(b, lil_bro_idx);
	b_pos_arr = NULL;
	b_pos_arr = ft_get_pos_arr(b, b_pos_arr);
	i = 0;
	while (i < b_size)
	{
		if (i == lil_bro_idx)
			lil_bro_pos = b_pos_arr[i];
		++i;
	}
	return (free(b_pos_arr), lil_bro_pos);
}
