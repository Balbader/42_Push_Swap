/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a_utils.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:15:53 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/12 09:15:55 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Return the idx of the cheapest node in a given stack based on its cost */

int	ft_get_cheapest_node_idx(t_list **stack, int cheapest_node_idx)
{
	int	stack_size;
	int	cost;
	int	cheapest;
	int	i;

	stack_size = ft_get_stack_size(stack);
	cheapest = INT_MAX;
	cost = 0;
	i = 0;
	while (i < stack_size)
	{
		cost = ft_get_node_cost(stack, i);
		if (cost < cheapest)
		{
			cheapest = cost;
			cheapest_node_idx = i;
		}
		++i;
	}
	return (cheapest_node_idx);
}

/* Returns the position of the cheapest node in a given stack based on
 * the cheapest_idx found
*/
int	ft_get_cheapest_node_pos(t_list **stack, int cheapest_idx, int cheapest_pos)
{
	t_list	*tmp;
	int		stack_size;
	int		i;

	stack_size = ft_get_stack_size(stack);
	tmp = (*stack);
	i = 0;
	while (i < stack_size)
	{
		if (i == cheapest_idx)
			cheapest_pos = tmp->pos;
		tmp = tmp->next;
		++i;
	}
	ft_free_stack(&tmp);
	return (cheapest_pos);
}
