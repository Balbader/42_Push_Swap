/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_middle_node_idx.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:40:24 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/24 10:40:30 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_middle_node_idx(t_list **stack)
{
	int	mid_idx;
	int	stack_size;

	stack_size = ft_get_stack_size(*stack);
	mid_idx = stack_size / 2;
	return (mid_idx);
}
