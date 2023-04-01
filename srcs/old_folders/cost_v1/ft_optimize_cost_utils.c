/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optimize_cost_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:29:09 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/29 20:29:12 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_pos(int a_cost, int b_cost)
{
	return (a_cost > 0 && b_cost > 0);
}

int	ft_is_neg(int a_cost, int b_cost)
{
	return (a_cost < 0 && b_cost < 0);
}
