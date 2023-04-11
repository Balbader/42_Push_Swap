/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:13:30 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/21 13:13:32 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push_back_to_a(t_list **a, t_list **b)
{
	int		i;
	int		stack_size;

	stack_size = ft_get_stack_size(*b);
	i = 0;
	while (i < stack_size)
	{
		ft_pa(a, b);
		++i;
	}
}

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

static int	ft_nb_rotate(t_list **a, t_list **b, int sml_idx,
					int mid_idx)
{
	int	first_node_idx;
	int	rot;
	int	stack_size;

	stack_size = ft_get_stack_size(*a);
	first_node_idx = (*a)->index;
	if (sml_idx == 1)
	{
		ft_pb(a, b);
		return (0);
	}
	else if (sml_idx < mid_idx)
		rot = sml_idx - first_node_idx;
	else
		rot = (stack_size - sml_idx + 1) * -1;
	return (rot);
}

static void	ft_ra_or_rra(t_list **a, t_list **b, int rotate)
{
	int	i;

	i = 0;
	if (rotate == 0)
		return ;
	else if (rotate > 0)
	{
		while (i < rotate)
		{
			ft_ra(a);
			++i;
		}
		ft_pb(a, b);
	}
	else if (rotate < 0)
	{
		rotate *= -1;
		while (i < rotate)
		{
			ft_rra(a);
			++i;
		}
		ft_pb(a, b);
	}
}

void	ft_sort_stack(t_list **a, t_list **b)
{
	int	sml_idx;
	int	mid_idx;
	int	rotate;
	int	stack_size;
	int	i;

	stack_size = ft_get_stack_size(*a);
	mid_idx = ft_middle_idx(*a);
	i = 0;
	while (i < stack_size)
	{
		sml_idx = ft_find_smallest_node_pos(*a);
		mid_idx = ft_middle_idx(*a);
		rotate = ft_nb_rotate(a, b, sml_idx, mid_idx);
		ft_ra_or_rra(a, b, rotate);
		*a = ft_re_init_index(*a);
		*b = ft_re_init_index(*b);
		++i;
	}
	ft_push_back_to_a(a, b);
}
