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
 * b_node_pos that is greater and closest to incoming b_node_pos
*/
int	ft_get_big_bro_idx(t_list **a, int incoming_data)
{
	t_list	*tmp;
	int		big_bro_idx;
	int		closest;
	int		a_size;
	int		i;

	ft_re_init_index(*a);
	tmp = (*a);
	a_size = ft_get_stack_size(a);
	closest = INT_MAX;
	big_bro_idx = tmp->index;
	i = 0;
	while (i < a_size)
	{
		if (tmp->data > incoming_data && tmp->data <= closest)
		{
			closest = tmp->data;
			big_bro_idx = tmp->index;
		}
		tmp = tmp->next;
		++i;
	}
	ft_free_stack(&tmp);
	return (big_bro_idx);
}
