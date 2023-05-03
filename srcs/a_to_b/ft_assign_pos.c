/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assign_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:38:44 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/03 11:38:46 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

static void	ft_assign_pos_to_node(int *arr, t_list **a, int a_size)
{
	t_list	*head;
	int	i;
	int	j;

	head = (*a);
	j = 1;
	i = 0;
	while (i < a_size)
	{
		while (*a)
		{
			if (arr[i] == (*a)->data)
			{
				(*a)->pos = j;
				++j;
			}
			(*a) = (*a)->next;
		}
		++i;
		(*a) = head;
	}
}

static int	*ft_create_sorted_arr(t_list **a, int a_size, int *sorted_arr)
{
	sorted_arr = (int *)malloc(sizeof(int) * a_size);
	if (!sorted_arr)
		return (0);
	sorted_arr = ft_copy_stack_to_arr(a, a_size, sorted_arr);
	ft_sort_arr(sorted_arr, a_size);
	return (sorted_arr);
}

void	ft_assign_pos(t_list **a)
{
	int	i;
	int	a_size;
	int	*sorted_arr;

	a_size = ft_get_stack_size(a);
	sorted_arr = NULL;
	sorted_arr = ft_create_sorted_arr(a, a_size, sorted_arr);
	i = 0;
	while (i < a_size)
	{
		ft_assign_pos_to_node(sorted_arr, a, a_size);
		++i;
	}
}