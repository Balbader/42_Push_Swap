/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_longest_path_utils.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:07:05 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/21 10:07:07 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_free_tab(int **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		++i;
	}
	free(tab);
}

static int	**ft_init_tab(t_list *stack)
{
	int	**tab;
	int	stack_size;
	int	i;

	stack_size = ft_get_stack_size(stack);
	tab = (int **)malloc(sizeof(int *) * stack_size);
	if (!tab)
		return (0);
	i = 0;
	while (i < stack_size)
	{
		tab[i] = (int *)malloc(sizeof(int));
		if (!tab[i])
		{
			ft_free_tab(tab, stack_size);
			return (0);
		}
		++i;
	}
	return (tab);
}

static int	ft_count_path_len(int *stack_cpy, int temp_size, int elem, int i)
{
	int	count;

	count = 1;
	while (i < temp_size)
	{
		if (stack_cpy[elem] < stack_cpy[i + 1])
		{
			++count;
			elem += 1;
			++i;
		}
		++i;
	}
	return (count);
}

int	**ft_find_all_path_len(t_list *stack, int *stack_cpy)
{
	int	**tab;
	int	stack_size;
	int	temp_size;
	int	i;
	int	j;

	stack_size = ft_get_stack_size(stack);
	temp_size = stack_size;
	tab = ft_init_tab(stack);
	stack_cpy = ft_copy_stack_index(stack);
	i = 0;
	while (i < stack_size)
	{
		j = 0;
		tab[i][j] = ft_count_path_len(stack_cpy, temp_size, stack_cpy[i], i);
		++i;
		temp_size--;
	}
	return (tab);
}
