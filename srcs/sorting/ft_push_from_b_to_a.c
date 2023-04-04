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

static void	ft_re_order_a(t_list **a, int pivot_idx)
{
	int	mid;
	int	a_size;

	a_size = ft_get_stack_size(*a);
	mid = a_size / 2;
	if (pivot_idx <= mid)
		ft_run_on_single(pivot_idx - 1, a, ft_ra);
	if (pivot_idx > mid)
		ft_run_on_single((a_size - pivot_idx) + 1, a, ft_rra);
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
	int		res;
	int		i;

	res_arr = ft_init_cost_arr(a);
	res = 0;
	tmp = NULL;
	tmp = *a;
	i = 0;
	while (tmp)
	{
		res = incoming - tmp->data;
		res_arr[i] = res;
		++i;
		tmp = tmp->next;
	}
	return (free(tmp), res_arr);
}

/*
	returns the idx where the "lesser_closest" to incoming is located in 'b'
*/
int	ft_find_closest_a_node_idx(t_list **a, int incoming)
{
	int	*a_idx_arr;
	int	*res;
	int	closest_res;
	int	closest_idx;
	int	i;

	closest_idx = 0;
	closest_res = INT_MIN;
	res = ft_get_greater_arr(a, incoming);
	a_idx_arr = ft_init_idx_array(a);
	i = 0;
	while (res[i])
	{
		if (res[i] < 0 && res[i] > closest_res)
		{
			closest_res = res[i];
			closest_idx = i;
		}
		++i;
	}
	return (free(res), a_idx_arr[closest_idx]);
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	i;
	int	b_size;
	int	just_pushed;
	int incoming;
	int	closest_a_node_idx;

	ft_pa(a, b);
	b_size = ft_get_stack_size(*b);
	incoming = (*b)->data;
	i = 0;
	// while (i < b_size)
	// while (*b)
	while (i < b_size - 1)
	{
		ft_re_init_index(*a);
		ft_re_init_index(*b);
		just_pushed = (*a)->data;
		if (incoming < just_pushed || incoming > just_pushed)
		{
			closest_a_node_idx = ft_find_closest_a_node_idx(a, incoming);
			ft_re_order_a(a, closest_a_node_idx);
		}
		ft_pa(a, b);
		incoming = (*b)->data;
		++i;
	}
}
