/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_big_bro_idx.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 07:42:36 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/20 07:42:38 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Returns the idx of the a_node to bring to top of a_stack based on incoming
 * b_node_data that is greater and closest to incoming b_node_data
*/
int	ft_get_big_bro_idx(t_list *a, int incoming_data)
{
	int	big_bro;
	int	big_bro_idx;

	if (incoming_data > ft_find_biggest_node(a)->data)
		return (ft_find_smallest_node(a)->index);
	big_bro = INT_MAX;
	big_bro_idx = 0;
	while (a)
	{
		if (a->data > incoming_data && a->data <= big_bro)
		{
			big_bro_idx = a->index;
			big_bro = a->data;
		}
		a = a->next;
	}
	return (big_bro_idx);
}
