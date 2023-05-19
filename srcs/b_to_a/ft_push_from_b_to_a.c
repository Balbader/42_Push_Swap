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

// static void	ft_reorder_a(t_list **a, int big_bro_idx)
// {
// }

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	cheapest_b_idx;
	int	cheapest_b_pos;
	int	big_bro_idx;
	int	big_bro_pos;

	cheapest_b_idx = 0;
	cheapest_b_pos = 0;
	big_bro_idx = 0;
	big_bro_pos = 0;

	cheapest_b_idx = ft_get_cheapest_node_idx(b, cheapest_b_idx);
	printf("cheapest_b_idx: [%d]\n", cheapest_b_idx);

	cheapest_b_pos = ft_get_cheapest_node_pos(b, cheapest_b_idx, cheapest_b_pos);
	printf("cheapest_b_pos: (%d)\n", cheapest_b_pos);

	big_bro_idx = ft_get_big_bro_idx(a, cheapest_b_pos);
	printf("big_bro_idx: [%d]\n", big_bro_idx);

	big_bro_pos = ft_get_big_bro_pos(a, big_bro_idx);
	printf("big_bro_pos: (%d)\n", big_bro_pos);

	ft_pa(a, b);
	ft_re_init_index(*a);
	ft_re_init_index(*b);

	printf("\n");

	cheapest_b_idx = ft_get_cheapest_node_idx(b, cheapest_b_idx);
	printf("cheapest_b_idx: [%d]\n", cheapest_b_idx);

	cheapest_b_pos = ft_get_cheapest_node_pos(b, cheapest_b_idx, cheapest_b_pos);
	printf("cheapest_b_pos: (%d)\n", cheapest_b_pos);

	big_bro_idx = ft_get_big_bro_idx(a, cheapest_b_pos);
	printf("big_bro_idx: [%d]\n", big_bro_idx);

	big_bro_pos = ft_get_big_bro_pos(a, big_bro_idx);
	printf("big_bro_pos: (%d)\n", big_bro_pos);
}
