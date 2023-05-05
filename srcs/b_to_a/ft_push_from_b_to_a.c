/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:59:42 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/05 13:59:44 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rotate_b_and_pa(t_list **a, t_list **b, int idx, int mid)
{
	int	i;

	if (idx == 1)
		ft_pa(a, b);
	if ( idx > 1 && idx < mid)
	{
		i = 0;
		while (i < idx)
		{
			ft_rb(b);
			++i;
		}
	}
	if (idx > 1 && idx > mid)
	// else if (idx > 1 && idx > mid)
	{
		i = 0;
		while (i < idx + 1)
		{
			ft_rrb(b);
			++i;
		}
	}
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	b_node_to_mv_idx;
	int	b_size;
	int	i;
	int	mid;

	b_size = ft_get_stack_size(b);
	mid = b_size / 2;
	b_node_to_mv_idx = 0;
	b_node_to_mv_idx = ft_find_cheapest_b_node_idx(a, b, b_node_to_mv_idx);
	i = 0;
	while (i < mid)
	{
		printf("\n\n-----------------------------------> %d\n", i + 1);
		ft_re_init_index(*b);
		ft_print_stack(b, "b");
		ft_re_init_index(*a);
		ft_print_stack(a, "a");
		b_node_to_mv_idx = ft_find_cheapest_b_node_idx(a, b, b_node_to_mv_idx);
		b_node_to_mv_idx += 1;
		printf("b_node_to_mv_idx: %d\n", b_node_to_mv_idx);
		ft_rotate_b_and_pa(a, b, b_node_to_mv_idx, mid);
		ft_pa(a, b);
		ft_re_init_index(*a);
		ft_print_stack(a, "a");
		++i;
	}
	// ft_pa(a, b);
}
