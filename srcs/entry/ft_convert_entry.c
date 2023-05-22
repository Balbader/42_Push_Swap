/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_entry.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:15:32 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/02 16:15:34 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_convert_entry(int *res, char *av)
{
	int	sign;

	sign = 1;
	while (*av > 8 && *av < 14 || *av == 32)
		++*av;
	if (*av == '-' || *av == '+')
	{
		if (*av == '-')
			sign *= -1;
		++*av;
		if (!*av)
			return (0);
	}
	*res = 0;
	while (*av >= '0' && *av <= '9')
	{
		if (*res > *res * 10 - 48 + *av
			&& (*res == INT_MAX / 10 && *av == '8' && !av[1] && sign < 0))
			return (0);
		*res = *res * 10 - 48 + *av;
		++*av;
	}
	if (*av)
		return (0);
	return (*res *= sign, 1);
}
