/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_a_to_b_utils.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 10:52:13 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/15 10:52:15 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Returns the reference nbr that will serve to define the chunks size
 * to create in b
*/
int	ft_define_pivot(t_list **stack, int pivot)
{
	int	stack_size;

	stack_size = ft_get_stack_size(stack);
	if (stack_size == 100 || stack_size == 500)
		pivot = 32;
	else if (stack_size == 97 || stack_size == 497)
		pivot = 32;
	else if (stack_size > 5 && stack_size < 100)
		pivot = stack_size / 3;
	else if (stack_size > 100)
		pivot = stack_size / 10;
	return (pivot);
}
