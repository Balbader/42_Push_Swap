/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:23:40 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/22 23:23:41 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **stack)
{
	int	tmp_data;
	int	tmp_index;

	if ((*stack) == NULL || (*stack)->next == NULL)
		return ;
	tmp_data = (*stack)->data;
	(*stack)->data = (*stack)->next->data;
	(*stack)->next->data = tmp_data;
	tmp_index = (*stack)->index;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->index = tmp_index;
}
