/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:35:25 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/22 23:35:27 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*ft_init_entries_arr(int ac, char **av, int *arr)
{
	int	i;
	int	j;

	arr = NULL;
	arr = (int *)malloc(sizeof(int) * (ac - 1));
	if (!arr)
		return (0);
	j = 1;
	i = 0;
	while (i < ac - 1)
	{
		arr[i] = ft_get_entry(av[j]);
		++i;
		++j;
	}
	return (arr);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		*entries_arr;

	a = NULL;
	b = NULL;
	entries_arr = NULL;
	entries_arr = ft_init_entries_arr(ac, av, entries_arr);
	a = ft_init_stack(a, entries_arr, ac - 1);
	ft_push_first_2(&a, &b);
	ft_re_init_index(a);
	// ft_print_stack(&a, "a");
	printf("\n");
	ft_push_from_a_to_b(&a, &b);
	ft_re_init_index(b);
	ft_print_stack(&b, "b");
	ft_free_stack(&a);
	free(entries_arr);
	ft_free_stack(&b);
	return (0);
}
