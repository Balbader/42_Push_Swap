/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:35:09 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/15 15:35:13 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	dest = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < ft_strlen(src))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
