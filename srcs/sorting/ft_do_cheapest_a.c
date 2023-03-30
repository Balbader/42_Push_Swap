/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_cheapest_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 03:02:41 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/30 03:02:43 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_run_on_both(int round, t_list **a, t_list **b,
						void (*f)(t_list **, t_list **))
{
	int	i;

	if (!a || !b || !f)
		return ;
	i = 0;
	while (i < round)
	{
		(f)(a, b);
		++i;
	}
}

static void	ft_run_on_single(int round, t_list **stack, void (*f)(t_list **))
{
	int	i;

	if (!stack || !f)
		return ;
	i = 0;
	while (i < round)
	{
		(f)(stack);
		++i;
	}
}

static void	ft_run_opt_instructions(t_list **a, t_list **b, int a_cost, int b_cost)
{
	int	*instructions;

	instructions = NULL;
	instructions = ft_optimized_instructions(a_cost, b_cost);
	if (a_cost > b_cost)
	{
		ft_run_on_both(b_cost, a, b, &ft_rr(a, b));
		ft_run_on_single((a_cost - b_cost), a, &ft_ra(a));
		ft_run_on_both(1, a, b, &ft_pb(a, b));
	}
	if (b_cost > a_cost)
	{
		ft_run_on_both(a_cost, a, b, &ft_rr(a, b));
		ft_run_on_single((b_cost - a_cost), a, &ft_rb(b));
		ft_run_on_both(1, a, b, &ft_pb(a, b));
	}
}

static void	ft_run_reg_instructions(t_list **a, t_list **b, int a_cost, int b_cost)
{
	int	*instructions;

	instructions = NULL;
	instructions = ft_reg_instructions(a_cost, b_cost);
	if (a_cost < b_cost)
	{
		ft_run_on_both(a_cost, a, b, &ft_rrr(a, b));
		ft_run_on_single((b_cost - a_cost), a, &ft_rrb(b));
		ft_run_on_both(1, a, b, &ft_pb(a, b));
	}
	if (b_cost < a_cost)
	{
		ft_run_on_both(b_cost, a, b, &ft_rrr(a, b));
		ft_run_on_single((a_cost - b_cost), a, &ft_rra(a));
		ft_run_on_both(1, a, b, &ft_pb(a, b));
	}
}

/*
 * 1. check if cost is optimized or not
 * 2. if yes : optimized instructions
 * 3. if no : reg instructions
*/
void	ft_do_cheapest_a(t_list **a, t_list **b, int a_cost, int b_cost)
{
	if (ft_check_costs(a_cost, b_cost) == 1)
		ft_run_opt_instructions(a, b, a_cost, b_cost);
	if (ft_check_costs(a_cost, b_cost) == 0)
		ft_run_reg_instructions(a, b, a_cost, b_cost);
}
