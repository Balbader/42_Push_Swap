/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a_utils_2.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:06:36 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/08 09:06:39 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_up_a(t_list **a, int *a_final_cost_cpy, int b_size,
				int cheapest_idx)
{
	int	hit_a;

	hit_a = ft_get_hit(a_final_cost_cpy, b_size, cheapest_idx);
	ft_reorder_a(a, hit_a);
}

void	ft_set_up_b(t_list **b, int b_size, int cheapest_idx)
{
	int	hit_b;
	int	*b_cost_arr;

	b_cost_arr = NULL;
	b_cost_arr = ft_get_cost_arr(b);
	hit_b = ft_get_hit(b_cost_arr, b_size, cheapest_idx);
	ft_reorder_b(b, hit_b);
}
