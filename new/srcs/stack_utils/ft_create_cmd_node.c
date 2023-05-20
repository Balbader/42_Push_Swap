/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_cmd_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:49:57 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/15 15:49:59 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_cmds	*ft_create_cmd_node(char *str)
{
	t_cmds	*new_cmd_node;

	new_cmd_node = (t_cmds *)malloc(sizeof(t_cmds));
	if (!new_cmd_node)
		return (NULL);
	new_cmd_node->str = str;
	new_cmd_node->next = NULL;
	return (new_cmd_node);
}
