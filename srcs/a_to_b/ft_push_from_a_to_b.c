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
	int	first;
	int	second;
	int	third;
	int	i;
	int	mid;
	int	top_pivot;
	int	btm_pivot;
	int	top_count;
	int	btm_count;
	int	pivot;
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

static void	ft_get_big_trio(t_list *a, t_data *data)
{
	data->first = ft_find_first_big_data(a);
	data->second = ft_find_second_big_data(a);
	data->third = ft_find_third_big_data(a);
}

static void	ft_push_chunks_to_b(t_list **a, t_list **b, int a_size)
{
	t_data	data;

	ft_get_big_trio(*a, &data);
	data.mid = a_size / 2;
	data.pivot = ft_define_pivot(a, data.pivot);
	data.top_pivot = data.mid + data.pivot;
	data.btm_pivot = data.mid - data.pivot;
	data.top_count = 0;
	data.btm_count = 0;
	while ((*a) && a_size > 3)
	{
		if ((*a)->data == data.first
			|| (*a)->data == data.second || (*a)->data == data.third)
			ft_ra(a);
		else
		{
			if (data.top_count == data.top_pivot)
				data.top_pivot += data.pivot;
			else if (data.btm_count == data.btm_pivot)
				data.btm_pivot -= data.pivot;
			if ((*a)->pos <= data.top_pivot && (*a)->pos >= data.mid)
			{
				ft_pb(a, b);
				--a_size;
				++data.top_count;
			}
			else if ((*a)->pos >= data.btm_pivot && (*a)->pos <= data.mid)
			{
				ft_pb(a, b);
				--a_size;
				++data.btm_count;
			}
			ft_ra(a);
		}
	}
}

// static void	ft_push_chunks_to_b(t_list **a, t_list **b, int a_size)
// {
// 	t_data	data;

// 	ft_get_big_trio(*a, &data);
// 	data.pivot = ft_define_pivot(a, data.pivot);
// 	data.new_pivot = data.pivot;
// 	data.count = 0;
// 	while ((*a) && a_size > 3)
// 	{
// 		if ((*a)->data == data.first
// 			|| (*a)->data == data.second || (*a)->data == data.third)
// 			ft_ra(a);
// 		else
// 		{
// 			if (data.count == data.new_pivot)
// 				data.new_pivot += data.pivot;
// 			if ((*a)->pos <= data.new_pivot)
// 			{
// 				ft_pb(a, b);
// 				--a_size;
// 				++data.count;
// 			}
// 			ft_ra(a);
// 		}
// 	}
// }

void	ft_push_from_a_to_b(t_list **a, t_list **b)
{
	int		a_size;

	a_size = ft_get_stack_size(a);
	ft_assign_pos(a);
	ft_push_chunks_to_b(a, b, a_size);
	ft_sort_3(a);
}
