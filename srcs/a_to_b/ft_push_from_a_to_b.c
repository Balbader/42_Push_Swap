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

static void	ft_push_small_half(t_list **a, t_list **b, int a_size)
{
	int	mid;
	int	i;

	mid = a_size / 2;
	i = 0;
	while (i < a_size)
	{
		if ((*a)->pos <= mid)
			ft_pb(a, b);
		else
			ft_ra(a);
		++i;
	}
}

static void	ft_push_big_half(t_list **a, t_list **b, int a_size)
{
	int	first;
	int	second;
	int	third;
	int	mid;
	int	i;

	first = ft_find_first_big_data(a);
	second = ft_find_second_big_data(a);
	third = ft_find_third_big_data(a);
	mid = a_size / 2;
	i = 0;
	while (i < a_size)
	{
		if ((*a)->data == first || (*a)->data == second || (*a)->data == third)
			ft_ra(a);
		else
			ft_pb(a, b);
		++i;
	}
}

void	ft_push_from_a_to_b(t_list **a, t_list **b)
{
	int		a_size;

	a_size = ft_get_stack_size(a);
	ft_assign_pos(a);
	ft_push_small_half(a, b, a_size);
	ft_push_big_half(a, b, a_size);
	ft_sort_3(a);
}
