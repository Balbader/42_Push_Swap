/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_a_cost_arr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:12:38 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/25 14:12:39 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_init_a_cost_arr(t_list **a)
{
	int	*a_cost_arr;
	int	a_size;
	int	moves;
	int	mid;
	int	i;

	a_cost_arr = ft_init_cost_arr(a);
	a_size = ft_get_stack_size(*a);
	mid = a_size / 2;
	i = 0;
	while (i < a_size)
	{
		if (i <= mid)
		{
			moves = i;
			a_cost_arr[i] = moves + 1;
		}
		if (i > mid)
		{
			moves--;
			a_cost_arr[i] = moves + 1;
		}
		++i;
	}
	return (a_cost_arr);
}
