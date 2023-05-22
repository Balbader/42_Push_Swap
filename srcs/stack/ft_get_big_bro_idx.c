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
int	ft_get_big_bro_idx(t_list **a, int incoming_data)
{
	t_list	*tmp;
	int		big_bro_idx;
	int		closest;

	tmp = (*a);
	// if (incoming_data > ft_find_biggest_node(&tmp)->data)
	// 	return (ft_find_smallest_node(&tmp)->index);
	closest = INT_MAX;
	big_bro_idx = 0;
	while (tmp)
	{
		if (tmp->data > incoming_data && tmp->data <= closest)
		{
			closest = tmp->data;
			big_bro_idx = tmp->index;
		}
		tmp = tmp->next;
	}
	ft_free_stack(&tmp);
	return (big_bro_idx);
}
