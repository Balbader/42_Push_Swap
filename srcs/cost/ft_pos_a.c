/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:15:48 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/04 09:15:49 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Retruns an array containing the final position of each a_node
 * in a sorted a_stack
*/

int	*ft_get_a_pos_arr(t_list **a)
{
	t_list	*tmp;
	int		*pos_a;
	int		i;
	int		a_size;

	ft_re_init_index(*a);
	tmp = (*a);
	a_size = ft_get_stack_size(a);
	pos_a = (int *)malloc(sizeof(int) * a_size);
	if (!pos_a)
		return (0);
	i = 0;
	while (i < a_size)
	{
		pos_a[i] = tmp->pos;
		++i;
		tmp = tmp->next;
	}
	ft_free_stack(&tmp);
	return (pos_a);
}
