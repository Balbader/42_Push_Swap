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

#include "push_swap.c"

static int	*ft_get_lesser_arr(t_list **b, int a_node_data)
{
	t_list	*tmp;
	int		*res;
	int		i;

	res = ft_init_cost_arr(b);
	tmp = NULL;
	tmp = *b;
	i = 0;
	while (tmp)
	{
		res[i] = a_node_data - tmp->data;
		++i;
		tmp = tmp->next;
	}
	return (free(tmp), res);
}


static int	ft_get_lesser_node_idx(t_list **b, int *res)
{
	int	*b_idx_arr;
	int	closest_res;
	int	closest_idx;
	int	i;

	closest_idx = 0;
	closest_res = INT_MAX;
	b_idx_arr = ft_init_idx_arrayy(b);
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


static int	ft_find_closest_node_idx(int b_idx_arr, t_list **b)
{
	
}
