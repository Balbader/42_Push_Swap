/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_first_big_data.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 06:54:48 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/03 06:54:50 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_first_big_data(t_list **stack)
{
	t_list	*tmp;
	int		big_data;

	if (!stack)
		return (0);
	tmp = NULL;
	tmp = (*stack);
	big_data = INT_MIN;
	while (tmp)
	{
		if (tmp->data > big_data)
			big_data = tmp->data;
		tmp = tmp->next;
	}
	ft_free_stack(&tmp);
	return (big_data);
}
