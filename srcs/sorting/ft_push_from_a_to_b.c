/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_a_to_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:27:02 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/24 12:27:04 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_from_a_to_b(t_list **a, t_list **b)
{
	ft_find_cheapest_a(a, b); // returns the idx of the cheapest a_node
	ft_do_cheapest_a(a, b);
}
