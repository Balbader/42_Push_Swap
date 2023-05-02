/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_doubles.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:15:42 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/02 16:15:44 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_doubles(int *arr, int arr_size)
{
	int	i;
	int	j;

	if (!arr)
		return ;
	i = 0;
	while (i < arr_size)
	{
		j = i + 1;
		while (j < arr_size)
		{
			if (arr[i] == arr[j])
			{
				ft_putstr_fd("Error\n", 2);
				exit(1);
			}
			++j;
		}
		++i;
	}
}
