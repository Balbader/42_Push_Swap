/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_utils_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:14:35 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/12 13:14:38 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct s_data
{
	int	big_bro_pos;
	int	big_bro_idx;
	int	lil_bro_pos; // cheapest_lil_bro_pos
	int	lil_bro_idx; // cheapest_lil_bro_idx
	int	*a_pos;
	int	*b_pos;
	int	*a_cost;
	int	*b_cost;
	int	a_size;
	int	b_size;
}				t_data;

void	ft_get_final_b_cost_arr(t_list **a, t_list **b)
{
	t_data	data;

	ft_re_init_index(*a);
	data.a_pos = NULL;
	data.a_pos = ft_get_pos_arr(a, data.a_pos);
	data.lil_bro_pos = 0;
	data.big_bro_pos = 0;
	data.big_bro_idx = 0;
	data.lil_bro_pos = ft_get_cheapest_lil_bro_pos(b, data.lil_bro_pos);
	data.big_bro_pos = ft_get_big_bro_pos(a, data.a_pos, data.lil_bro_pos);
	data.big_bro_idx = ft_get_incoming_idx(a, data.big_bro_pos,
									data.big_bro_idx);
	printf("data.big_bro_pos: [%d]\n", data.big_bro_pos);
	printf("data.big_bro_idx: [%d]\n", data.big_bro_idx);

}
