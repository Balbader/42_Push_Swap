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
		ft_run_on_single((a_cost * -1), a, &ft_rra);
}

void	ft_do_b_cost(int b_cost, t_list **b)
{
	if (b_cost > 0)
		ft_run_on_single(b_cost, b, &ft_rb);
	if (b_cost < 0)
		ft_run_on_single((b_cost * -1), b, &ft_rrb);
}

void	ft_opt_pos(t_list **a, t_list **b, int a_cost, int b_cost)
{
	if (a_cost == b_cost)
	{
		ft_run_on_both(b_cost, a, b, &ft_rr);
		ft_pb(a, b);
	}
	if (a_cost > b_cost)
	{
		ft_run_on_both(b_cost, a, b, &ft_rr);
		ft_run_on_single((a_cost - b_cost), a, &ft_ra);
		ft_pb(a, b);
	}
	if (b_cost > a_cost)
	{
		ft_run_on_both(a_cost, a, b, &ft_rr);
		ft_run_on_single((b_cost - a_cost), b, &ft_rb);
		ft_pb(a, b);
	}
}

void	ft_opt_neg(t_list **a, t_list **b, int a_cost, int b_cost)
{
	if (a_cost == b_cost)
	{
		ft_run_on_both((b_cost * -1), a, b, &ft_rrr);
		ft_pb(a, b);
	}
	if (a_cost < b_cost)
	{
		ft_run_on_both((b_cost * -1), a, b, &ft_rrr);
		ft_run_on_single((a_cost * -1), a, &ft_rra);
		ft_pb(a, b);
	}
	if (b_cost < a_cost)
	{
		ft_run_on_both((a_cost * -1), a, b, &ft_rrr);
		ft_run_on_single((a_cost - b_cost), b, &ft_rrb);
		ft_pb(a, b);
	}
}
