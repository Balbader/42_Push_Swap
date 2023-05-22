/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_cheapest_cost.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 07:57:55 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/22 07:57:57 by baalbade         ###   ########.fr       */
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

int	ft_find_cheapest_cost(t_list **a, t_list **b,
						int big_bro_idx, int lil_bro_idx)
{
	t_data	data;

	data.last_a = ft_get_last_node(*a);
	data.last_b = ft_get_last_node(*b);
	data.ra_rb = ft_max(big_bro_idx, lil_bro_idx);
	data.rra_rrb = ft_max(data.last_a->index - big_bro_idx,
			data.last_b->index - lil_bro_idx) + 1;
	data.ra_rrb = big_bro_idx + data.last_b->index - lil_bro_idx + 1;
	data.rra_rb = lil_bro_idx + data.last_a->index - big_bro_idx + 1;
	return (ft_min(ft_min(data.ra_rb, data.rra_rb),
			ft_min(data.ra_rrb, data.rra_rb)));
}
