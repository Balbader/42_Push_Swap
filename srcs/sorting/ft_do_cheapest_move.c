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
	t_list	*cheapest_node;
	int		lil_bro_idx;
	int		big_bro_idx;
	int		cheapest_move;

	ft_re_init_index(*a);
	ft_re_init_index(*b);
	cheapest_node = NULL;
	cheapest_node = ft_find_cheapest_node(a, b);
	lil_bro_idx = cheapest_node->index;
	big_bro_idx = ft_get_big_bro_idx(a, cheapest_node->data);
	cheapest_move = ft_find_cheapest_move(a, b, big_bro_idx, lil_bro_idx);
	if (cheapest_move == RA_RB)
		ft_do_ra_rb(a, b, big_bro_idx, lil_bro_idx);
	else if (cheapest_move == RRA_RRB)
		ft_do_rra_rrb(a, b, big_bro_idx, lil_bro_idx);
	else if (cheapest_move == RRA_RB)
		ft_do_rra_rb(a, b, big_bro_idx, lil_bro_idx);
	else
		ft_do_ra_rrb(a, b, big_bro_idx, lil_bro_idx);
}
