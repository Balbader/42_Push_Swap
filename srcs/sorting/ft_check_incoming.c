/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_incoming.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:44:42 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/24 15:44:44 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_if_smallest(t_list **b, int data)
{
	int	sml_data;

	sml_data = ft_find_smallest_node_data(b);
	if (data < sml_data)
		return (1);
	return (0);
}

static int	ft_check_if_biggest(t_list **b, int data)
{
	int	big_data;

	big_data = ft_find_biggest_node_data(b);
	if (data > big_data)
		return (1);
	return (0);
}

int	ft_check_incoming(t_list **b, int data)
{
	int	big_data;
	int	sml_data;

	sml_data = ft_find_smallest_node_data(b);
	big_data = ft_find_biggest_node_data(b);
	if (ft_check_if_biggest(b, data) == 1)
	{
		printf("big_b: %d\n", big_data);
		return (1);
	}
	if (ft_check_if_smallest(b, data) == 1)
	{
		printf("sml_b: %d\n", sml_data);
		return (1);
	}
	return (0);
}
