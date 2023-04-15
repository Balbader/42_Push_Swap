/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 09:18:39 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/11 09:18:40 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <time.h>

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}				t_list;

/* A_TO_B */
int			*ft_get_pivots(t_list **a);
int			*ft_find_pivots_idx(t_list **a, int *pivots_idx);
void		ft_pb_chunks(t_list **a, t_list **b);
t_list		*ft_pre_sort_stack(t_list *rand_stack);

/* ACTIONS */
void		ft_push_node(t_list **src, t_list **dest);
void		ft_reverse_rotate(t_list **stack);
void		ft_rotate(t_list **stack);
void		ft_swap(t_list **stack);

/* B_TO_A */
void		ft_check_cost_and_rotate(int cost, t_list **a, t_list **b);
void		ft_push_biggest(t_list **a, t_list **b, int big_idx);
void		ft_push_big_node_next(t_list **a, t_list **b);
void		ft_push_cheapest(t_list **a, t_list **b, int cheapest_idx);
void		ft_push_from_b_to_a(t_list **a, t_list **b);
void		ft_push_next_biggest(t_list **a, t_list **b, int next_idx);
void		ft_push_next_node_next(t_list **a, t_list **b);

/* COST */
int			ft_calculate_cost(t_list **stack, int node_idx);
int			ft_big_or_next(int big_idx, int next_idx, t_list **stack);


/* OPERATIONS */
void		ft_pa(t_list **b, t_list **a);
void		ft_pb(t_list **a, t_list **b);
void		ft_ra(t_list **a);
void		ft_rb(t_list **b);
void		ft_rr(t_list **a, t_list **b);
void		ft_rra(t_list **a);
void		ft_rrb(t_list **b);
void		ft_rrr(t_list **a, t_list **b);
void		ft_sa(t_list **a);
void		ft_sb(t_list **b);
void		ft_ss(t_list **a, t_list **b);

/* ENTRY */
int			ft_check_entry(char *av);
int			ft_get_entry(char *av);
void		ft_find_doubles(int *arr, int arr_size);
long int	ft_convert_entry(const char *av);

/* SORTING */
void		ft_small_sort(t_list **a, t_list **b, int a_size);
void		ft_sort_3(t_list **stack);
void		ft_sort_4(t_list **a, t_list **b);
void		ft_sort_5(t_list **a, t_list **b);
void		ft_push_smallest_node_4(t_list **a,
				t_list **b, int smallest_node_index);

/* STACK */
int			*ft_copy_stack_to_arr(t_list **stack, int stack_size, int *arr);
int			ft_find_biggest_node_data(t_list **stack);
int			ft_find_biggest_node_idx(t_list **stack);
int			ft_find_next_biggest_node_idx(t_list **stack);
int			ft_find_smallest_node_data(t_list **stack);
int			ft_find_smallest_node_idx(t_list **stack);
int			ft_get_stack_size(t_list **stack);
int			ft_stack_is_sorted(t_list *stack);
void		ft_add_new_tail(t_list **lst, t_list *node);
void		ft_free_stack(t_list **stack);
void		ft_re_init_index(t_list *stack);
t_list		*ft_create_node(int data, int index);
t_list		*ft_init_stack(t_list *stack_a, int *entries, int ac);
t_list		*ft_get_before_last_node(t_list *stack);
t_list		*ft_get_last_node(t_list *stack);

/* UTILS */
int			ft_isdigit(char c);
int			ft_strlen(const char *str);
void		ft_putstr_fd(char *str, int fd);
void		ft_print_err(t_list **stack_a, t_list **stack_b);

/* DELETE */
int			ft_find_next_biggest_node_data(t_list **stack);
void		ft_print_stack(t_list **stack, char *name);

#endif
