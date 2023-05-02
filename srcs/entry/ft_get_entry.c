/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_entry.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:15:52 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/02 16:15:54 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_entry(char *av)
{
	long int	elem;

	if (!av)
		return (0);
	ft_check_entry(av);
	elem = ft_convert_entry(av);
	if (elem > INT_MAX || elem < INT_MIN)
	{
		ft_putstr_fd("error\n", 2);
		exit(1);
	}
	return (elem);
}
