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

static void	ft_run_sort_2(t_list **a)
{
	if (ft_stack_is_sorted(*a))
	{
		free(a);
		exit(1);
	}
	else
		ft_sa(a);
}

static void	ft_run_sort_3(t_list **stack)
{
	if (ft_stack_is_sorted(stack))
	{
		free(stack);
		exit(1);
	}
	else
	{
		ft_sort_3(stack);
		free(a);
		exit(1);
	}
}

static void	ft_run_sort_4(t_list **a, t_list **b)
{
	b = NULL;
	if (ft_stack_is_sorted(*a))
	{
		free(a);
		free(b);
		exit(1);
	}
	else
	{
		ft_sort_4(a, b);
		free(a);
		free(b);
		exit(1);
	}
}

static void	ft_run_sort_5(t_list **a, t_list **b)
{
	b = NULL;
	if (ft_stack_is_sorted(*a))
	{
		free(a);
		free(b);
		exit(1);
	}
	else
		ft_sort_5(a, b);
}

void	ft_small_sort(t_list **a, t_list **b, int arr_size)
{
	if (arr_size == 2)
	{
		(void)b;
		ft_run_sort_2(a);
	}
	else if (arr_size == 3)
	{
		(void)b;
		ft_run_sort_3(a);
	}
	else if (arr_size == 4)
		ft_run_sort_4(a, b);
	else if (arr_size == 5)
		ft_run_sort_5(a, b);
}
