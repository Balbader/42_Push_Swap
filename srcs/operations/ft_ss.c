/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:29:21 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/22 23:29:23 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ss(t_list *stack_a, t_list *stack_b)
{
	ft_swap_stack(stack_a);
	ft_swap_stack(stack_b);
	ft_putstr_fd("ss\n", 1);
}
