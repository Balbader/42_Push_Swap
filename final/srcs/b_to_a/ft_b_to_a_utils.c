/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_to_a_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:26:32 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/13 13:26:50 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_cost_and_rotate(int cost, t_list **b)
{
	int	i;

	if (cost < 0)
	{
		i = 0;
		cost *= -1;
		while (i < cost)
		{
			ft_rrb(b);
			++i;
		}
	}
	if (cost > 0)
	{
		i = 0;
		while (i < cost)
		{
			ft_rb(b);
			++i;
		}
	}
}

void	ft_push_cheapest(t_list **a, t_list **b, int cheapest_idx)
{
	int	cost;

	cost = ft_calculate_cost(b, cheapest_idx);
	ft_check_cost_and_rotate(cost, b);
	ft_pa(a, b);
}

/*
 * NOTE: The following function needs to be used as the 2nd action to occur in
 * 		 both "ft_push_biggest" and "ft_push_next_biggest".
 *
 * IMPORTANT:
* 			After using ft_push_cheapest in either function,
* 			b_size will be -1
* 			Therefore  based on which node will be pushed first, we have to store
* 			the value of the node to be pushed in 2nd position in order to
* 			retrieve it after pushing the first node to 'a'.
*
 * 1. find the position of the node left to push in b
 * 2. bring that node to the top of b
 * 3. push the node to a
*/
void	ft_push_node_to_a(t_list **a, t_list **b, int node_value)
{
	int	cost;

}

void	ft_push_biggest(t_list **a, t_list **b, int big_idx, int next_idx)
{
	printf("\nft_push_biggest:\n");
	printf("big idx: %d\n", big_idx);
	printf("next idx: %d\n", next_idx);
	ft_push_cheapest(a, b, big_idx);
	ft_re_init_index(*b);
	ft_push_node_to_a(a, b, next_idx);
	ft_re_init_index(*b);
	ft_re_init_index(*a);
	ft_print_stack(a, "a");
}

void	ft_push_next_biggest(t_list **a, t_list **b, int next_idx, int big_idx)
{
	printf("\nft_push_next_biggest:\n");
	printf("next idx: %d\n", next_idx);
	printf("big idx: %d\n", big_idx);
	ft_push_cheapest(a, b, next_idx);
	ft_re_init_index(*b);
	// ft_re_init_index(*a);
	// ft_print_stack(a, "a");
	ft_push_cheapest(a, b, big_idx);
	ft_sa(a);
	ft_re_init_index(*b);
	ft_re_init_index(*a);
	ft_print_stack(a, "a");
}
