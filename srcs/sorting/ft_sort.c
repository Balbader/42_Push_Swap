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
	int	a_size;

	if (!(*a))
		return ;
	a_size = ft_get_stack_size(a);
	printf("a_size: %d\n", a_size);
	if (ft_stack_is_sorted(*a) == 1)
	{
		i = 0;
		while (i < a_size - 2)
		{
			ft_pb(a, b);
			++i;
		}
		if (ft_stack_is_sorted(*a) == 1)
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
	}
	ft_reorder_a(a);
}
