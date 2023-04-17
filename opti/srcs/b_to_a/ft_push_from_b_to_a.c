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
	int	*sorted_indexes;
	// int	b_size;
	// int	i;

	(void)a;
	sorted_indexes = (int *)malloc(sizeof(int) * 3);
	if (!sorted_indexes)
		return ;
	// b_size = ft_get_stack_size(b);
	// i = 0;
	// while (i < (b_size / 3))
	// {
	// 	indexes = ft_compare_costs_and_sort_indexes(b, indexes);
	// 	++i;
	// }
	sorted_indexes = ft_compare_costs_and_sort_indexes(b, sorted_indexes);
	for (int x = 0; x < 3; ++x) {
		printf("sorted_indexes: [%d]\n", sorted_indexes[x]);
	}
}
