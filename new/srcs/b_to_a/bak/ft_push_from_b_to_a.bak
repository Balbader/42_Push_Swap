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

// void	ft_do_ra(t_list **a, int idx)
// {
// 	int	i;

// 	i = 0;
// 	while (i < idx)
// 	{
// 		ft_ra(a);
// 		++i;
// 	}
// }

// void	ft_do_rra(t_list **a, int idx, int a_size)
// {
// 	int	i;

// 	i = 0;
// 	while (i < (a_size - idx))
// 	{
// 		ft_rra(a);
// 		++i;
// 	}
// }

// void	ft_rotate_a(t_list **a, int big_bro_idx)
// {
// 	int	a_size;
// 	int	mid;

// 	a_size = ft_get_stack_size(a);
// 	mid = a_size / 2;
// 	if (big_bro_idx <= mid)
// 		ft_do_ra(a, big_bro_idx);
// 	else if (big_bro_idx > mid)
// 		ft_do_rra(a, big_bro_idx, a_size);
// }

// static void	ft_push_node_to_a_and_check_next(t_list **a, t_list **b)
// {
// 	int	big_bro_idx;
// 	int	i;

// 	i = 0;
// 	while (i < 3)
// 	{
// 		ft_rotate_a(a, big_bro_idx);
// 		ft_rotate_b(b, big_3_pos[i]);
// 		ft_pa(a, b);
// 		ft_check_push(a);
// 		++i;
// 	}
// 	free(big_3_idx);
// 	free(big_3_pos);
// }

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	cheapest_b_node;

	cheapest_b_node	= 0;
	cheapest_b_node = ft_get_cheapest_b_node_idx(a, b);

	(void)a;
	printf("cheapest_b_node: [%d]\n", cheapest_b_node);
	// while (*b)
	// {
	// 	ft_re_init_index(*a);
	// 	ft_re_init_index(*b);
	// 	ft_push_node_to_a_and_check_next(a, b);
	// }
	// ft_reorder_a(a);
}

// void	ft_push_from_b_to_a(t_list **a, t_list **b)
// {
// 	int	lil_bro_idx;
// 	int	lil_bro_pos;
// 	int	big_bro_idx;

// 	while (*b)
// 		{
// 			lil_bro_idx = ft_get_lil_bro_idx(b, lil_bro_idx);
// 			lil_bro_pos = ft_get_lil_bro_pos(a, b, lil_bro_pos);
// 			big_bro_idx = ft_get_big_bro_idx(a, lil_bro_pos);
// 			ft_rotate_a(a, big_bro_idx);
// 			ft_pa(a, b);
// 		}
// 		ft_reorder_a(a);
// }
