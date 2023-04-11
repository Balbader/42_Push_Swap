/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb_chunks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:13:07 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/27 15:13:12 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push_chunks_to_b(t_list **a, t_list **b,
							int *pivots_arr, int pivots_count)
{
	int	stack_size;
	int	count;
	int	j;

	stack_size = ft_get_stack_size(*a);
	count = 0;
	j = 0;
	while (*a)
	{
		if ((*a)->data <= pivots_arr[j])
		{
			++count;
			ft_pb(a, b);
		}
		else
			ft_ra(a);
		if (count == stack_size / pivots_count)
		{
			++j;
			count = 0;
		}
		if (j > pivots_count)
			break ;
	}
}

void	ft_pb_chunks(t_list **a, t_list **b)
{
	int	*pivots_arr;
	int	pivots_count;
	int	stack_size;

	stack_size = ft_get_stack_size(*a);
	pivots_arr = ft_get_pivots(a);
	pivots_count = 10;
	// pivots_count = ft_define_pivots_count(pivots_count, stack_size);
	ft_push_chunks_to_b(a, b, pivots_arr, pivots_count);
	free(pivots_arr);
	ft_re_init_index(*b);
}
