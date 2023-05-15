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

char	**ft_initial_op_arr(char **op_arr)
{
	op_arr = (char **)malloc(sizeof(char *) * 10000);
	if (!op_arr)
		return (NULL);
	return (op_arr);
}

void	ft_init_op_arr(char **op_arr)
{
	char	*str[5] = {"hello", "world", "I", "am", "basil"};
	int		i;
	int		j;

	op_arr = ft_initial_op_arr(op_arr);
	i = 0;
	while (i < 5)
	{
		op_arr[i] = (char *)malloc(sizeof(char) * ft_strlen(str[i]));
		if (!op_arr)
			return ;
		j = 0;
		while (j < ft_strlen(str[i]))
		{
			op_arr[i] = str[i];
			++j;
		}
		++i;
	}
	op_arr[i] = "\0";
	for (int i = 0; i < 5; ++i) {
		printf("%s ", op_arr[i]);
	}
}
