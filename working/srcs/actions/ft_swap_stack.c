/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 08:44:24 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 08:44:41 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_stack(t_list *stack)
{
	int	tmp_data;
	int	tmp_index;

	if (stack == NULL || stack->next == NULL)
		return ;
	tmp_data = stack->data;
	stack->data = stack->next->data;
	stack->next->data = tmp_data;
	tmp_index = stack->index;
	stack->index = stack->next->index;
	stack->next->index = tmp_index;
}
