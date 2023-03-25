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
	int	big_or_sml;
	int	a_size;
	int	mid;
	int	i;

	a_size = ft_get_stack_size(*a);
	mid = a_size / 2;
	i = 0;
	while (i < a_size)
	{
		big_or_sml = ft_check_incoming(b, data_arr[i]);
		printf("big_or_sml: %d - a: %d\n\n", big_or_sml, data_arr[i]);
		++i;
	}
}
