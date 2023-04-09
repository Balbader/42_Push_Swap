/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:10:57 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 11:10:58 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*ft_init_arr_3(t_list *stack, int *arr)
{
	int	i;

	i = 0;
	while (stack)
	{
		arr[i] = stack->data;
		stack = stack->next;
		++i;
	}
	return (arr);
}

static int	ft_find_case_3(int arr[3])
{
	if ((arr[0] > arr[1]) && (arr[1] < arr[2]) && (arr[2] > arr[0]))
		return (1);
	else if ((arr[0] > arr[1]) && (arr[1] > arr[2]) && (arr[2] < arr[0]))
		return (2);
	else if ((arr[0] > arr[1]) && (arr[1] < arr[2]) && (arr[2] < arr[0]))
		return (3);
	else if ((arr[0] < arr[1]) && (arr[1] > arr[2]) && (arr[2] > arr[0]))
		return (4);
	else if ((arr[0] < arr[1]) && (arr[0] > arr[2]) && (arr[1] > arr[2]))
		return (5);
	else
		return (0);
}

t_list	*ft_sort_3(t_list *stack_a)
{
	int	*arr;

	arr = (int *)malloc(sizeof(int) * 3);
	if (!arr)
		return (NULL);
	arr = ft_init_arr_3(stack_a, arr);
	if (ft_find_case_3(arr) == 1)
		ft_sa(stack_a);
	if (ft_find_case_3(arr) == 2)
	{
		ft_sa(stack_a);
		ft_rra(&stack_a);
	}
	if (ft_find_case_3(arr) == 3)
		ft_ra(&stack_a);
	if (ft_find_case_3(arr) == 4)
	{
		ft_sa(stack_a);
		ft_ra(&stack_a);
	}
	if (ft_find_case_3(arr) == 5)
		ft_rra(&stack_a);
	return (free(arr), stack_a);
}
