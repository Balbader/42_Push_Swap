/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_a_final_cost_arr.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:43:43 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/09 11:43:46 by baalbade         ###   ########.fr       */
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

/*
 * Returns an array containing the cost of bringing the right a_node to the top
 * of a_stack in regards to each b_node
*/
int	*ft_get_a_final_cost_arr(t_list **a, t_list **b,
							int *a_node_pos_to_ra, int *a_final_cost)
{
	t_data	data;

	data.a_size = ft_get_stack_size(a);
	data.b_size = ft_get_stack_size(b);
	data.head = (*a);
	data.j = 0;
	data.i = 0;
	while (data.i < data.b_size)
	{
		while (*a)
		{
			if ((*a) && (*a)->pos == a_node_pos_to_ra[data.i])
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
