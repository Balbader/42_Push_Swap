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

static void	ft_rotate_a(t_list **a, int big_bro_idx)
{
	int	a_size;
	int	mid;

	a_size = ft_get_stack_size(a);
	mid = a_size / 2;
	if (big_bro_idx <= mid)
		ft_do_ra(a, big_bro_idx);
	else if (big_bro_idx > mid)
		ft_do_rra(a, big_bro_idx, a_size);
}


static void	ft_push_node_to_a_and_check_next(t_list **a, t_list **b)
{
	int	*big_3_idx;
	int	*big_3_pos;
	int	big_bro_idx;
	int	i;
	int	j;

	big_bro_idx = 0;
	j = 0;
	// while (*b)
	while (j < 1)
	{
		ft_re_init_index(*a);
		ft_re_init_index(*b);
		big_3_idx = ft_get_big_3_idx(b);
		big_3_pos = ft_get_big_3_pos(b, big_3_idx);
		i = 0;
		while (i < 3)
		{
			printf("--------------------> %d\n", i + 1);
			for (int i = 0; i < 3; ++i) {
				printf("big_3_pos[%d]: %d\n", i, big_3_pos[i]);
			}
			printf("\n");
			printf("big_3_pos[%d]: %d\n", i, big_3_pos[i]);
			big_bro_idx = ft_get_big_bro_idx(a, big_3_pos[i]);
			printf("big_bro_idx: %d\n", big_bro_idx);

			ft_rotate_a(a, big_bro_idx);
			ft_pa(a, b);

			ft_re_init_index(*a);
			ft_print_stack(a, "a");
			++i;
		}
		++j;
	}
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	ft_push_node_to_a_and_check_next(a, b);
}

/*
static void	ft_reorder_a(t_list **a)
{
	int	smallest_idx;
	int	a_size;
	int	mid;

	ft_re_init_index(*a);
	smallest_idx = ft_find_smallest_node_idx(*a);
	a_size = ft_get_stack_size(a);
	mid = a_size / 2;
	if (smallest_idx <= mid)
		ft_do_ra(a, smallest_idx);
	else if (smallest_idx > mid)
		ft_do_rra(a, smallest_idx, a_size);
}
*/
// void	ft_push_from_b_to_a(t_list **a, t_list **b)
// {
// 	int	lil_bro_pos;
// 	int	big_bro_idx;

// 	lil_bro_pos = 0;
// 	big_bro_idx = 0;
// 	while (*b)
// 	{
// 		lil_bro_pos = ft_get_lil_bro_pos(a, b, lil_bro_pos);
// 		big_bro_idx = ft_get_big_bro_idx(a, lil_bro_pos);
// 		ft_rotate_a(a, big_bro_idx);
// 		ft_pa(a, b);
// 	}
// 	ft_reorder_a(a);
// }
