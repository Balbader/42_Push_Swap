/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:59:42 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/05 13:59:44 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	b_node_to_mv_idx;
	int	b_size;
	int	i;
	int	mid;

	b_size = ft_get_stack_size(b);
	mid = b_size / 2;
	b_node_to_mv_idx = 0;
	b_node_to_mv_idx = ft_find_cheapest_b_node_idx(a, b, b_node_to_mv_idx);
	i = 0;
	while (*b)
	{
		b_node_to_mv_idx = ft_find_cheapest_b_node_idx(a, b, b_node_to_mv_idx);
		// ft_check_idx_and_rotate(b_node_to_mv_idx, a, b, mid);
	}
}
