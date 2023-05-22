/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_ra_rrb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:04:02 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/22 12:04:04 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_do_ra_rrb(t_list **a, t_list **b, int a_idx, int b_idx)
{
	int	b_size;

	b_size = ft_get_stack_size(b);
	while (b_idx && b_idx <= b_size)
	{
		ft_rrb(b);
		++b_idx;
	}
	while (a_idx > 0)
	{
		ft_ra(a);
		--a_idx;
	}
	ft_pa(a, b);
}
