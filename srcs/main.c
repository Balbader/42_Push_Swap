/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 07:14:15 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/03 07:14:17 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_init_entries_arr(int ac, char **av, int *arr)
{
	int	i;
	int	j;

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

void	ft_check_entries(int *arr, int arr_size)
{
	if (ft_arr_is_sorted(arr, arr_size) == 0)
	{
		free(arr);
		exit(1);
	}
	ft_find_doubles(arr, arr_size);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		*entries_arr;

	if (ac < 3)
		return (-1);
	a = NULL;
	b = NULL;
	entries_arr = NULL;
	entries_arr = (int *)malloc(sizeof(int) * (ac - 1));
	if (!entries_arr)
		return (0);
	entries_arr = ft_init_entries_arr(ac, av, entries_arr);
	ft_check_entries(entries_arr, (ac - 1));
	ft_find_doubles(entries_arr, (ac - 1));
	a = ft_init_stack(a, entries_arr, ac - 1);
	free(entries_arr);
	// ft_print_stack(&a, "a");
	if ((ac - 1) <= 5)
		ft_small_sort(&a, &b, ac - 1);
	else
	{
		ft_push_from_a_to_b(&a, &b);
		ft_init_tot_cost_arr(&a, &b);

	}
	// ft_re_init_index(a);
	// ft_print_stack(&a, "a");
	// printf("\n");
	// ft_re_init_index(b);
	// ft_print_stack(&b, "b");
	ft_free_stack(&a);
	ft_free_stack(&b);
	return (0);
}
