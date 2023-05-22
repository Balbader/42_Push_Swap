/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 08:55:06 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/22 08:55:08 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_list **a, t_list **b)
{
	int	i;

	if (!(*a))
		return ;
	i = ft_get_stack_size(a);
	if (!ft_stack_is_sorted(*a))
	{
		while (i > 2)
		{
			ft_pb(a, b);
			--i;
		}
		if (!ft_stack_is_sorted(*a))
			ft_sa(a);
		if (*b)
		{
			i = ft_get_stack_size(b);
			while (i >= 0)
			{
				ft_do_cheapest_move(a, b);
				--i;
			}
		}
		ft_reorder_a(a);
	}
}
