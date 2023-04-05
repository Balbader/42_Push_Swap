/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:10:26 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/04 11:10:50 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_re_order_a(t_list **a, int pivot_idx)
{
	int	mid;
	int	a_size;

	a_size = ft_get_stack_size(*a);
	mid = a_size / 2;
	if (pivot_idx <= mid)
		ft_run_on_single(pivot_idx - 1, a, ft_ra);
	if (pivot_idx > mid)
		ft_run_on_single(((a_size - pivot_idx) + 1), a, ft_rra);
}

/*
	if incoming is greater than just_pushed, we need to find the a_node that is
	greater && closest to incoming and bring it to the top of 'a'

	returns an arr with the result of the equation:
	(b_node_data - (*a)->data) for each a_node
*/
static int	*ft_get_greater_arr(t_list **a, int incoming)
{
	t_list	*tmp;
	int		*res_arr;
	int		i;

	res_arr = ft_init_cost_arr(a);
	tmp = NULL;
	tmp = *a;
	i = 0;
	while (tmp)
	{
		res_arr[i] = incoming - tmp->data;
		++i;
		tmp = tmp->next;
	}
	return (free(tmp), res_arr);
}

static int	ft_get_closest_idx(int *res, int a_size, int closest_idx)
{
	int	closest_res;
	int	i;

	closest_res = INT_MIN;
	i = 0;
	while (i < a_size)
	{
		if (res[i] < 0 && res[i] > closest_res)
		{
			closest_res = res[i];
			closest_idx = i;
		}
		++i;
	}
	return (closest_idx);
}

/*
	returns the idx where the "greater_closest" to incoming is located in 'a;
*/
int	ft_find_closest_a_node_idx(t_list **a, int incoming)
{
	int	closest_idx;
	int	*a_idx_arr;
	int	*res;
	int	a_size;

	closest_idx = 0;
	res = ft_get_greater_arr(a, incoming);
	a_idx_arr = ft_init_idx_array(a);
	a_size = ft_get_stack_size(*a);
	if (ft_no_neg(res, a_size) == 0)
		closest_idx = ft_get_biggest_pos_res_idx(res, a);
	closest_idx = ft_get_closest_idx(res, a_size, closest_idx);
	return (free(res), a_idx_arr[closest_idx]);
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	i;
	int	b_size;
	int	incoming;
	int	just_pushed;
	int	closest_a_node_idx;

	b_size = ft_get_stack_size(*b);
	i = 0;
	while (i < b_size - 1)
	{
		just_pushed = (*b)->data;
		ft_pa(a, b);
		ft_re_init_index(*a);
		ft_re_init_index(*b);
		incoming = (*b)->data;
		closest_a_node_idx = ft_find_closest_a_node_idx(a, incoming);
		ft_re_order_a(a, closest_a_node_idx);
		++i;
	}
	ft_finalize_a(a, b, incoming, closest_a_node_idx);
}
