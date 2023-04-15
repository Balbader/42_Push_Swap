/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_stack_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:07:24 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 10:07:26 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_stack_size(t_list **stack)
{
	t_list	*tmp;
	int		size;

	if (!stack)
		return (0);
	tmp = (*stack);
	size = 0;
	while (tmp)
	{
		++size;
		tmp = tmp->next;
	}
	return (size);
}
