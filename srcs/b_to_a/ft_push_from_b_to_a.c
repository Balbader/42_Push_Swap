/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:14:08 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/11 13:14:10 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_do_ra(t_list **a, int idx)
{
	int	i;

	i = 0;
	while (i < idx)
	{
		ft_ra(a);
		++i;
	}
}

void	ft_do_rra(t_list **a, int idx, int a_size)
{
	int	i;

	i = 0;
	while (i < (a_size - idx))
	{
		ft_rra(a);
		++i;
	}
}

static void	ft_rotate_a(t_list **a, int	big_bro_idx)
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

static void	ft_reorder_a(t_list **a)
{
	int	smallest_idx;
	int	a_size;
	int	mid;

	ft_re_init_index(*a);
	smallest_idx = ft_find_smallest_node_idx(*a);
	a_size = ft_get_stack_size(a);
	mid = a_size / 2;
	if (smallest_idx <= mid)
		ft_do_ra(a, smallest_idx);
	else if (smallest_idx > mid)
		ft_do_rra(a, smallest_idx, a_size);
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	lil_bro_pos;
	int	big_bro_idx;
	int	big_bro_pos;
	int	b_size;

	lil_bro_pos = 0;
	big_bro_pos = 0;
	big_bro_idx = 0;
	while (*b)
		{
			b_size = ft_get_stack_size(b);
			lil_bro_pos = ft_get_lil_bro_pos(a, b, lil_bro_pos);
			big_bro_idx = ft_get_big_bro_idx(a, lil_bro_pos);
			big_bro_pos = ft_get_big_bro_pos(a, big_bro_idx);
			ft_rotate_a(a, big_bro_idx);
			ft_pa(a, b);
		}
	ft_reorder_a(a);
}
