/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a_utils.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:15:53 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/12 09:15:55 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_do_rb(t_list **b, int idx)
{
	int	i;

	i = 0;
	while (i < idx)
	{
		ft_rb(b);
		++i;
	}
}

void	ft_do_rrb(t_list **b, int idx, int b_size)
{
	int	i;

	i = 0;
	while (i < (b_size - idx))
	{
		ft_rrb(b);
		++i;
	}
}

/* Rotate b until b_node pos on top */
void	ft_rotate_b(t_list **b, int lil_bro_pos)
{
	int	lil_bro_idx;
	int	b_size;
	int	mid;

	ft_re_init_index(*b);
	lil_bro_idx = ft_find_lil_idx(*b, lil_bro_pos);
	b_size = ft_get_stack_size(b);
	mid = b_size / 2;
	if (lil_bro_idx <= mid)
		ft_do_rb(b, lil_bro_idx);
	else if (lil_bro_idx > mid)
		ft_do_rrb(b, lil_bro_idx, b_size);
}

void	ft_check_push(t_list **a)
{
	if ((*a)->pos > (*a)->next->pos)
		ft_sa(a);
}

void	ft_reorder_a(t_list **a)
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
