/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_rra_rb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:04:10 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/22 12:04:12 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_do_rra_rb(t_list **a, t_list **b, int a_idx, int b_idx)
{
	int	a_size;

	a_size = ft_get_last_node(*a)->index;
	while (a_idx && a_idx <= a_size)
	{
		ft_rra(a);
		a_idx++;
	}
	while (b_idx > 0)
	{
		ft_rb(b);
		b_idx--;
	}
	ft_pa(a, b);
}
