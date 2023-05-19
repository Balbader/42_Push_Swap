/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a_utils_2.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 07:14:45 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/19 07:14:46 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_do_ra(t_list **a, int big_bro_idx)
{
	int	i;

	i = 0;
	while (i < big_bro_idx)
	{
		ft_ra(a);
		++i;
	}
}

void	ft_do_rra(t_list **a, int big_bro_idx, int a_size)
{
	int	i;

	i = 0;
	while (i < (a_size - big_bro_idx))
	{
		ft_rra(a);
		++i;
	}
}

void	ft_rotate_a(t_list **a, int big_bro_idx)
{
	int	a_size;
	int	mid;

	a_size = ft_get_stack_size(a);
	mid = a_size / 2;
	if (big_bro_idx <= mid)
		ft_do_ra(a, big_bro_idx);
	else if (big_bro_idx > mid)
		ft_do_rra(a, big_bro_idx, a_size);
}

void	ft_check_a_receiver( t_list **a, int big_bro_idx)
{
	if ((*a)->index == big_bro_idx)
		return ;
	else
	{
		ft_rotate_a(a, big_bro_idx);
		return ;
	}
}
