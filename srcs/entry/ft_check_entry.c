/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_entry.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:35:25 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 09:35:30 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_entry(char *av)
{
	int	i;

	if (!av)
		return (0);
	i = 0;
	while (av[i])
	{
		if (av[i] == '-')
			++i;
		if (av[i] == '-' && (!ft_isdigit(av[i + 1])))
		{
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
		if (!ft_isdigit(av[i]))
		{
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
		++i;
	}
	return (0);
}
