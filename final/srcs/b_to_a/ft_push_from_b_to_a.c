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
	int	cost;
	// int	b_size;
	int	i;

	printf("\n");
	// b_size = ft_get_stack_size(b);
	i = 0;
	while (i < 3)
	{
		printf("----------------------------------------------> %d\n", i + 1);
		ft_re_init_index(*b);

		big_data = ft_find_biggest_node_data(b);
		big_idx= ft_find_biggest_node_idx(b);
		printf("big data: %d\n", big_data);
		printf("big idx: %d\n", big_idx);

		next_data = ft_find_next_biggest_node_data(b);
		next_idx = ft_find_next_biggest_node_idx(b);
		printf("next big data: %d\n", next_data);
		printf("next big idx: %d\n", next_idx);

		cost = ft_big_or_next(big_idx, next_idx, b);
		printf("cost: %d\n", cost);

		if (cost == 1)
			ft_push_biggest(a, b, big_idx, next_idx);
		if (cost == 2)
			ft_push_next_biggest(a, b, next_idx, big_idx);
		++i;
		printf("\n");
	}
}
