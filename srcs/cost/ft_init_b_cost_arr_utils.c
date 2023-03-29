/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_b_cost_arr_utils.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:42:28 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/25 18:42:29 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
	returns an arr with the result of the equation:
	(a_node_data - (*b)->data) for each b_node
*/
static int	*ft_get_lesser_arr(t_list **b, int incoming)
{
	t_list	*tmp;
	int		*res_arr;
	int		res;
	int		i;

	res_arr = ft_init_cost_arr(b);
	res = 0;
	tmp = NULL;
	tmp = *b;
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
int	ft_find_closest_node_idx(t_list **b, int incoming)
{
	int	*b_idx_arr;
	int	*res;
	int	closest_res;
	int	closest_idx;
	int	i;

	closest_idx = 0;
	closest_res = INT_MAX;
	res = ft_get_lesser_arr(b, incoming);
	b_idx_arr = ft_init_idx_array(b);
	i = 0;
	while (res[i])
	{
		if (res[i] > 0 && res[i] < closest_res)
		{
			closest_res = res[i];
			closest_idx = i;
		}
		++i;
	}
	return (free(res), b_idx_arr[closest_idx]);
}
