/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb_chunks_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:10:09 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 15:10:10 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_define_pivots_counts(int stack_size, int pivots_count)
{
	// if (stack_size == 100 || stack_size == 500)
	// 	pivots_count = 10;
	// else if (stack_size > 10)
	if (stack_size > 10)
		pivots_count =  stack_size / 10;
	else if (stack_size > 5 && stack_size <= 10)
		pivots_count = 5;
	return (pivots_count);
}

static int	*ft_fill_in_pivots_idx(int *pivots_idx,
								int pivots_count, int stack_size)
{
	int	idx;
	int	i;
	int	count;

	count = (stack_size / pivots_count);
	pivots_idx = NULL;
	pivots_idx = (int *)malloc(sizeof(int) * pivots_count);
	if (!pivots_idx)
		return (0);
	idx = 0;
	i = 0;
	while (i < pivots_count)
	{
		idx += count;
		pivots_idx[i] = idx - 1;
		++i;
	}
	return (pivots_idx);
}

int	*ft_find_pivots_idx(t_list **a, int *pivots_idx)
{
	int		pivots_count;
	int		stack_size;

	stack_size = ft_get_stack_size(a);
	pivots_count = 0;
	pivots_count = ft_define_pivots_counts(stack_size, pivots_count);
	pivots_idx = ft_fill_in_pivots_idx(pivots_idx, pivots_count, stack_size);
	return (pivots_idx);
}
