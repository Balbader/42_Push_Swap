/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:36:13 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/06 12:36:22 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct s_data
{
	t_list	*head;
	int		a_size;
	int		b_size;
	int		i;
	int		j;
}				t_data;

int	*ft_get_a_final_cost_arr(t_list **a, t_list **b,
							int *a_node_pos_to_ra, int *a_final_cost)
{
	t_data	data;

	data.a_size = ft_get_stack_size(a);
	data.b_size = ft_get_stack_size(b) - 1;
	data.head = (*a);
	data.j = 0;
	data.i = 0;
	while (data.i < data.b_size)
	{
		while (*a)
		{
			if ((*a)->pos && (*a)->pos == a_node_pos_to_ra[data.i])
			{
				a_final_cost[data.j]
						= ft_calculate_node_cost(a, (*a)->index, data.a_size);
				++data.i;
				++data.j;
			}
			(*a) = (*a)->next;
		}
		(*a) = data.head;
	}
	return (a_final_cost);
}
