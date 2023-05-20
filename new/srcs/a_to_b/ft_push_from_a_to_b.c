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
	int		first;
	int		second;
	int		third;
	int		a_size;
	int		i;
	int		mid;
	int		top_pivot;
	int		btm_pivot;
	int		pivot;
}				t_data;

static void	ft_init_data(t_list *a, t_data *data, int a_size)
{
	data->first = ft_find_first_big_data(a);
	data->second = ft_find_second_big_data(a);
	data->third = ft_find_third_big_data(a);
	data->mid = a_size / 2;
	data->pivot = ft_define_pivot(&a, data->pivot);
	data->top_pivot = data->mid + data->pivot;
	data->btm_pivot = data->mid - data->pivot;
}

static void	ft_push_b_and_check_pos(int mid, t_list **a, t_list **b)
{
	ft_pb(a, b);
	if ((*b)->pos < mid)
		ft_rb(b);
}

static void	ft_push_chunks_to_b(t_list **a, t_list **b, int a_size)
{
	t_data	data;

	ft_init_data(*a, &data, a_size);
	while ((*a) && a_size > 3)
	{
		if (((*a)->pos <= data.top_pivot && (*a)->pos >= data.mid)
			&& (!((*a)->data == data.first || (*a)->data == data.second
					|| (*a)->data == data.third)))
			ft_push_b_and_check_pos(data.mid, a, b);
		else if (((*a)->pos >= data.btm_pivot && (*a)->pos < data.mid)
			&& (!((*a)->data == data.first || (*a)->data == data.second
					|| (*a)->data == data.third)))
			ft_push_b_and_check_pos(data.mid, a, b);
		ft_ra(a);
		--a_size;
		if (a_size == 3)
		{
			a_size = ft_get_stack_size(a);
			data.top_pivot += data.pivot;
			data.btm_pivot -= data.pivot;

		}
	}
}

void	ft_push_from_a_to_b(t_list **a, t_list **b)
{
	int		a_size;

	a_size = ft_get_stack_size(a);
	ft_assign_pos(a);
	ft_push_chunks_to_b(a, b, a_size);
	ft_sort_3(a);
}