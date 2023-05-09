/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_big_bro.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:53:31 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/09 12:53:33 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_big_bro(t_list **a, int incoming)
{
	int	big_bro;

	big_bro = INT_MAX;
	while (*a)
	{
		if (((*a)->data > incoming && (*a)->data < big_bro)
			|| ((*a)->data < incoming && (*a)->data < incoming))
			big_bro = (*a)->data;
		(*a) = (*a)->next;
	}
	return (big_bro);
}
