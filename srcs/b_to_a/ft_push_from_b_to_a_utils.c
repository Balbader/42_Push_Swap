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

void	ft_init_operations_arr(char **op_arr, char *str)
{
	int	i;

	(*op_arr)++ = (char *)malloc(sizeof(char) * ft_strlen(str));
	if (!(*op_arr))
		return ;
	i = 0;
	while (i < ft_strlen(str))
	{
		*op_arr[i] = str[i];
		++i;
	}
}
