/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_utils_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:01:47 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/11 13:01:48 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Returns the idx of the a_node to bring to top of a_stack based on incoming
 * b_node_pos that is greater and closest to incoming b_node_pos
*/
/*
int	ft_get_big_bro_idx(t_list **a, int *a_pos, int incoming_pos)
{
	t_list	*tmp;
	int		big_bro_idx;
	int		closest;
	int		a_size;
	int		i;

	tmp = (*a);
	a_size = ft_get_stack_size(a);
	closest = INT_MAX;
	big_bro_idx = tmp->index;
	i = 0;
	while (i < a_size)
	{
		if (a_pos[i] > incoming_pos && a_pos[i] <= closest)
		{
			closest = a_pos[i];
			big_bro_idx = tmp->index;
		}
		tmp = tmp->next;
		++i;
	}
	ft_free_stack(&tmp);
	return (big_bro_idx);
}
*/

/*
 * Returns the pos of the a_node to bring to top of a_stack based on incoming
 * b_node_pos that is greater and closest to incoming b_node_pos
*/
/*
int	ft_get_big_bro_pos(t_list **a, int *a_pos, int incoming_pos)
{
	int	big_bro_pos;
	int	a_size;
	int	i;

	a_size = ft_get_stack_size(a);
	big_bro_pos = INT_MAX;
	i = 0;
	while (i < a_size)
	{
		if (a_pos[i] > incoming_pos && a_pos[i] <= big_bro_pos)
			big_bro_pos = a_pos[i];
		++i;
	}
	return (big_bro_pos);
}
*/
/*
 * Returns the idx of the cheapest b_node to bring to top of b_stack
*/
/*
int	ft_get_cheapest_lil_bro_idx(t_list **b, int lil_bro_idx)
{
	int	*b_cost_arr;
	int	b_size;
	int	cheapest;
	int	i;

	ft_re_init_index(*b);
	b_size = ft_get_stack_size(b);
	b_cost_arr = NULL;
	b_cost_arr = ft_get_cost_arr(b, b_cost_arr);
	cheapest = INT_MAX;
	i = 0;
	while (i < b_size)
	{
		if (b_cost_arr[i] < 0)
			b_cost_arr[i] *= -1;
		if (b_cost_arr[i] < cheapest)
		{
			cheapest = b_cost_arr[i];
			lil_bro_idx = i;
		}
		++i;
	}
	return (free(b_cost_arr), lil_bro_idx);
}
*/
/*
 * Returns the pos of the cheapest b_node to bring to top of b_stack
*/
/*
int	ft_get_cheapest_lil_bro_pos(t_list **b, int lil_bro_pos)
{
	int	*b_pos_arr;
	int	b_size;
	int	lil_bro_idx;
	int	i;

	ft_re_init_index(*b);
	b_size = ft_get_stack_size(b);
	lil_bro_idx = 0;
	lil_bro_idx = ft_get_cheapest_lil_bro_idx(b, lil_bro_idx);
	b_pos_arr = NULL;
	b_pos_arr = ft_get_pos_arr(b, b_pos_arr);
	i = 0;
	while (i < b_size)
	{
		if (i == lil_bro_idx)
			lil_bro_pos = b_pos_arr[i];
		++i;
	}
	return (free(b_pos_arr), lil_bro_pos);
}
*/
