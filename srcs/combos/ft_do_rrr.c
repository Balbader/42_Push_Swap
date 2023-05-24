/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_rrr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:04:26 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/22 12:04:28 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_do_rrr(t_list **a, t_list **b, int a_idx, int b_idx)
{
	int	a_size;
	int	b_size;

	a_size = ft_get_last_node(*a)->index;
	b_size = ft_get_last_node(*b)->index;
	while (a_idx && a_idx <= a_size && b_idx && b_idx <= b_size)
	{
		ft_rrr(a, b);
		a_idx++;
		b_idx++;
	}
	while (a_idx && a_idx <= a_size)
	{
		ft_rra(a);
		a_idx++;
	}
	while (b_idx && b_idx <= b_size)
	{
		ft_rrb(b);
		b_idx++;
	}
	ft_pa(a, b);
}
