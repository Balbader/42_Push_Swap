/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:40:49 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/13 12:40:51 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int *ft_get_sorted_idx_values(t_list **b,
		int *sorted_indexes, int *sorted_values)
{
	t_list	*tmp;
	t_list	*head;
	int		i;
	int		j;

	tmp = (*b);
	head = tmp;
	i = 0;
	j = 0;
	while (tmp)
	{
		if (tmp->index == sorted_indexes[i])
		{
			sorted_values[j] = tmp->data;
			tmp = head;
			++i;
			++j;
		}
		tmp = tmp->next;
	}
	return (sorted_values);
}

void	ft_check_incoming_and_swap_a(int *sorted_values)
{
	int	a;
	int	b;
	int	c;

	a = sorted_values[0];
	b = sorted_values[1];
	c = sorted_values[2];
	if (a < b &&)
}

void	ft_push_nodes_to_a(t_list **a, t_list **b, int *sorted_indexes)
{
	int	*sorted_values;
	int	new_idx;
	int	incoming;
	int	i;

	new_idx = 0;
	sorted_values = (int *)malloc(sizeof(int) * 3);
	if (!sorted_values)
		return ;
	sorted_values = ft_get_sorted_idx_values(b, sorted_indexes, sorted_values);
	new_idx = ft_return_new_idx_to_push(b, sorted_values[0]);
	ft_push_node_to_a(a, b, new_idx);
	i = 0;
	while (i < 2)
	{
		if (i < 2)
			incoming = sorted_values[i + 1];
		new_idx = ft_return_new_idx_to_push(b, sorted_values[i + 1]);
		ft_push_node_to_a(a, b, new_idx);
		++i;
	}
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	*sorted_indexes;
	int	b_size;
	int	i;

	sorted_indexes = (int *)malloc(sizeof(int) * 3);
	if (!sorted_indexes)
		return ;
	b_size = ft_get_stack_size(b);
	i = 0;
	// while (i < (b_size / 3))
	// while (i < 10)
	// while (i < 3)
	while (i < 1)
	{
		sorted_indexes = ft_compare_costs_and_sort_indexes(b, sorted_indexes);
		ft_push_nodes_to_a(a, b, sorted_indexes);
		++i;
	}
}
