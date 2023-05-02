/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb_chunks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:09:58 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 15:10:00 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push_chunks_to_b(t_list **a, t_list **b,
							int *pivots_arr, int pivots_count)
{
	int	a_size;
	int	count;
	int	j;

	a_size = ft_get_stack_size(a);
	// printf("a_size / pivots_count: %d\n", a_size / pivots_count);
	// for (int x = 0; x < pivots_count; ++x) {
	// 	printf("pivots_arr[%d]: %d\n", x, pivots_arr[x]);
	// }
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
		if (count == pivots_count)
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
	int	a_size;

	pivots_count = 0;
	a_size = ft_get_stack_size(a);
	pivots_arr = ft_get_pivots(a);
	pivots_count = ft_define_pivots_counts(a_size, pivots_count);
	// printf("pivots_count: %d\n", pivots_count);
	// printf("a_size: %d\n\n", a_size);
	ft_push_chunks_to_b(a, b, pivots_arr, pivots_count);
	free(pivots_arr);
}
