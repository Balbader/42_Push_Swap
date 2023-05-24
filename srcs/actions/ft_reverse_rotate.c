/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:10:48 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/02 16:10:49 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_list **stack)
{
	t_list	*tmp_1;
	t_list	*tmp_2;

	if ((*stack)->next)
	{
		tmp_1 = ft_get_last_node(*stack);
		tmp_2 = *stack;
		while (tmp_2->next->next)
			tmp_2 = tmp_2->next;
		tmp_2->next = NULL;
		ft_add_new_head(stack, tmp_1);
		ft_re_init_index(*stack);
	}
}

// void	ft_reverse_rotate(t_list **stack)
// {
// 	t_list	*tmp;
// 	t_list	*last;
// 	t_list	*before_last;

// 	if (!(*stack))
// 		return ;
// 	tmp = NULL;
// 	last = NULL;
// 	before_last = NULL;
// 	last = ft_get_last_node(*stack);
// 	before_last = ft_get_before_last_node(*stack);
// 	tmp = *stack;
// 	*stack = last;
// 	(*stack)->next = tmp;
// 	before_last->next = NULL;
// }
