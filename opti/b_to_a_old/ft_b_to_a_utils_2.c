/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_to_a_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 07:28:53 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/14 07:28:57 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_if_smallest_is_first(t_list **a, t_list **b)
{
	int	next_idx;
	ft_re_init_index(*b);
	next_idx = ft_find_biggest_node_idx(b);
	ft_push_node_to_a(a, b, next_idx);
	printf("\nbefore sa(a)\n");
	ft_print_stack(a, "a");
	ft_re_init_index(*b);
	if ((*a)->next)
	{
		printf("a->data: %d\n", (*a)->data);
		printf("a->next->data: %d\n", (*a)->next->data);
		if ((*a)->data > (*a)->next->data)
			ft_sa(a);
	}
	ft_re_init_index(*a);
	printf("\nafter sa(a)\n");
	ft_print_stack(a, "a");
	ft_re_init_index(*b);
	next_idx = ft_find_biggest_node_idx(b);
	ft_push_node_to_a(a, b, next_idx);
	printf("\nbefore sa(a)\n");
	ft_print_stack(a, "a");
	ft_re_init_index(*b);
	if ((*a)->next)
	{
		printf("a->data: %d\n", (*a)->data);
		printf("a->next->data: %d\n", (*a)->next->data);
		if ((*a)->data > (*a)->next->data)
			ft_sa(a);
	}
	printf("\nafter sa(a)\n");
	ft_re_init_index(*a);
	ft_print_stack(a, "a");
}

void	ft_if_middle_is_first(t_list **a, t_list **b)
{
	int	next_idx;

	ft_re_init_index(*b);
	next_idx = ft_find_biggest_node_idx(b);
	// printf("next_idx: %d\n", next_idx);
	ft_push_node_to_a(a, b, next_idx);
	printf("\nbefore sa(a)\n");
	ft_print_stack(a, "a");
	ft_re_init_index(*b);
	if ((*a)->next)
	{
		printf("a->data: %d\n", (*a)->data);
		printf("a->next->data: %d\n", (*a)->next->data);
		if ((*a)->data > (*a)->next->data)
			ft_sa(a);
	}
	printf("\nafter sa(a)\n");
	ft_re_init_index(*a);
	ft_print_stack(a, "a");
	ft_re_init_index(*b);
	next_idx = ft_find_biggest_node_idx(b);
	// printf("next_idx: %d\n", next_idx);
	ft_push_node_to_a(a, b, next_idx);
	ft_re_init_index(*a);
	ft_print_stack(a, "a");
}

void	ft_if_biggest_is_first(t_list **a, t_list **b)
{
	int	next_idx;

	ft_re_init_index(*b);
	next_idx = ft_find_biggest_node_idx(b);
	// printf("next_idx: %d\n", next_idx);
	ft_push_node_to_a(a, b, next_idx);
	ft_re_init_index(*a);
	ft_print_stack(a, "a");
	ft_re_init_index(*b);
	next_idx = ft_find_biggest_node_idx(b);
	// printf("next_idx: %d\n", next_idx);
	ft_push_node_to_a(a, b, next_idx);
	ft_re_init_index(*a);
	ft_print_stack(a, "a");
}
