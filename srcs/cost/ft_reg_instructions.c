/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reg_instructions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 03:49:56 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/30 03:50:00 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_reg_instructions(int a_cost, int b_cost)
{
	int	*reg;

	reg = NULL;
	reg = (int *)malloc(sizeof(int) * 3);
	if (!reg)
		return (0);
	reg[0] = a_cost;
	reg[1] = b_cost;
	reg[2] = 1;
	return (reg);
}
