/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:16:06 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/04 09:16:08 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Retruns an array containing the final position of each b_node
 * in a sorted b_stack
*/

int	*ft_get_b_pos_arr(t_list **b)
{
	t_list	*tmp;
	int		*pos_b;
	int		i;
	int		b_size;

	ft_re_init_index(*b);
	tmp = (*b);
	b_size = ft_get_stack_size(b);
	pos_b = (int *)malloc(sizeof(int) * b_size);
	if (!pos_b)
		return (0);
	i = 0;
	while (i < b_size)
	{
		pos_b[i] = tmp->pos;
		++i;
		tmp = tmp->next;
	}
	ft_free_stack(&tmp);
	return (pos_b);
}
