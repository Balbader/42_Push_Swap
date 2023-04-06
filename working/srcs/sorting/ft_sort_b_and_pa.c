/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_b_and_pa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:25:53 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/03 11:25:56 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_middle_idx(t_list *stack)
{
	int	*stack_cpy;
	int	stack_size;
	int	mid_elem;

	stack_size = ft_get_stack_size(stack);
	stack_cpy = ft_copy_stack_index(stack);
	mid_elem = stack_cpy[stack_size / 2];
	free(stack_cpy);
	return (mid_elem);
}

static int	ft_nb_rotate(t_list **b, t_list **a, int big_idx, int mid_idx)
{
	int	first_node_idx;
	int	rot;
	int	stack_size;

	stack_size = ft_get_stack_size(*b);
	first_node_idx = (*b)->index;
	if (big_idx == 1)
	{
		ft_pa(a, b);
		return (0);
	}
	else if (big_idx < mid_idx)
		rot = big_idx - first_node_idx;
	else
		rot = (stack_size - big_idx + 1) * -1;
	return (rot);
}

static void	ft_rb_or_rrb(t_list **b, t_list **a, int rotate)
{
	int	i;

	i = 0;
	if (rotate == 0)
		return ;
	else if (rotate > 0)
	{
		while (i < rotate)
		{
			ft_rb(b);
			++i;
		}
		ft_pa(a, b);
	}
	else if (rotate < 0)
	{
		rotate *= -1;
		while (i < rotate)
		{
			ft_rrb(b);
			++i;
		}
		ft_pa(a, b);
	}
}

void	ft_sort_b_and_pa(t_list **a, t_list **b)
{
	int	big_idx;
	int	mid_idx;
	int	rotate;
	int	stack_size;
	int	i;

	ft_pb_chunks(a, b);
	stack_size = ft_get_stack_size(*b);
	i = 0;
	while (i < stack_size)
	{
		big_idx = ft_find_biggest_node_pos(*b);
		mid_idx = ft_middle_idx(*b);
		rotate = ft_nb_rotate(b, a, big_idx, mid_idx);
		ft_rb_or_rrb(b, a, rotate);
		*a = ft_re_init_index(*a);
		*b = ft_re_init_index(*b);
		++i;
	}
}
