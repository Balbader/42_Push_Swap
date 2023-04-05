/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a_utils.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:00:10 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/05 09:00:12 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
	find smallest node in 'a' and bring it to the top
*/

void	ft_finalize_a(t_list **a, t_list **b, int incoming, int closest)
{
	int	smallest_idx;

	ft_re_init_index(*a);
	ft_re_init_index(*b);
	incoming = (*b)->data;
	closest = ft_find_closest_a_node_idx(a, incoming);
	ft_re_order_a(a, closest);
	ft_pa(a, b);
	ft_re_init_index(*a);
	smallest_idx = ft_find_smallest_node_idx(a);
	ft_re_order_a(a, smallest_idx);
	ft_re_init_index(*a);
}

// check res:
// if the are elem < 0 take the smallest negative number
// if the are no elem < 0 than the smallest positive number
//

/*
	returns (0) if all res[elements] > 0
*/
int	ft_no_neg(int *res, int a_size)
{
	int	i;

	i = 0;
	while (i < a_size)
	{
		if (res[i] < 0)
			return (1);
		++i;
	}
	return (0);
}

int	ft_get_biggest_pos_res_idx(int *res, t_list **a)
{
	int	*a_idx_arr;
	int	biggest;
	int	biggest_idx;
	int	a_size;
	int	i;

	a_size = ft_get_stack_size(*a);
	a_idx_arr = ft_init_idx_array(a);
	biggest = INT_MIN;
	biggest_idx = 0;
	i = 0;
	while (i < a_size)
	{
		if (res[i] > biggest)
		{
			biggest = res[i];
			biggest_idx = i;
		}
		++i;
	}
	return (biggest_idx);
}
