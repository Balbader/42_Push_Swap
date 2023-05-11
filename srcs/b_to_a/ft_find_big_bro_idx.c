/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_big_bro_idx.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:35:26 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/09 13:35:32 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Returns the value of the a_node that is the smallest of a_stack yet greater
 * than incoming b_node value
*/
int	ft_find_big_bro_idx(t_list **a, int incoming_pos)
{
	int	big_bro;
	int	big_bro_idx;
	int	a_size;
	int	i;

	ft_re_init_index(*a);
	big_bro = INT_MAX;
	big_bro_idx = INT_MIN;
	a_size = ft_get_stack_size(a);
	i = 0;
	while (i < a_size)
	{
		if (((*a)->pos > incoming_pos && (*a)->data < big_bro)
			|| ((*a)->pos < incoming_pos && (*a)->data < big_bro))
		{
			big_bro = (*a)->data;
			big_bro_idx = (*a)->index;
		}
		(*a) = (*a)->next;
		++i;
	}
	return (big_bro_idx);
}
