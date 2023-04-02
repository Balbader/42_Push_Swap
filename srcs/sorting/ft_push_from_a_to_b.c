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
	int	cheapest_a_node_idx;
	int	*a_data;
	// int	check_incoming;

	a_data = NULL;
	a_data = ft_init_data_array(a);
	cheapest_a_node_idx = ft_find_cheapest_a_node_idx(a, b);
	// check_incoming = ft_check_incoming(b, a_data[cheapest_a_node_idx]);

	// DEBUG ------------------------------------------------------------------
	printf("\n\n--------------------------------> FROM: ft_push_from_a_to_b.c");
	ft_print_stack(b, "b");
	printf("\n");
	printf("cheapest_a_node_idx: %d\n", cheapest_a_node_idx);
	printf("incoming a_node data: %d\n", a_data[cheapest_a_node_idx]);
	// printf("check_incoming: %d\n", check_incoming);
	//-------------------------------------------------------------------------
}
