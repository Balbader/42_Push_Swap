/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_arrays.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:22:08 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/24 14:22:10 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

static int *ft_init_array(t_list **a)
{
	int	*arr;
	int	a_size;

	a_size = ft_get_stack_size(*a);
	arr = NULL;
	arr = (int *)malloc(sizeof(int) * a_size);
	if (!arr)
		return (0);
	return (arr);
}

int	*ft_init_idx_array(t_list **a)
{
	t_list	*tmp;
	int		*idx_arr;
	int		i;

	idx_arr = ft_init_array(a);
	tmp = NULL;
	tmp = *a;
	i = 0;
	while (tmp)
	{
		idx_arr[i] = tmp->index;
		++i;
		tmp = tmp->next;
	}
	return (idx_arr);
}

int	*ft_init_data_array(t_list **a)
{
	t_list	*tmp;
	int		*data_arr;
	int		i;

	data_arr = ft_init_array(a);
	tmp = NULL;
	tmp = *a;
	i = 0;
	while (tmp)
	{
		data_arr[i] = tmp->data;
		++i;
		tmp = tmp->next;
	}
	return (data_arr);
}

int	*ft_init_cost_arr(t_list **a)
{
	int	*cost_arr;
	int	a_size;

	a_size = ft_get_stack_size(*a);
	cost_arr = NULL;
	cost_arr = (int *)malloc(sizeof(int) * a_size);
	if (!cost_arr)
		return (0);
	return (cost_arr);
}
