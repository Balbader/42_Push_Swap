/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_cheapest_cost.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 07:57:55 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/22 07:57:57 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_cheapest_cost(t_list *a, t_list *b,
						int big_bro_idx, int lil_bro_idx)
{
	int	rr;
	int	rrr;
	int	ra_rrb;
	int	rra_rb;

	rr = ft_max(big_bro_idx, lil_bro_idx);
	rrr = ft_max(ft_get_last_node(a)->index - big_bro_idx,
			ft_get_last_node(b)->index - lil_bro_idx) + 1;
	ra_rrb = big_bro_idx + ft_get_last_node(b)->index - lil_bro_idx + 1;
	rra_rb = lil_bro_idx + ft_get_last_node(a)->index - big_bro_idx + 1;
	return (ft_min(ft_min(rr, rrr), ft_min(ra_rrb, rra_rb)));
}
