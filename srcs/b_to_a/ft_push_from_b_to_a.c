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

static int	ft_get_incoming_idx(t_list **a, int big_bro_pos, int idx)
{
	t_list	*tmp;
	int		a_size;
	int		i;

	tmp = (*a);
	a_size = ft_get_stack_size(a);
	i = 0;
	while (i < a_size)
	{
		if (tmp->pos == big_bro_pos)
			idx = tmp->index;
		tmp = tmp->next;
		++i;
	}
	ft_free_stack(&tmp);
	return (idx);
}

static void	ft_rotate_a(t_list **a, int big_bro_pos)
{
	int	a_size;
	int	mid;
	int	i;
	int	idx;

	idx = 0;
	idx = ft_get_incoming_idx(a, big_bro_pos, idx);
	a_size = ft_get_stack_size(a);
	mid = a_size / 2;
	if (idx <= mid)
	{
		i = 0;
		while (i < idx)
		{
			ft_ra(a);
			++i;
		}
	}
	else if (idx > mid)
	{
		i = 0;
		while (i < (a_size - idx))
		{
			ft_rra(a);
			++i;
		}
	}
}

static void	ft_free_pos(int *pos_a, int *pos_b)
{
	free(pos_a);
	free(pos_b);
}

static void	ft_re_init_stacks_index(t_list **a, t_list **b)
{
	ft_re_init_index(*a);
	ft_re_init_index(*b);
}

void	ft_push_from_b_to_a(t_list **a, t_list **b, int ac)
{
	int	*pos_a;
	int	*pos_b;
	int	big_bro_pos;
	int	i;

	pos_a = NULL;
	pos_b = NULL;
	i = 0;
	while (i < ac - 1)
	{
		ft_re_init_stacks_index(a, b);
		pos_a = ft_get_pos_arr(a, pos_a);
		pos_b = ft_get_pos_arr(b, pos_b);
		big_bro_pos = ft_get_big_bro_pos(a, pos_a, pos_b[0]);
		ft_rotate_a(a, big_bro_pos);
		ft_pa(a, b);
		ft_free_pos(pos_a, pos_b);
		++i;
	}
}
