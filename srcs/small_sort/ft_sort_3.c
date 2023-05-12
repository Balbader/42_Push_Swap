/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:32:37 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 10:32:39 by baalbade         ###   ########.fr       */
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

void	ft_sort_3(t_list **stack)
{
	int	*arr;

	arr = (int *)malloc(sizeof(int) * 3);
	if (!arr)
		return ;
	arr = ft_init_arr_3(*stack, arr);
	if (ft_find_case_3(arr) == 1)
	{
		printf("case: %d\n", 1);
		ft_sa(stack);
	}
	if (ft_find_case_3(arr) == 2)
	{
		printf("case: %d\n", 2);
		ft_sa(stack);
		ft_rra(stack);
	}
	if (ft_find_case_3(arr) == 3)
	{
		printf("case: %d\n", 3);
		ft_ra(stack);
	}
	if (ft_find_case_3(arr) == 4)
	{
		printf("case: %d\n", 4);
		ft_sa(stack);
		ft_ra(stack);
	}
	if (ft_find_case_3(arr) == 5)
	{
		printf("case: %d\n", 5);
		ft_rra(stack);
	}
	free(arr);
}
