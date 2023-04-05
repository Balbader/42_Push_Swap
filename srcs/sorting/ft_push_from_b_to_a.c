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
		printf("[%d] : %d, ", temp->index, temp->data);
		temp = temp->next;
		++i;
	}
	printf("\n");
	printf("\n");
}

static void	ft_print_b(t_list **b, char *name)
{
	t_list	*temp;
	int		stack_size;
	int		i;

	stack_size = ft_get_stack_size(*b);
	printf("Stack from %s - size: %d\n", name, stack_size);
	temp = *b;
	i = 0;
	while (temp)
	{
		// printf("%d, ", temp->data);
		printf("%d, ", temp->data);
		temp = temp->next;
		++i;
	}
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
		ft_run_on_single(((a_size - pivot_idx) + 1), a, ft_rra);
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
	int		i;

	res_arr = ft_init_cost_arr(a);
	tmp = NULL;
	tmp = *a;
	i = 0;
	printf("res_arr: incoming - (a->data)\n");
	while (tmp)
	{
		res_arr[i] = incoming - tmp->data;
		printf("[%d] : %d | ", i, res_arr[i]);
		++i;
		tmp = tmp->next;
	}
	printf("\n");
	return (free(tmp), res_arr);
}

/*
	returns the idx where the "greater_closest" to incoming is located in 'a;
*/
int	ft_find_closest_a_node_idx(t_list **a, int incoming)
{
	int	*a_idx_arr;
	int	*res;
	int	closest_res;
	int	closest_idx;
	int	a_size;
	int	i;

	closest_idx = 0;
	closest_res = INT_MIN;
	res = ft_get_greater_arr(a, incoming);
	a_idx_arr = ft_init_idx_array(a);
	a_size = ft_get_stack_size(*a);
	i = 0;
	while (i < a_size)
	{
		if (res[i] < 0 && res[i] > closest_res)
		{
			closest_res = res[i];
			closest_idx = i;
			printf("\n");
			printf("closest_res: %d\n", closest_res);
			printf("closest_idx: %d\n", closest_idx);
			printf("a_idx_arr[%d]: %d\n", closest_idx, a_idx_arr[closest_idx]);
		}
		++i;
	}
	return (free(res), a_idx_arr[closest_idx]);
}

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	i;
	int	b_size;
	int incoming;
	int	just_pushed;
	int	closest_a_node_idx;

	ft_print_b(b, "b");
	printf("\n");
	b_size = ft_get_stack_size(*b);
	i = 0;
	while (i < b_size - 1)
	{
		just_pushed = (*b)->data;
		ft_pa(a, b);
		printf("----------------------------------------------> %d\n", i + 1);
		ft_re_init_index(*a);
		ft_re_init_index(*b);
		ft_print_b(b, "b");
		printf("\n");
		ft_print_b(a, "a");
		printf("\n");
		incoming = (*b)->data;
		printf("just_pushed: %d\n", just_pushed);
		printf("incoming: %d\n", incoming);
		ft_print_a(a, "a");
		closest_a_node_idx = ft_find_closest_a_node_idx(a, incoming);
		ft_re_order_a(a, closest_a_node_idx);
		++i;
	}
	// ft_print_a(a, "a");
	// printf("----------------------------------------------> %d\n", i + 1);
	// ft_re_init_index(*a);
	// ft_re_init_index(*b);
	// incoming = (*b)->data;
	// printf("incoming: %d\n", incoming);
	// closest_a_node_idx = ft_find_closest_a_node_idx(a, incoming);
	// printf("closest_a_node_idx: %d\n", closest_a_node_idx);
	// ft_re_order_a(a, closest_a_node_idx);
	// ft_pa(a, b);
}
