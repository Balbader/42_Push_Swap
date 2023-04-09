/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_is_sorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:21:57 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/01 15:21:59 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_a_is_sorted(t_list *a)
{
	while (a->next != NULL)
	{
		if (a->data > a->next->data)
			return (1);
		a = a-> next;
	}
	return (0);
}
