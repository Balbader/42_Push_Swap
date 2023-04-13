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

	int	big;
	int	next_big;
	int	cost;

	big = ft_find_biggest_node_idx(b);
	next_big = ft_find_next_biggest_node_idx(b);
	cost = ft_big_or_next(big, next_big, b);
}
