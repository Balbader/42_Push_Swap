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

void	ft_do_ra(t_list **a, int big_bro_idx)
{
	int	i;

	i = 0;
	while (i < big_bro_idx)
	{
		ft_ra(a);
		++i;
	}
}

void	ft_do_rra(t_list **a, int big_bro_idx)
{
	int	i;

	i = 0;
	while (i < big_bro_idx)
	{
		ft_rra(a);
		++i;
	}
}

void	ft_rotate_a(t_list **a, int big_bro_idx)
{
	int	a_size;
	int	mid;

	a_size = ft_get_stack_size(a);
	mid = a_size / 2;
	if (big_bro_idx <= mid)
		ft_do_ra(a, big_bro_idx);
	else if (big_bro_idx > mid)
		ft_do_rra(a, big_bro_idx);
}

void	ft_check_a_receiver(t_list **a, int big_bro_idx)
{
	if ((*a)->index == big_bro_idx)
	{
		printf("a_stack ready to receive!\n");
		printf("a->pos: (%d)\n", (*a)->pos);
		return ;
	}
	else
	{
		ft_rotate_a(a, big_bro_idx);
		printf("a->pos: (%d)\n", (*a)->pos);
		return ;
	}
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	cheapest_b_idx;
	int	cheapest_b_pos;
	int	big_bro_idx;
	int	big_bro_pos;
	int	b_size;

	b_size = ft_get_stack_size(b);
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
	printf("\n");
	printf("big_bro_idx: [%d]\n", big_bro_idx);
	printf("big_bro_pos: (%d)\n", big_bro_pos);
	printf("\n");
	ft_check_a_receiver(a, big_bro_idx);
}
