/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_cheapest_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 03:02:41 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/30 03:02:43 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*ft_get_instructions(int a_cost, int b_cost)
{
	int	*instructions;

	instructions = NULL;
	if (ft_check_costs(a_cost, b_cost) == 1)
		instructions = ft_optimized_instructions(a_cost, b_cost);
	if (ft_check_costs(a_cost, b_cost) == 0)
		instructions = ft_reg_instructions(a_cost, b_cost);
	return (instructions);
}

/*
 * 1. check if cheapest_a_node is optimized or not
 * 2. if yes : optimized instructions
 * 3. if no : do a_cost && b_cost
*/
void	ft_do_cheapest_a(int a_cost, int b_cost)
{
	
}
