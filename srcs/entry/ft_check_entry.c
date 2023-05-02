/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_entry.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:24:19 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/22 23:24:21 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_entry(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (av[i] == '-')
			++i;
		else if (av[i] == '-' && (!ft_isdigit(av[i + 1])))
		{
			ft_putstr_fd("Error\n", 2);
			return (-1);
		}
		else if (!ft_isdigit(av[i]))
		{
			ft_putstr_fd("Error\n", 2);
			return (-1);
		}
		++i;
	}
	return (0);
}
