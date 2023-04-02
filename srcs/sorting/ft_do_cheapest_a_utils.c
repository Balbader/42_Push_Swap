/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_cheapest_a_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:27:37 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/02 15:27:41 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_do_a_cost(int a_cost, t_list **a)
{
	if (a_cost > 0)
		ft_run_on_single(a_cost, a, &ft_ra);
	if (a_cost < 0)
		ft_run_on_single(a_cost, a, &ft_rra);
}

void	ft_do_b_cost(int b_cost, t_list **b)
{
	if (b_cost > 0)
		ft_run_on_single(b_cost, b, &ft_rb);
	if (b_cost < 0)
		ft_run_on_single(b_cost, b, &ft_rrb);
}
