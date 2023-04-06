/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:47:16 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 09:47:36 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_list **stack, char *name)
{
	t_list	*temp;
	int		stack_size;

	stack_size = ft_get_stack_size(*stack);
	printf("\nStack from %s - size: %d\n", name, stack_size);
	temp = *stack;
	while (temp)
	{
		printf("[%d] : %d\n", temp->index, temp->data);
		temp = temp->next;
	}
}

// void	ft_print_stack(t_list **stack, char *name)
// {
// 	t_list	*temp;
// 	int		stack_size;

// 	stack_size = ft_get_stack_size(*stack);
// 	printf("Stack %s - size: %d\n", name, stack_size);
// 	temp = *stack;
// 	while (temp)
// 	{
// 		// printf("%d ", temp->data);
// 		printf("%s[%d]: %d\n", name, temp->index, temp->data);
// 		temp = temp->next;
// 	}
// }
