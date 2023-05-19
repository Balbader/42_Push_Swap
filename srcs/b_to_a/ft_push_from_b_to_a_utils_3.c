/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a_utils_3.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:33:25 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/19 10:33:27 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_do_rb(t_list **b, int lil_bro_idx)
{
	int	i;

	i = 0;
	while (i < lil_bro_idx)
	{
		ft_rb(a);
		++i;
	}
}

void	ft_do_rrb(t_list **b, int lil_bro_idx)
{
	int	i;

	i = 0;
	while (i < lil_bro_idx)
	{
		ft_rrb(b);
		++i;
	}
}

void	ft_rotate_b(t_list **b, int lil_bro_idx)
{
	int	b_size;
	int	mid;

	b_size = ft_get_stack_size(b);
	mid = b_size / 2;
	if (lil_bro_idx <= mid)
		ft_do_rb(b, lil_bro_idx);
	else if (lil_bro_idx > mid)
		ft_do_rrb(b, lil_bro_idx);
}

void	ft_check_b_sender( t_list **b, int lil_bro_idx)
{
	if ((*b)->index == lil_bro_idx)
	{
		printf("b_stack ready to send!\n");
		printf("b->pos: (%d)\n", (*b)->pos);
		return ;
	}
	else
	{
		ft_rotate_b(b, big_bro_idx);
		printf("b->pos: (%d)\n", (*b)->pos);
		return ;
	}
}
