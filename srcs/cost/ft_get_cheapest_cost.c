/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_cheapest_cost.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 07:52:32 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/20 07:52:34 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct s_data
{
	int	a_size;
	int	b_size;
	int	cost_rarb;
	int	cost_rrarrb;
	int	cost_rarrb;
	int	cost_rrarb;
}				t_data;

int	ft_get_cheapest_cost(t_list **a, t_list **b,
						int big_bro_idx, int lil_bro_idx)
{
	t_data	data;
}
