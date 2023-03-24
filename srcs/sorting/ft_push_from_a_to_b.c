/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_a_to_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:27:02 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/24 12:27:04 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_from_a_to_b(t_list **a, t_list **b)
{
	int	*cost_arr;
	int	a_size;
	int	i;
	int	j;

	(void)b;
	cost_arr = ft_init_cost_arr(a);
	a_size = ft_get_stack_size(*a);
	j = 1;
	i = 0;
	while (i < a_size)
	{
		cost_arr[i] = j;
		++j;
		++i;
	}
	j = 1;
	i = 0;
	while (i < a_size)
	{
		printf("cost_arr[%d]: %d\n", j, cost_arr[i]);
		++j;
		++i;
	}
}
