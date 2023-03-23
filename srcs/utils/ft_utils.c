/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:54:03 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/23 01:54:10 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

void	ft_putstr_fd(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}

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

void	ft_print_err(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a == NULL)
		ft_free_stack(stack_a);
	if (*stack_b == NULL)
		ft_free_stack(stack_b);
	ft_putstr_fd("Error\n", 2);
	exit (1);
}
