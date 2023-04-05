/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:10:26 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/04 11:10:50 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_print_a(t_list **a, char *name)
{
	t_list	*temp;
	int		stack_size;
	int		i;

	stack_size = ft_get_stack_size(*a);
	printf("\nStack from %s - size: %d\n", name, stack_size);
	temp = *a;
	i = 0;
	while (temp)
	{
		printf("%d, ", temp->data);
		temp = temp->next;
		++i;
	}
	printf("\n");
	printf("\n");
}

void	ft_re_order_a(t_list **a, int pivot_idx)
{
	int	mid;
	int	a_size;

	a_size = ft_get_stack_size(*a);
	mid = a_size / 2;
	if (pivot_idx <= mid)
		ft_run_on_single(pivot_idx - 1, a, ft_ra);
	if (pivot_idx > mid)
		ft_run_on_single((a_size - pivot_idx) + 1, a, ft_rra);
}

/*
	if incoming is greater than just_pushed, we need to find the a_node that is
	greater && closest to incoming and bring it to the top of 'a'

	returns an arr with the result of the equation:
	(b_node_data - (*a)->data) for each a_node
*/
static int	*ft_get_greater_arr(t_list **a, int incoming)
{
	t_list	*tmp;
	int		*res_arr;
	int		res;
	int		i;

	res_arr = ft_init_cost_arr(a);
	res = 0;
	tmp = NULL;
	tmp = *a;
	i = 0;
	while (tmp)
	{
		res = incoming - tmp->data;
		printf("res: %d\n", res);
		res_arr[i] = res;
		++i;
		tmp = tmp->next;
	}
	return (free(tmp), res_arr);
}

/*
	returns the idx where the "lesser_closest" to incoming is located in 'b'
*/
int	ft_find_closest_a_node_idx(t_list **a, int incoming)
{
	int	*a_idx_arr;
	int	*res;
	int	closest_res;
	int	closest_idx;
	int	i;

	closest_idx = 0;
	closest_res = INT_MIN;
	res = ft_get_greater_arr(a, incoming);
	a_idx_arr = ft_init_idx_array(a);
	i = 0;
	while (res[i])
	{
		if (res[i] < 0 && res[i] > closest_res)
		{
			closest_res = res[i];
			closest_idx = i;
		}
		++i;
	}
	// ft_print_a(a, "a");
	// printf("closest_res: %d\n", closest_res);
	return (free(res), a_idx_arr[closest_idx]);
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	i;
	int	b_size;
	int	just_pushed;
	int incoming;
	int	closest_a_node_idx;

	ft_print_stack(b, "b");
	// ft_pa(a, b);
	b_size = ft_get_stack_size(*b);
	incoming = (*b)->data;
	i = 0;
	// while (i < b_size)
	while (i < 10)
	// while (i < b_size - 1)
	{
		incoming = (*b)->data;
		ft_pa(a, b);
		printf("===================================> %d\n", i);
		ft_re_init_index(*a);
		ft_re_init_index(*b);
		ft_print_stack(b, "b");
		just_pushed = (*a)->data;
		printf("incoming: %d\n", incoming);
		closest_a_node_idx = ft_find_closest_a_node_idx(a, incoming);
		printf("closest_a_idx: %d\n", closest_a_node_idx);
		ft_re_order_a(a, closest_a_node_idx);
		printf("just_pushed: %d\n", just_pushed);
		ft_print_a(a, "a");
		// ft_pa(a, b);
		// incoming = (*b)->data;
		++i;
	}
	// printf("===================================> %d\n", i);
	// ft_re_init_index(*a);
	// ft_re_init_index(*b);
	// // ft_print_stack(b, "b");
	// incoming = (*b)->data;
	// just_pushed = (*a)->data;
	// printf("incoming: %d\n", incoming);
	// printf("just_pushed: %d\n", just_pushed);
	// closest_a_node_idx = ft_find_closest_a_node_idx(a, incoming);
	// ft_re_order_a(a, closest_a_node_idx);
	// ft_pa(a, b);
}
