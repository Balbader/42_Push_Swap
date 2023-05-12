/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:14:08 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/11 13:14:10 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
void	ft_do_ra(t_list **a, int idx)
{
	int	i;

	i = 0;
	while (i < idx)
	{
		ft_ra(a);
		++i;
	}
}

void	ft_do_rra(t_list **a, int idx, int a_size)
{
	int	i;

	i = 0;
	while (i < (a_size - idx))
	{
		ft_rra(a);
		++i;
	}
}

static void	ft_rotate_a(t_list **a, int big_bro_pos)
{
	int	a_size;
	int	mid;
	int	idx;

	idx = 0;
	idx = ft_get_incoming_idx(a, big_bro_pos, idx);
	a_size = ft_get_stack_size(a);
	mid = a_size / 2;
	if (idx <= mid)
		ft_do_ra(a, idx);
	else if (idx > mid)
		ft_do_rra(a, idx, a_size);
}

static void	ft_free_pos(int *pos_a, int *pos_b)
{
	free(pos_a);
	free(pos_b);
}
*/

/*
	* find cheapest (b_cost + a_cost)
	* Get big_bro_pos based on cheapest
	* ft_rotate_a(a, big_bro_pos);
	* Get lil_bro_pos based on cheapest
	* ft_rotate_b(b, lil_bro_pos);
	* ft_pa
*/
void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	cheapest_lil_bro_idx;
	int	cheapest_lil_bro_pos;

	cheapest_lil_bro_idx = 0;
	cheapest_lil_bro_pos = 0;

	cheapest_lil_bro_idx = ft_get_cheapest_lil_bro_idx(b, cheapest_lil_bro_idx);
	cheapest_lil_bro_pos = ft_get_cheapest_lil_bro_pos(b, cheapest_lil_bro_pos);
	printf("cheapest_lil_bro_idx: [%d]\n", cheapest_lil_bro_idx);
	printf("cheapest_lil_bro_pos: (%d)\n", cheapest_lil_bro_pos);
	printf("\n");

	int	*tot_b_cost_arr;

	tot_b_cost_arr = NULL;
	tot_b_cost_arr = ft_get_final_b_cost_arr(a, b, tot_b_cost_arr);
}

/*
void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	*pos_a;
	int	*pos_b;
	int	big_bro_pos;
	int	i;
	int	b_size;

	pos_a = NULL;
	pos_b = NULL;
	b_size = ft_get_stack_size(b);
	i = 0;
	while (i < b_size)
	{
		ft_re_init_stacks_index(a, b);
		pos_a = ft_get_pos_arr(a, pos_a);
		pos_b = ft_get_pos_arr(b, pos_b);
		big_bro_pos = ft_get_big_bro_pos(a, pos_a, pos_b[0]);
		ft_rotate_a(a, big_bro_pos);
		ft_pa(a, b);
		ft_free_pos(pos_a, pos_b);
		++i;
	}
	ft_reorder_a(a);
}
*/
