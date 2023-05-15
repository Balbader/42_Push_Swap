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

void	ft_free_arr(char **arr)
{
	int	arr_size;
	int	i;

	arr_size = sizeof(**arr) / sizeof(*arr[0]);
	printf("arr_size: %d\n", arr_size);
	i = 0;
	while (i < arr_size)
	{
		free(arr[i]);
		++i;
	}
}
char	**ft_initial_op_arr(char **op_arr)
{
	op_arr = (char **)malloc(sizeof(char *) * 10000);
	if (!op_arr)
		return (NULL);
	return (op_arr);
}

void	ft_init_op_arr(char **op_arr, char *str, int i)
{
	int		j;

	op_arr = ft_initial_op_arr(op_arr);
	op_arr[i] = (char *)malloc(sizeof(char) * ft_strlen(&str[i]));
	printf("\nstr[i] len: %d\n", ft_strlen(&str[i]));
	if (!op_arr)
		return ;
	j = 0;
	while (j < ft_strlen(&str[i]))
	{
		op_arr[j] = &str[j];
		++j;
	}
	op_arr[j] = "\0";
	printf("%s ", op_arr[i]);
	printf("\n");
}
