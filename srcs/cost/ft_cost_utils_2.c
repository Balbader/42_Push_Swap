/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_utils_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:14:35 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/12 13:14:38 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct s_data
{
	int	cheapest_big_bro_cost;
	int	big_bro_pos;
	int	big_bro_idx;
	int	lil_bro_pos;
	int	*a_pos;
	int	*a_cost;
	int	*b_cost;
	int	b_size;
}				t_data;

static int	ft_get_cheapest_big_bro_cost(t_list **a, t_list **b)
{
	t_data	data;

	ft_re_init_index(*a);
	data.a_pos = NULL;
	data.a_pos = ft_get_pos_arr(a, data.a_pos);
	data.a_cost = NULL;
	data.a_cost = ft_get_cost_arr(a, data.a_pos);
	data.lil_bro_pos = 0;
	data.big_bro_pos = 0;
	data.big_bro_idx = 0;
	data.lil_bro_pos = ft_get_cheapest_lil_bro_pos(b, data.lil_bro_pos);
	data.big_bro_pos = ft_get_big_bro_pos(a, data.a_pos, data.lil_bro_pos);
	data.big_bro_idx = ft_get_incoming_idx(a, data.big_bro_pos,
			data.big_bro_idx);
	data.cheapest_big_bro_cost = 0;
	data.cheapest_big_bro_cost = data.a_cost[data.big_bro_idx];
	free(data.a_pos);
	free(data.a_cost);
	return (data.cheapest_big_bro_cost);
}

int	*ft_get_final_b_cost_arr(t_list **a, t_list **b, int *final_b_cost_arr)
{
	t_data	data;
	int		i;

	ft_re_init_index(*b);
	data.b_cost = NULL;
	data.b_cost = ft_get_cost_arr(b, data.b_cost);
	data.b_size = ft_get_stack_size(b);
	final_b_cost_arr = (int *)malloc(sizeof(int) * data.b_size);
	if (!final_b_cost_arr)
		return (0);
	data.cheapest_big_bro_cost = 0;
	data.cheapest_big_bro_cost = ft_get_cheapest_big_bro_cost(a, b);
	i = 0;
	while (i < data.b_size)
	{
		final_b_cost_arr[i] = data.cheapest_big_bro_cost + data.b_cost[i];
		++i;
	}
	free(data.b_cost);
	return (final_b_cost_arr);
}

int	ft_get_final_cheapest_idx(int *final_b_cost_arr, int cheapest_idx,
							int b_size)
{
	int	i;

	cheapest_idx = 0;
	i = 0;
	while (i < b_size)
	{
		if (final_b_cost_arr[i] < 0)
			final_b_cost_arr[i] *= -1;
		if (final_b_cost_arr[i] < cheapest_idx)
			cheapest_idx = i;
		++i;
	}
	free(final_b_cost_arr);
	return (cheapest_idx);
}
