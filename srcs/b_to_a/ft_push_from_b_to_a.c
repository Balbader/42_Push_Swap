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

static void	ft_reorder_a(t_list **a, int big_bro_idx)
{
	int	a_size;
	int	mid;
	int	i;

	a_size = ft_get_stack_size(a);
	mid = a_size / 2;
	i = 0;
	if (big_bro_idx <= mid)
	{
		while (i < big_bro_idx)
		{
			ft_ra(a);
			++i;
		}
	}
	else
	{
		while (i < (a_size - big_bro_idx))
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
	int	big_bro_idx;
	int	big_bro_pos;

	// ft_re_init_index(*a);
	// ft_re_init_index(*b);
	// ft_print_stack(b, "b");
	// ft_print_stack(a, "a");
	// printf("\n");
	pos_a = NULL;
	pos_b = NULL;
	pos_a = ft_get_pos_arr(a, pos_a);
	pos_b = ft_get_pos_arr(b, pos_b);
	free(cost_a);
	free(cost_b);
	free(pos_a);
	free(pos_b);
}
