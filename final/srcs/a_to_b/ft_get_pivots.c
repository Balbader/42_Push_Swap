/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_pivots.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:30:37 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 15:30:40 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*ft_sort_arr(int *arr, int arr_size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < arr_size)
	{
		j = i + 1;
		while (j < arr_size)
		{
			if (arr[j] < arr[i])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			++j;
		}
		++i;
	}
	return (arr);
}

static int	*ft_create_a_cpy(int *a_cpy, t_list **a, int a_size)
{
	a_cpy = ft_copy_stack_to_arr(a, a_size, a_cpy);
	a_cpy = ft_sort_arr(a_cpy, a_size);
	return (a_cpy);
}

static int	*ft_define_pivot_arr(t_list **a, int *pivots_idx, int pivots_count)
{
	int		*a_cpy;
	int		*pivots_arr;
	int		a_size;
	int		i;
	int		j;

	a_size = ft_get_stack_size(a);
	a_cpy = NULL;
	a_cpy = ft_create_a_cpy(a_cpy, a, a_size);
	pivots_arr = (int *)malloc(sizeof(int) * pivots_count);
	if (!pivots_arr)
		return (0);
	j = 0;
	i = 0;
	while (i < a_size)
	{
		if (i == pivots_idx[j])
		{
			pivots_arr[j] = a_cpy[i];
			++j;
		}
		++i;
	}
	free(a_cpy);
	return (pivots_arr);
}

int	*ft_get_pivots(t_list **a)
{
	int	*pivots_idx;
	int	pivots_count;
	int	*pivots_arr;
	// int	stack_size;

	// stack_size = ft_get_stack_size(a);
	pivots_count = 10;
	// pivots_count = ft_define_pivots_count(pivots_count, stack_size);
	pivots_idx = NULL;
	pivots_idx = ft_find_pivots_idx(a, pivots_idx);
	pivots_arr = NULL;
	pivots_arr = ft_define_pivot_arr(a, pivots_idx, pivots_count);
	free(pivots_idx);
	return (pivots_arr);
}
