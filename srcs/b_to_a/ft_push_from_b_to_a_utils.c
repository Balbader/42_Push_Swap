/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a_utils.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:15:53 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/12 09:15:55 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_cmds	*ft_initial_op_arr(t_cmds *op_lst)
// {
// }

void	ft_init_op_lst(t_cmds *op_lst, char *str)
{
	op_lst = NULL;
	op_lst = ft_create_cmd_node(str);
	ft_free_op_lst(&op_lst);
}
