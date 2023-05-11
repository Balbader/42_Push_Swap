/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_re_init_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:54:00 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 10:54:01 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_re_init_index(t_list *stack)
{
	int		i;

	i = 0;
	while (stack)
	{
		stack->index = i;
		stack = stack->next;
		++i;
	}
}
