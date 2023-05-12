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

static int	ft_get_incoming_idx(t_list **a, int	big_bro_pos, int idx)
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

static void	ft_reorder_a(t_list **a, int big_bro_pos)
{
	int	a_size;
	int	mid;
	int	i;
	int	idx;

	idx = 0;
	idx = ft_get_incoming_idx(a, big_bro_pos, idx);
	printf("incomin_idx: %d\n", idx);
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

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	*pos_a;
	int	*pos_b;
	int	big_bro_pos;
	int	i;
	int b_size;

	ft_re_init_index(*a);
	ft_re_init_index(*b);
	// ft_print_stack(b, "b");
	// ft_print_stack(a, "a");
	// printf("\n");
	pos_a = NULL;
	pos_b = NULL;
	// printf("big_bro_idx: %d\n", big_bro_idx);
	b_size = ft_get_stack_size(b);
	i = 0;
	while (i < 2)
	{
		printf("---------------------> %d\n", i + 1);
		ft_re_init_index(*a);
		ft_re_init_index(*b);
		b_size = ft_get_stack_size(b);
		pos_a = ft_get_pos_arr(a, pos_a);
		pos_b = ft_get_pos_arr(b, pos_b);
		big_bro_pos = ft_get_big_bro_pos(a, pos_a, pos_b[i]);
		ft_print_stack(b, "b");
		ft_print_stack(a, "a");
		printf("pos_b[%d]: %d\n", i, pos_b[i]);
		printf("big_bro_pos: %d\n", big_bro_pos);
		ft_reorder_a(a, big_bro_pos);
		ft_pa(a, b);
		++i;
	}
	free(pos_a);
	free(pos_b);
}
