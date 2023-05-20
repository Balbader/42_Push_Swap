/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_stack_to_arr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:31:52 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 17:31:58 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_copy_stack_to_arr(t_list **stack, int stack_size, int *arr)
{
	t_list	*tmp;
	int		i;

	if (!stack)
		return (0);
	tmp = (*stack);
	arr = (int *)malloc(sizeof(int) * stack_size);
	if (!arr)
		return (0);
	i = 0;
	while (tmp)
	{
		arr[i] = tmp->data;
		++i;
		tmp = tmp->next;
	}
	return (arr);
}
