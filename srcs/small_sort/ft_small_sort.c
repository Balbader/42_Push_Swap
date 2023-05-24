/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:16:32 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 11:17:15 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_run_sort_2(t_list *a)
{
	if (ft_small_stack_is_sorted(a) == 0)
	{
		ft_free_stack(&a);
		exit(1);
	}
	else
	{
		ft_sa(&a);
		ft_free_stack(&a);
		exit(1);
	}
}

static void	ft_run_sort_3(t_list *a)
{
	if (ft_small_stack_is_sorted(a) == 0)
	{
		ft_free_stack(&a);
		exit(1);
	}
	else
	{
		a = ft_sort_3(a);
		ft_free_stack(&a);
		exit(1);
	}
}

static void	ft_run_sort_4(t_list *a, t_list *b)
{
	if (ft_small_stack_is_sorted(a) == 0)
	{
		ft_free_stack(&a);
		ft_free_stack(&b);
		exit(1);
	}
	else
	{
		ft_sort_4(a, b);
		ft_free_stack(&a);
		ft_free_stack(&b);
		exit(1);
	}
}

static void	ft_run_sort_5(t_list *a, t_list *b)
{
	if (ft_small_stack_is_sorted(a) == 0)
	{
		ft_free_stack(&a);
		ft_free_stack(&b);
		exit(1);
	}
	else
	{
		ft_sort_5(a, b);
		ft_free_stack(&a);
		ft_free_stack(&b);
		exit(1);
	}
}

void	ft_small_sort(t_list *a, t_list *b, int a_size)
{
	if (a_size == 2)
	{
		(void)b;
		ft_run_sort_2(a);
	}
	else if (a_size == 3)
	{
		(void)b;
		ft_run_sort_3(a);
	}
	else if (a_size == 4)
		ft_run_sort_4(a, b);
	else if (a_size == 5)
		ft_run_sort_5(a, b);
}
