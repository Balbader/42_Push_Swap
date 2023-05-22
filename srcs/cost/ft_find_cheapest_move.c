/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_cheapest_move.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 08:04:11 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/22 08:04:14 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct s_data
{
	t_list	*last_a;
	t_list	*last_b;
	int		ra_rb;
	int		rra_rrb;
	int		ra_rrb;
	int		rra_rb;
}				t_data;

static void	ft_free_data(t_data *data)
{
	free(data->last_a);
	free(data->last_b);
}

int	ft_find_cheapest_move(t_list **a, t_list **b,
						int big_bro_idx, int lil_bro_idx)
{
	t_data	data;

	ft_re_init_index(*a);
	ft_re_init_index(*b);
	data.last_a = NULL;
	data.last_b = NULL;
	data.last_a = ft_get_last_node(*a);
	data.last_b = ft_get_last_node(*b);
	data.ra_rb = ft_max(big_bro_idx, lil_bro_idx);
	// printf("last_a>%p, last_b>%p\n", data.last_a, data.last_b);
	data.rra_rrb = ft_max(data.last_a->index - big_bro_idx, data.last_b->index - lil_bro_idx) + 1;
	data.ra_rrb = big_bro_idx + data.last_b->index - lil_bro_idx + 1;
	data.rra_rb = lil_bro_idx + data.last_a->index - big_bro_idx + 1;
	if (data.ra_rb <= data.rra_rb && data.ra_rb <= data.rra_rrb
		&& data.ra_rb <= data.ra_rrb)
		return (ft_free_data(&data), RA_RB);
	if (data.rra_rb <= data.ra_rb && data.rra_rrb <= data.rra_rb
		&& data.rra_rrb <= data.ra_rrb)
		return (ft_free_data(&data), RRA_RRB);
	if (data.ra_rrb <= data.ra_rb && data.ra_rrb <= data.rra_rrb
		&& data.ra_rrb <= data.rra_rb)
		return (ft_free_data(&data), RA_RRB);
	return (ft_free_data(&data), RRA_RB);
}
