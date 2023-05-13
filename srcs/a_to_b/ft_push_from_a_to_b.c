/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_a_to_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:30:35 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/03 11:30:36 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct s_data
{
	int	a_size;
	int	pivot;
	int	count;
	int	first;
	int	second;
	int	third;
	int	i;
}				t_data;

/*
 * Returns the reference nbr that will serve to define the chunks size
 * to create in b
*/
static int	ft_define_pivot(t_list **a, int pivot)
{
	int	a_size;

	a_size = ft_get_stack_size(a);
	if (a_size == 100 || a_size == 500)
		pivot = 10;
	else if (a_size > 5 && a_size < 100)
		pivot = a_size / 5;
	else if (a_size > 100)
		pivot = a_size / 10;
	return (pivot);
}

static void	ft_push_chunks_to_b(t_list **a, t_list **b)
{
	t_data	data;

	data.a_size = ft_get_stack_size(a);
	data.first = ft_find_first_big_data(a);
	data.second = ft_find_second_big_data(a);
	data.third = ft_find_third_big_data(a);
	data.pivot = 0;
	data.pivot = ft_define_pivot(a, data.pivot);
	printf("pivot: %d\n", data.pivot);
	data.count = 0;
	data.i = 0;
	while (data.i < data.a_size)
	{
		if (data.count == data.pivot)
		{
			data.pivot += data.pivot;
			printf("count: %d\n", data.count);
			printf("pivot: %d\n", data.pivot);
		}
		if ((*a)->data == data.first ||
				(*a)->data == data.second || (*a)->data == data.third)
			ft_ra(a);
		if ((*a)->pos <= data.pivot)
		{
			ft_pb(a, b);
			++data.count;
		}
		ft_ra(a);
		--data.a_size;
		// ++data.i;
	}
}

/*
static void	ft_push_small_half(t_list **a, t_list **b, int a_size)
{
	int	mid;
	int	i;

	mid = a_size / 2;
	i = 0;
	while (i < a_size)
	{
		if ((*a)->pos <= mid)
			ft_pb(a, b);
		else
			ft_ra(a);
		++i;
	}
}

static void	ft_push_big_half(t_list **a, t_list **b, int a_size)
{
	int	first;
	int	second;
	int	third;
	int	i;

	first = ft_find_first_big_data(a);
	second = ft_find_second_big_data(a);
	third = ft_find_third_big_data(a);
	i = 0;
	while (i < a_size)
	{
		if ((*a)->data == first || (*a)->data == second || (*a)->data == third)
			ft_ra(a);
		else
			ft_pb(a, b);
		++i;
	}
}
*/

void	ft_push_from_a_to_b(t_list **a, t_list **b)
{
	int		a_size;

	a_size = ft_get_stack_size(a);
	ft_assign_pos(a);
	ft_push_chunks_to_b(a, b);
	// ft_push_small_half(a, b, a_size);
	// ft_push_big_half(a, b, a_size);
	// ft_sort_3(a);
}
