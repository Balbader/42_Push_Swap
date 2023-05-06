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


int	*ft_get_a_final_cost_arr(t_list **a, t_list **b,
							int *a_node_pos_to_ra, int *a_final_cost)
{
	t_list	*head;
	int		a_size;
	int		b_size;
	int		i;
	int		j;

	a_size = ft_get_stack_size(a);
	b_size = ft_get_stack_size(b);
	head = (*a);
	j = 0;
	i = 0;
	while (i < b_size)
	{
		while (*a)
		{
			if ((*a)->pos == a_node_pos_to_ra[i])
			{
				printf("a->pos: %d\n", (*a)->pos);
				printf("a_node_pos_to_ra[%d]: %d\n", i, a_node_pos_to_ra[i]);
				a_final_cost[j] = ft_calculate_node_cost(a, (*a)->index, a_size);
				printf("a_final_cost[%d]: %d\n", i, a_final_cost[i]);
				printf("\n");
				++i;
				++j;
			}
			(*a) = (*a)->next;
		}
		(*a) = head;
	}
	// ft_free_stack(&head);
	// for (int i = 0; i < b_size; ++i) {
	// 	printf("a_final_cost[%d]: %d\n", i, a_final_cost[i]);
	// }
	return (a_final_cost);
}
