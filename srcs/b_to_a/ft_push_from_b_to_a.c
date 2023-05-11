/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:13:08 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/09 10:13:55 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct s_data
{
	int	*a_pos;
	int	*b_pos;
	int	*tot_cost_arr;
	int	*a_pos_to_ra;
	int	b_size;
}				t_data;

static void	ft_free_data(int *d1, int *d2, int *d3, int *d4)
{
	free(d1);
	free(d2);
	free(d3);
	free(d4);
}

// static void	ft_push_to_a(t_list **a, t_list **b)
// {
// }

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	t_data	data;
	int		cheap;

	ft_re_init_index(*a);
	ft_re_init_index(*b);
	ft_print_stack(a, "a");
	ft_print_stack(b, "b");
	printf("\n");
	data.b_size = ft_get_stack_size(b);
	data.a_pos = ft_get_pos_arr(a);
	data.b_pos = ft_get_pos_arr(b);
	data.tot_cost_arr = (int *)malloc(sizeof(int) * data.b_size);
	data.a_pos_to_ra = (int *)malloc(sizeof(int) * data.b_size);
	if (!data.tot_cost_arr || !data.a_pos_to_ra)
		return ;
	data.tot_cost_arr = ft_get_total_cost_arr(a, b, data.tot_cost_arr);
	data.a_pos_to_ra
		= ft_find_big_close_a_node_pos(a, b, data.a_pos, data.b_pos);
	printf("tot_cost_arr[%d]: %d\n", 4, data.tot_cost_arr[4]);
	printf("a_pos_to_ra[%d]: %d\n", 4, data.a_pos_to_ra[4]);
	printf("b_pos[%d]: %d\n", 4, data.b_pos[4]);
	cheap = ft_fetch_cheapest(data.tot_cost_arr, b);
	printf("cheap: %d\n", cheap);
	// printf("tot_cost_arr[%d]: %d\n", cheap, data.tot_cost_arr[cheap]);
	// printf("a_pos_to_ra[%d]: %d\n", cheap, data.a_pos_to_ra[cheap]);
	// printf("b_pos[%d]: %d\n", cheap, data.b_pos[cheap]);
	ft_free_data(data.a_pos, data.b_pos, data.tot_cost_arr, data.a_pos_to_ra);
}
