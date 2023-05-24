/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:04:18 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/22 12:04:20 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_do_rr(t_list **a, t_list **b, int a_idx, int b_idx)
{
	while (a_idx > 0 && b_idx > 0)
	{
		ft_rr(a, b);
		a_idx--;
		b_idx--;
	}
	while (a_idx > 0)
	{
		ft_ra(a);
		a_idx--;
	}
	while (b_idx > 0)
	{
		ft_rb(b);
		b_idx--;
	}
	ft_pa(a, b);
}
