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

int	ft_find_cheapest_cost(t_list **a, t_list **b,
						int big_bro_idx, int lil_bro_idx)
{
	int	ra_rb;
	int	rra_rrb;
	int	ra_rrb;
	int	rra_rb;
	int	last_a;
	int	last_b;

	last_a = ft_get_last_node(*a);
	last_b = ft_get_last_node(*b);
	ra_rb = ft_max(big_bro_idx, lil_bro_idx);
	rra_rrb = ft_max(last_a->index - big_bro_idx,
			last_b->index - lil_bro_idx) + 1;
	ra_rrb = big_bro_idx + last_b->index - lil_bro_idx + 1;
	rra_rb = lil_bro_idx + last_a->index - big_bro_idx + 1;
	return (ft_min(ft_min(ra_rb, rra_rb), ft_min(ra_rrb, rra_rb)));
}
