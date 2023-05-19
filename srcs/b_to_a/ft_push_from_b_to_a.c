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
	int	b_size;

	b_size = ft_get_stack_size(b);
	cheapest_b_idx = 0;
	cheapest_b_idx = ft_get_cheapest_b_idx(a, b, b_size);
	printf("cheapest_b_idx: [%d]\n", cheapest_b_idx);
}
