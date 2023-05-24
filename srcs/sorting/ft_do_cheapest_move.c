/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_cheapest_move.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 08:42:28 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/22 08:42:29 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_do_cheapest_move(t_list **a, t_list **b)
{
	int	lil_bro_idx;
	int	big_bro_idx;
	int	cheapest_move;

	lil_bro_idx = ft_find_cheapest_node(*a, *b)->index;
	big_bro_idx = ft_get_big_bro_idx(*a, ft_find_cheapest_node(*a, *b)->data);
	cheapest_move = ft_find_cheapest_move(*a, *b, big_bro_idx, lil_bro_idx);
	if (cheapest_move == RR)
		ft_do_rr(a, b, big_bro_idx, lil_bro_idx);
	else if (cheapest_move == RRR)
		ft_do_rrr(a, b, big_bro_idx, lil_bro_idx);
	else if (cheapest_move == RRA_RB)
		ft_do_rra_rb(a, b, big_bro_idx, lil_bro_idx);
	else
		ft_do_ra_rrb(a, b, big_bro_idx, lil_bro_idx);
}
