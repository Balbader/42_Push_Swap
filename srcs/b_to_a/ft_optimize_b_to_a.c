/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optimize_b_to_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:15:52 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/19 13:15:54 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// typedef struct s_data
// {
// 	int		b_size;
// 	int		mid;
// 	int		top_pivot;
// 	int		btm_pivot;
// 	int		pivot;
// }				t_data;

// static void	ft_init_b_data(t_list *b, t_data *data)
// {
// 	data->b_size = ft_get_stack_size(&b);
// 	data->mid = data->b_size / 2;
// 	data->pivot = ft_define_pivot(&b, data->pivot);
// 	data->top_pivot = data->mid + data->pivot;
// 	data->btm_pivot = data->mid - data->pivot;
// 	// printf("\n");
// 	// printf("b_size: %d\n", data->b_size);
// 	// printf("mid: %d\n", data->mid);
// 	// printf("data.pivot: %d\n", data->pivot);
// 	// printf("data.top_pivot: %d\n", data->top_pivot);
// 	// printf("data.btm_pivot: %d\n", data->btm_pivot);
// }

// static void	ft_push_to_b_by_2(t_list **a, t_list **b)
// {
// 	t_data	data;

// 	ft_init_b_data(*b, &data);
// 	while ((*b) && data.b_size > 0)
// 	{
// 		if ((*b)->pos <= data.top_pivot && (*b)->pos >= data.mid)
// 			ft_init_push_to_a(a, b);
// 		else if ((*b)->pos >= data.btm_pivot && (*b)->pos < data.mid)
// 			ft_init_push_to_a(a, b);
// 		ft_rb(b);
// 		--data.b_size;
// 		if (data.b_size == 0)
// 		{
// 			data.b_size = ft_get_stack_size(b);
// 			data.mid = data.b_size / 2;
// 			// printf("b_size: %d\n", data.b_size);
// 			data.top_pivot += data.pivot;
// 			data.btm_pivot += data.pivot;
// 			// printf("top_pivot: %d\n", data.top_pivot);
// 			// printf("btm_pivot: %d\n", data.btm_pivot);
// 		}
// 	}
// }

// void	ft_push_from_b_to_a(t_list **a, t_list **b)
// {
// 	ft_push_to_b_by_2(a, b);
// 	ft_reorder_a(a);
// }
