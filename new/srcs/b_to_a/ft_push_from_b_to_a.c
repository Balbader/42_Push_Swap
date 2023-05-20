/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:14:08 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/11 13:14:10 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_one_idx(t_list **a, int one_idx)
{
	t_list	*tmp;

	ft_re_init_index(*a);
	tmp = (*a);
	one_idx = 0;
	while (tmp)
	{
		if (tmp->pos == 1)
			one_idx = tmp->index;
		tmp = tmp->next;
	}
	ft_free_stack(&tmp);
	return (one_idx);
}

void	ft_reorder_a(t_list **a)
{
	int	one_idx;
	int	a_size;
	int	mid;

	a_size = ft_get_stack_size(a);
	mid = a_size / 2;
	one_idx = 0;
	one_idx = ft_get_one_idx(a, one_idx);
	if (one_idx <= mid)
		ft_do_ra(a, one_idx);
	else if (one_idx > mid)
		ft_do_rra(a, one_idx, a_size);
}

void	ft_init_push_to_a(t_list **a, t_list **b)
{
	int	cheapest_b_idx;
	int	cheapest_b_pos;
	int	big_bro_idx;
	int	big_bro_pos;

	ft_re_init_index(*a);
	ft_re_init_index(*b);
	cheapest_b_idx = 0;
	cheapest_b_pos = 0;
	big_bro_idx = 0;
	big_bro_pos = 0;
	cheapest_b_idx = ft_get_cheapest_b_idx(a, b);
	cheapest_b_pos = ft_get_cheapest_node_pos(b,
										cheapest_b_idx, cheapest_b_pos);
	big_bro_idx = ft_get_big_bro_idx(a, cheapest_b_pos);
	big_bro_pos = ft_get_big_bro_pos(a, big_bro_idx);
	printf("cheapest_b_idx: [%d]\n", cheapest_b_idx);
	printf("cheapest_b_pos: (%d)\n", cheapest_b_pos);
	printf("big_bro_idx: [%d]\n", big_bro_idx);
	printf("big_bro_pos: (%d)\n", big_bro_pos);
	printf("\n");
	ft_check_a_receiver(a, big_bro_idx);
	ft_check_b_sender(b, cheapest_b_idx);
	ft_pa(a, b);
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	while (*b)
		ft_init_push_to_a(a, b);
	ft_reorder_a(a);
}

// void	ft_push_from_b_to_a(t_list **a, t_list **b)
// {
// 	int		b_size;
// 	int		pivot;
// 	int		i;

// 	ft_re_init_index(*b);
// 	// ft_print_stack(b, "b");
// 	b_size = ft_get_stack_size(b);
// 	pivot = 0;
// 	pivot = ft_define_pivot(b, pivot);
// 	i = 0;
// 	while ((*b) && i < pivot)
// 	{
// 		if ((*b)->index <= pivot)
// 			ft_init_push_to_a(a, b);
// 		++i;
// 		if (i == pivot)
// 		{
// 			// printf("--------------------\n");
// 			ft_re_init_index(*a);
// 			ft_re_init_index(*b);
// 			// ft_print_stack(a, "a");
// 			// ft_print_stack(b, "b");
// 			i = 0;
// 		}
// 	}
// 	ft_reorder_a(a);
// }
