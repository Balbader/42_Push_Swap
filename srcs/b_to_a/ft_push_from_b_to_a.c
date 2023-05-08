/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:59:42 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/05 13:59:44 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	*ft_get_a_node_to_ra(t_list **a, t_list **b, int *a_node_pos_to_ra)
{
	int	*a_pos_arr;
	// int	b_pos_arr[5] = {22, 32, 14, 16, -321};
	int	*b_pos_arr;
	int	*a_cost_arr;
	int	*b_cost_arr;

	a_pos_arr = NULL;
	a_pos_arr = ft_get_pos_arr(a);
	a_cost_arr = NULL;
	a_cost_arr = ft_get_cost_arr(a);

	b_pos_arr = NULL;
	b_pos_arr = ft_get_pos_arr(b);
	b_cost_arr = NULL;
	b_cost_arr = ft_get_cost_arr(b);

	a_node_pos_to_ra = ft_find_big_close_a_node_idx(a, b, a_pos_arr, b_pos_arr);
	return (free(a_pos_arr), /* free(b_pos_arr), */ free (a_cost_arr),
		free(b_cost_arr), a_node_pos_to_ra);
}

int	*ft_get_a_final_cost_cpy(t_list **a, t_list **b, int b_size,
							int *a_final_cost_cpy)
{
	int *a_node_pos_to_ra;
	int	*a_final_cost;

	a_node_pos_to_ra = NULL;
	a_node_pos_to_ra = ft_get_a_node_to_ra(a, b, a_node_pos_to_ra);
	a_final_cost = NULL;
	a_final_cost = (int *)malloc(sizeof(int) * b_size);
	if (!a_final_cost)
		return (0);
	a_final_cost = ft_get_a_final_cost_arr(a, b, a_node_pos_to_ra, a_final_cost);
	a_final_cost_cpy = ft_cpy_a_final_cost(a_final_cost, b_size,
									a_final_cost_cpy);
	return (free(a_node_pos_to_ra), free(a_final_cost), a_final_cost_cpy);
}

int	*ft_get_final_cost_arr(t_list **a, t_list **b, int b_size,
						int *final_cost_arr)
{
	int	*a_final_cost;
	int *a_node_pos_to_ra;
	int	*b_cost_arr;

	a_node_pos_to_ra = NULL;
	a_node_pos_to_ra = ft_get_a_node_to_ra(a, b, a_node_pos_to_ra);
	a_final_cost = NULL;
	a_final_cost = (int *)malloc(sizeof(int) * b_size);
	if (!a_final_cost)
		return (0);
	b_cost_arr = NULL;
	b_cost_arr = ft_get_cost_arr(b);
	a_final_cost = ft_get_a_final_cost_arr(a, b, a_node_pos_to_ra, a_final_cost);
	final_cost_arr = ft_get_tot_cost(a_final_cost, b_cost_arr, b_size);
	return (free(a_node_pos_to_ra), free(a_final_cost),
		free(b_cost_arr), final_cost_arr);
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	*a_final_cost_cpy;
	int	*final_cost_arr;
	int	cheapest_idx;
	int	b_size;
	int	i;

	b_size = ft_get_stack_size(b);
	a_final_cost_cpy = NULL;
	final_cost_arr = NULL;
	i = 0;
	while (i < 9)
	{
		ft_re_init_index(*b);
		ft_print_stack(b, "b");
		ft_re_init_index(*a);
		ft_print_stack(a, "a");
		b_size = ft_get_stack_size(b);
		a_final_cost_cpy = ft_get_a_final_cost_cpy(a, b, b_size, a_final_cost_cpy);
		final_cost_arr = ft_get_final_cost_arr(a, b, b_size, final_cost_arr);
		cheapest_idx = ft_get_cheapest_idx(final_cost_arr, b_size);
		// for (int i = 0; i < b_size; ++i) {
		// 	printf("a_final_cost_cpy[%d]: %d\n", i, a_final_cost_cpy[i]);
		// }
		printf("\n");
		for (int i = 0; i < b_size; ++i) {
			printf("final_cost_arr[%d]: %d\n", i, final_cost_arr[i]);
		}
		printf("cheapest_idx: %d\n", cheapest_idx);
		printf("\n");
		printf("-----------------------------------------------> %d\n", i + 1);
		ft_set_up_a(a, a_final_cost_cpy, b_size, cheapest_idx);
		ft_set_up_b(b, b_size, cheapest_idx);
		ft_pa(a, b);
		// if ((*a)->pos > (*a)->next->pos)
		// 	ft_sa(a);
		++i;
		printf("\n");
	}
	free(final_cost_arr);
}
