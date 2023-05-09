/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_cheapeast_b_node_idx.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:54:37 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/05 13:54:41 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Logic:
 * if incoming_pos is < a_node->pos && a_node->pos is the smallest
 * 		ft_pa(incoming);
 * if incoming_pos is < a_node->pos && a_node->pos is the not smallest
 * 		find a_node->pos that is the smallest && greater && closest to incoming_pos
 * 		ft_ra(a) until a_node is on top of "a"
 * 		ft_pa(incoming);
 * if incoming_pos is > a_node->pos
 * 		find a_node->pos that is the smallest && greater && closest to incoming_pos
 * 		ft_ra(a) until a_node is on top of "a"
 * 		ft_pa(incoming);
*/

// int	ft_find_cheapest_b_node_idx(t_list **a, t_list **b)
// {
// }
