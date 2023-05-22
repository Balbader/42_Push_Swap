/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reorder_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 07:12:08 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/20 07:12:18 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reorder_a(t_list **a)
{
	int	smallest_idx;
	int	a_size;
	int	mid;

	if (!(*a))
		return ;
	smallest_idx = ft_find_smallest_idx(*a);
	a_size = ft_get_stack_size(a);
	mid = a_size / 2;
	if (smallest_idx <= mid)
	{
		while (smallest_idx > 0)
		{
			ft_ra(a);
			--smallest_idx;
		}
	}
	else
	{
		while (smallest_idx <= a_size)
		{
			ft_rra(a);
			++smallest_idx;
		}
	}
}
