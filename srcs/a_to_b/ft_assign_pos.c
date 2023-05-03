/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assign_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:38:44 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/03 11:38:46 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

static t_list	*ft_create_sorted(t_list **a, t_list *sorted)
{
	sorted = (*a);
	ft_pre_sort_stack(sorted);
	return (sorted);
}

void	ft_assign_pos(t_list **a)
{
	t_list	*sorted;

	sorted = NULL;
	sorted = ft_create_sorted(a, sorted);
	ft_print_stack(&sorted, "sorted");
}
