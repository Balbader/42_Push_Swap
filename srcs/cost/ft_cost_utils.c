/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 10:26:15 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/06 10:26:18 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Returns an array contining the cost of moving each node
 * to the top of the stack
*/
int	*ft_get_cost_arr(t_list **stack)
{
	t_list	*tmp;
	int		i;
	int		*cost_arr;
	int		stack_size;

	ft_re_init_index(*stack);
	tmp = (*stack);
	stack_size = ft_get_stack_size(stack);
	cost_arr = (int *)malloc(sizeof(int) * stack_size);
	if (!cost_arr)
		return (0);
	i = 0;
	while (i < stack_size)
	{
		cost_arr[i] = ft_calculate_node_cost(&tmp, i + 1, stack_size);
		tmp = tmp->next;
		++i;
	}
	ft_free_stack(&tmp);
	return (cost_arr);
}

/*
 * Retruns an array containing the final position of each node
 * in a sorted stack
*/
int	*ft_get_pos_arr(t_list **stack)
{
	t_list	*tmp;
	int		*pos_arr;
	int		i;
	int		stack_size;

	ft_re_init_index(*stack);
	tmp = (*stack);
	stack_size = ft_get_stack_size(stack);
	pos_arr = (int *)malloc(sizeof(int) * stack_size);
	if (!pos_arr)
		return (0);
	i = 0;
	while (i < stack_size)
	{
		pos_arr[i] = tmp->pos;
		++i;
		tmp = tmp->next;
	}
	ft_free_stack(&tmp);
	return (pos_arr);
}
