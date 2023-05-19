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

	ft_re_init_index(*a);
	ft_re_init_index(*b);
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
	printf("b idx: [%d]\n", cheapest_b_idx);
	printf("a idx: [%d]\n", big_bro_idx);
	printf("b pos: (%d)\n", cheapest_b_pos);
	printf("a pos: (%d)\n", big_bro_pos);
	ft_check_a_receiver(a, big_bro_idx);
	ft_check_b_sender(b, cheapest_b_idx);
	printf("pa!\n");
	ft_pa(a, b);
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	i;

	i = 0;
	// while (*b)
	while (i < 89)
	{
		printf("\n---------------------->%d\n", i + 1);
		ft_re_init_index(*a);
		ft_re_init_index(*b);
		ft_print_stack(b, "b");
		ft_print_stack(a, "a");
		printf("\n");
		ft_init_push_to_a(a, b);
		++i;
	}
}
