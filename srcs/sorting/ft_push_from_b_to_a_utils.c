/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a_utils.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:00:10 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/05 09:00:12 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
	find smallest node in 'a' and bring it to the top
*/

void	ft_finalize_a(t_list **a)
{
	int	smallest_idx;

	ft_re_init_index(*a);
	smallest_idx = ft_find_smallest_node_idx(a);
	ft_re_order_a(a, smallest_idx);
	ft_re_init_index(*a);
}
