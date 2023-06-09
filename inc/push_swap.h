/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:08:14 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/02 16:08:16 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <time.h>

# define RR 1
# define RRA_RB 2
# define RA_RRB 3
# define RRR 4

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}				t_list;

/* ACTIONS */
void		ft_push_node(t_list **src, t_list **dest);
void		ft_rotate(t_list **stack);
void		ft_reverse_rotate(t_list **stack);
void		ft_swap(t_list **stack);

/* COMBOS */
void		ft_do_rr(t_list **a, t_list **b, int a_idx, int b_idx);
void		ft_do_rra_rb(t_list **a, t_list **b, int a_idx, int b_idx);
void		ft_do_ra_rrb(t_list **a, t_list **b, int a_idx, int b_idx);
void		ft_do_rrr(t_list **a, t_list **b, int a_idx, int b_idx);

/* COST */
int			ft_min(int x, int y);
int			ft_max(int x, int y);
int			ft_find_cheapest_cost(t_list *a, t_list *b,
				int big_bro_idx, int lil_bro_idx);
int			ft_find_cheapest_move(t_list *a, t_list *b,
				int big_bro_idx, int lil_bro_idx);
t_list		*ft_find_cheapest_node(t_list *a, t_list *b);

/* ENTRY */
int			ft_get_entry(char *av);
int			ft_check_entry(char *av);
void		ft_look_for_doubles(int *arr, int arr_size);
long int	ft_convert_entry(const char *av);

/* OPERATIONS */
void		ft_pa(t_list **stack_b, t_list **stack_a);
void		ft_pb(t_list **stack_a, t_list **stack_b);
void		ft_ra(t_list **stack_a);
void		ft_rb(t_list **stack_b);
void		ft_rr(t_list **stack_a, t_list **stack_b);
void		ft_rra(t_list **stack_a);
void		ft_rrb(t_list **stack_b);
void		ft_rrr(t_list **stack_a, t_list **stack_b);
void		ft_sa(t_list **stack_a);
void		ft_sb(t_list **stack_b);
void		ft_ss(t_list **stack_a, t_list **stack_b);

/* SMALL SORT */
t_list		*ft_sort_3(t_list *a);
void		ft_small_sort(t_list *a, t_list *b, int a_size);
void		ft_sort_4(t_list *a, t_list *b);
void		ft_push_smallest_node_4(t_list **a,
				t_list **b, int smallest_node_index);
void		ft_sort_5(t_list *a, t_list *b);

/* SORTING */
void		ft_do_cheapest_move(t_list **a, t_list **b);
void		ft_sort(t_list **a, t_list **b);

/* STACK */
int			ft_find_biggest_data(t_list *stack);
int			ft_find_biggest_idx(t_list *stack);
int			*ft_copy_stack_to_arr(t_list **stack, int stack_size, int *arr);
int			ft_find_smallest_data(t_list *stack);
int			ft_find_smallest_idx(t_list *stack);
int			ft_get_stack_size(t_list **stack);
int			ft_get_big_bro_idx(t_list *a, int incoming_data);
int			ft_small_stack_is_sorted(t_list *stack);
int			ft_stack_is_sorted(t_list *stack);
void		ft_add_new_tail(t_list **lst, t_list *node);
void		ft_add_new_head(t_list **lst, t_list *node);
void		ft_free_stack(t_list **stack);
void		ft_re_init_index(t_list *stack);
void		ft_reorder_a(t_list **a);
void		ft_print_stack(t_list **stack, char *name);
t_list		*ft_create_node(int data, int index);
t_list		*ft_get_last_node(t_list *stack);
t_list		*ft_get_before_last_node(t_list *stack);
t_list		*ft_init_stack(t_list *stack_a, int *entries, int ac);
t_list		*ft_find_biggest_node(t_list *stack);
t_list		*ft_find_smallest_node(t_list *stack);

/* UTILS */
int			ft_arr_is_sorted(int *arr, int arr_size);
int			ft_isdigit(char c);
int			ft_strlen(const char *str);
int			ft_arr_is_sorted(int *arr, int arr_size);
char		*ft_strcpy(char *src, char *dest);
void		ft_putstr_fd(char *str, int fd);
void		ft_print_err(t_list **stack_a, t_list **stack_b);
void		ft_sort_arr(int *arr, int arr_size);

#endif
