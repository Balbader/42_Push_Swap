/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate_cost.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:07:00 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/24 13:07:02 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_calculate_cost(t_list **a, t_list **b)
{
	// int	cheapest; -> this will be returned value
	int	*data_arr;
	int	*idx_arr;
	int	big_or_sml;
	int	a_size;
	int	mid;
	int	i;

	data_arr = ft_init_data_array(a);
	idx_arr = ft_init_idx_array(a);
	a_size = ft_get_stack_size(*a);
	mid = a_size / 2;
	// printf("a_size: %d\n", a_size);
	// printf("mid: %d\n", mid);
	// printf("mid_idx[%d]: %d\n", idx_arr[mid], data_arr[mid]);
	i = 0;
	while (i < a_size)
	{
		big_or_sml = ft_check_incoming(b, data_arr[i]);
		printf("big_or_sml: %d - a: %d\n\n", big_or_sml, data_arr[i]);
		// printf("[%d] : idx[%d] -> data[%d]\n", i, idx_arr[i], data_arr[i]);
		++i;
	}
}
