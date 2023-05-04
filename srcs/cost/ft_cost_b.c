/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 08:27:01 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/04 08:27:04 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Returns an array contining the cost of moving each b_node
 * to the top of b_stack
*/

int	*ft_get_b_cost_arr(t_list **b)
{
	t_list	*tmp;
	int		i;
	int		*b_cost;
	int		b_size;

	ft_re_init_index(*b);
	tmp = (*b);
	b_size = ft_get_stack_size(b);
	b_cost = (int *)malloc(sizeof(int) * b_size);
	if (!b_cost)
		return (0);
	i = 0;
	while (i < b_size)
	{
		b_cost[i] = ft_calculate_node_cost(&tmp, i + 1, b_size);
		tmp = tmp->next;
		++i;
	}
	return (b_cost);
}
