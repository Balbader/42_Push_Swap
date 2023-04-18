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

static int	*ft_get_sorted_idx_values(t_list **b,
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

void	ft_push_nodes_to_a(t_list **a, t_list **b, int *sorted_values)
{
	int	first;
	int	second;
	int	third;

	first = sorted_values[0];
	second = sorted_values[1];
	third = sorted_values[2];
	// printf("first: %d\n", first);
	// printf("second: %d\n", second);
	// printf("third: %d\n", third);
	if (first < second && first < third)
		ft_if_smallest_is_first(a, b);
	else if (first > second && first < third)
		ft_if_middle_is_first(a, b);
	else if (first > second && first > third)
		ft_if_biggest_is_first(a, b);
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	*sorted_indexes;
	int	*sorted_values;
	int	i;
	int	a_size;

	sorted_values = (int *)malloc(sizeof(int) * 3);
	if (!sorted_values)
		return ;
	sorted_indexes = (int *)malloc(sizeof(int) * 3);
	if (!sorted_indexes)
		return ;
	printf("\n");
	sorted_indexes = ft_compare_costs_and_sort_indexes(b, sorted_indexes);
	ft_print_stack(b, "b");
	i = 0;
	// while (i < 6)
	while((*b) != NULL)
	{
		sorted_indexes = ft_compare_costs_and_sort_indexes(b, sorted_indexes);
		sorted_values = ft_get_sorted_idx_values(b, sorted_indexes, sorted_values);
		a_size = ft_get_stack_size(a);
		ft_push_node_to_a(a, b, sorted_indexes[0]);
		// if (a_size > 1)
		// {
		// 	// printf("a->data: %d\n", (*a)->data);
		// 	// printf("a->next->data: %d\n", (*a)->next->data);
		// 	if ((*a)->data > (*a)->next->data)
		// 		ft_sa(a);
		// }
		ft_re_init_index(*a);
		ft_push_nodes_to_a(a, b, sorted_values);
		printf("--------------------------------------------> %d\n", a_size);
		// if (a_size > 1)
		// {
		// 	// printf("a->data: %d\n", (*a)->data);
		// 	// printf("a->next->data: %d\n", (*a)->next->data);
		// 	if ((*a)->data > (*a)->next->data)
		// 		ft_sa(a);
		// }
		ft_re_init_index(*a);
		// ft_print_stack(a, "a");
		// printf("\n");
		++i;
	}
}
