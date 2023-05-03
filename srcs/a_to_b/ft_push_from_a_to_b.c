/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_a_to_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:30:35 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/03 11:30:36 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_from_a_to_b(t_list **a, t_list **b)
{
	int		a_size;
	int		mid;
	int		i;

	a_size = ft_get_stack_size(a);
	mid = a_size / 2;
	i = 0;
	while (i < mid)
	{
		if ((*a)->pos < mid)
			ft_pb(a, b);
		else
			ft_ra(a);
		++i;
	}
}