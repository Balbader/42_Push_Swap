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
	int	cheapest_lil_bro_pos;
	int	cheapest_lil_bro_idx;
	int	*a_pos;
	int	*b_pos;
	int	*a_cost;
	int	*b_cost;
	int	a_size;
	int	b_size;
}				t_data;

/*
 * Returns an arr with the total cost of moving each b_node to a_stack
*/
int	*ft_get_final_b_cost_arr(t_list **a, t_list **b)
{
	t_data	data;
}
