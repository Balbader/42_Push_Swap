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
	t_list	*tmp_a;
	t_list	*tmp_b;
	int		rr;
	int		rrr;
	int		ra_rrb;
	int		rra_rb;
	int		a_size;
	int		b_size;
}				t_data;

int	ft_find_cheapest_cost(t_list **a, t_list **b,
						int big_bro_idx, int lil_bro_idx)
{
	t_data	data;

	data.tmp_a =(*a);
	data.tmp_b =(*b);
	data.a_size = ft_get_stack_size(&data.tmp_a);
	data.b_size = ft_get_stack_size(&data.tmp_b);
	data.rr = ft_max(big_bro_idx, lil_bro_idx);
	data.rrr = ft_max(data.a_size - big_bro_idx, data.b_size - lil_bro_idx) + 1;
	data.ra_rrb = big_bro_idx +  data.b_size - lil_bro_idx + 1;
	data.rra_rb = lil_bro_idx + data.a_size - big_bro_idx + 1;
	return (ft_min(ft_min(data.rr, data.rrr),
			ft_min(data.ra_rrb, data.rra_rb)));
}
