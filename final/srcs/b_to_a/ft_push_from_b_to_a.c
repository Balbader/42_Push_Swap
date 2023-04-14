/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:40:49 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/13 12:40:51 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	big_idx;
	int	next_idx;
	int	big_data;
	int	next_data;
	int	big_or_next;
	int	b_size;
	int	i;

	// if (!b)
	// 	return ;
	b_size = ft_get_stack_size(b);
	// printf("b_size: %d\n", b_size);
	i = 0;
	while (i < (b_size / 2))
	// while (i < b_size)
	// while (tmp)
	{
		// printf("----------------------------------------------> %d\n", i + 1);
		ft_re_init_index(*b);
		// ft_print_stack(b, "b");
		// printf("\n");

		big_data = ft_find_biggest_node_data(b);
		next_data = ft_find_next_biggest_node_data(b);
		// printf("big data: %d\n", big_data);
		// printf("next big data: %d\n", next_data);
		// printf("\n");

		big_idx= ft_find_biggest_node_idx(b);
		next_idx = ft_find_next_biggest_node_idx(b);
		// printf("big idx: [%d]\n", big_idx);
		// printf("next big idx: [%d]\n", next_idx);
		// printf("\n");

		big_or_next = ft_big_or_next(big_idx, next_idx, b);
		// printf("big_or_next: %d\n", big_or_next);
		// printf("\n");

		if (big_or_next == 1)
			ft_push_biggest(a, b, big_idx);
		if (big_or_next == 2)
			ft_push_next_biggest(a, b, next_idx);
		ft_re_init_index(*a);
		// ft_print_stack(a, "a");
		// printf("--------------\n");
		++i;
	}
}
