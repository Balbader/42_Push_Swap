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

// void	ft_push_from_b_to_a(t_list **a, t_list **b)
// {
// 	int	big_idx;
// 	int	next_idx;
// 	int	big_or_next;
// 	int	b_size;
// 	int	i;

// 	b_size = ft_get_stack_size(b);
// 	i = 0;
// 	while (i < (b_size / 2))
// 	{
// 		ft_re_init_index(*b);
// 		big_idx= ft_find_biggest_node_idx(b);
// 		next_idx = ft_find_next_biggest_node_idx(b);
// 		big_or_next = ft_big_or_next(big_idx, next_idx, b);
// 		if (big_or_next == 1)
// 			ft_push_biggest(a, b, big_idx);
// 		if (big_or_next == 2)
// 			ft_push_next_biggest(a, b, next_idx);
// 		ft_re_init_index(*a);
// 		++i;
// 	}
// }
void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	(void)a;
	(void)b;
	printf("\n\n");
	ft_compare_costs_and_sort_indexes(b);
}
