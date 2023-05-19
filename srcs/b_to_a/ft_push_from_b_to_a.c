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

void	ft_init_push_to_a(t_list **a, t_list **b)
{
	int	cheapest_b_idx;
	int	cheapest_b_pos;
	int	big_bro_idx;
	int	big_bro_pos;
	int	b_size;

	b_size = ft_get_stack_size(b);
	cheapest_b_idx = 0;
	cheapest_b_pos = 0;
	big_bro_idx = 0;
	big_bro_pos = 0;
	cheapest_b_idx = ft_get_cheapest_b_idx(a, b);
	cheapest_b_pos = ft_get_cheapest_node_pos(b,
										cheapest_b_idx, cheapest_b_pos);
	big_bro_idx = ft_get_big_bro_idx(a, cheapest_b_pos);
	big_bro_pos = ft_get_big_bro_pos(a, big_bro_idx);
	printf("cheapest_b_idx: [%d]\n", cheapest_b_idx);
	printf("cheapest_b_pos: (%d)\n", cheapest_b_pos);
	printf("\n");
	printf("big_bro_idx: [%d]\n", big_bro_idx);
	printf("big_bro_pos: (%d)\n", big_bro_pos);
	printf("\n");
	ft_check_a_receiver(a, big_bro_idx);
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	ft_init_push_to_a(a, b);
}
