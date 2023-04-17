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

void	ft_push_nodes_to_a(t_list **a, t_list **b, int *sorted_indexes)
{
	// int	i;
	int	*sorted_values;

	sorted_values = (int *)malloc(sizeof(int) * 3);
	if (!sorted_values)
		return ;

	// ft_print_stack(b, "b");
	for (int j = 0; j < 3; ++j) {
		printf("sorted_indexes: [%d]\n", sorted_indexes[j]);
	}
	printf("\n");
	sorted_values = ft_get_sorted_idx_values(b, sorted_indexes, sorted_values);
	// for (int j = 0; j < 3; ++j) {
	// 	printf("sorted_values: [%d]\n", sorted_values[j]);
	// }
	// printf("\n");
	// i = 0;
	// while (i < 3)
	// {
		ft_print_stack(b, "b");
		printf("\n");
		printf("sorted_indexes[0]: %d\n", sorted_indexes[0]);
		ft_push_node_to_a(a, b, sorted_indexes[0]);
		ft_print_stack(a, "a");
		printf("\n");
		ft_print_stack(b, "b");
		printf("\n");
		printf("sorted_indexes[0]: %d\n", sorted_indexes[1]);
		ft_push_node_to_a(a, b, sorted_indexes[1]);
		ft_print_stack(a, "a");
		printf("\n");
		ft_print_stack(b, "b");
		printf("\n");
		printf("sorted_indexes[0]: %d\n", sorted_indexes[2]);
		ft_push_node_to_a(a, b, sorted_indexes[2]);
		ft_print_stack(a, "a");
		printf("\n");
		ft_print_stack(b, "b");
		printf("\n");
		// ++i;
	// }
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	*sorted_indexes;
	// int	b_size;
	// int	i;

	sorted_indexes = (int *)malloc(sizeof(int) * 3);
	if (!sorted_indexes)
		return ;
	// b_size = ft_get_stack_size(b);
	// i = 0;
	// while (i < (b_size / 3))
	// {
	// 	sorted_indexes = ft_compare_costs_and_sort_indexes(b, sorted_indexes);
	// 	ft_push_nodes_to_a(a, b, sorted_indexes);
	// 	++i;
	// }
	// ft_re_init_index(*a);
	// ft_re_init_index(*b);
	sorted_indexes = ft_compare_costs_and_sort_indexes(b, sorted_indexes);
	ft_push_nodes_to_a(a, b, sorted_indexes);
}
