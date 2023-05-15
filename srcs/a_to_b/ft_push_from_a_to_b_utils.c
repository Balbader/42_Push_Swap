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
int	ft_define_pivot(t_list **a, int pivot)
{
	int	a_size;

	a_size = ft_get_stack_size(a);
	if (a_size == 100 || a_size == 500)
		pivot = 10;
	else if (a_size > 5 && a_size < 100)
		pivot = a_size / 5;
	else if (a_size > 100)
		pivot = a_size / 10;
	return (pivot);
}