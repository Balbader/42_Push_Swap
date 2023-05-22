/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:11:13 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/02 16:11:16 by baalbade         ###   ########.fr       */
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
