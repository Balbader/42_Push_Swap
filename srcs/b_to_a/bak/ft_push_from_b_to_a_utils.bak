/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a_utils.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:00:09 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/05 14:00:10 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_re_order_a(t_list **a, int incoming_pos)
{
	while (incoming_pos > (*a)->pos)
		ft_ra(a);
}

int	ft_get_incoming_pos(t_list **b, int	incoming_idx, int incoming_pos)
{
	t_list *tmp;

	tmp = (*b);
	while (tmp)
	{
		if (tmp->index == incoming_idx)
			incoming_pos = tmp->pos;
		tmp = tmp->next;
	}
	return (incoming_pos);
}
