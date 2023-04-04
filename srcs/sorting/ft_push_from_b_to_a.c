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

/*
	returns an arr with the result of the equation:
	(a_node_data - (*b)->data) for each b_node
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
		if (res[i] > 0 && res[i] > closest_res)
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
	int	just_pushed;
	int incoming;
	int	closest_a_node_idx;

	ft_pa(a, b);
	just_pushed = (*a)->data;
	i = 0;
	// while ((*b))
	while (i < 11)
	{
		incoming = (*b)->data;
		if (incoming > just_pushed)
		{
			closest_a_node_idx = ft_find_closest_a_node_idx(a, (*b)->data);
			printf("closest_a_node_idx: %d\n", closest_a_node_idx);
		}
		ft_pa(a, b);
		++i;
	}
}
