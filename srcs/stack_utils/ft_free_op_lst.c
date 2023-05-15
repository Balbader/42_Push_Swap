/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_op_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:32:50 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/15 15:32:52 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_op_lst(t_cmds **op_lst)
{
	t_cmds	*tmp;

	if (!op_lst || !(*op_lst))
		return ;
	while(*op_lst)
	{
		tmp = (*op_lst)->next;
		free(*op_lst);
		*op_lst = tmp;
	}
	*op_lst = NULL;
}
