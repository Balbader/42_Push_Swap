/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:34:36 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/22 23:34:37 by baalbade         ###   ########.fr       */
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
	int				cost;
	struct s_list	*next;
}				t_list;

/* ACTIONS */
void		ft_push_node(t_list **src, t_list **dest);
void		ft_reverse_rotate(t_list **stack);
void		ft_rotate(t_list **stack);
void		ft_swap(t_list **stack);

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

/* COST */
int			*ft_init_a_cost_arr(t_list **a);
int			*ft_init_b_cost_arr(t_list **a, t_list **b);
int			ft_find_closest_b_node_idx(t_list **b, int incoming);
int			*ft_init_cost_arr(t_list **stack);
int			*ft_init_data_array(t_list **stack);
int			*ft_init_idx_array(t_list **stack);
int			*ft_calculate_cost_arr(t_list **a, t_list **b);
int			ft_optimize_cost(int a_cost, int b_cost);
int			ft_check_costs(int a_cost, int b_cost);
int			ft_is_pos(int a_cost, int b_cost);
int			ft_is_neg(int a_cost, int b_cost);
int			*ft_optimized_instructions(int a_cost, int b_cost);
int			*ft_reg_instructions(int a_cost, int b_cost);

/* ENTRY */
int			ft_check_entry(char *av);
int			ft_get_entry(char *av);
void		ft_find_doubles(int *arr, int arr_size);
long int	ft_convert_entry(const char *av);

/* SORTING */
int			ft_check_incoming(t_list **b, int data);
int			ft_find_cheapest_a_node_idx(t_list **a, t_list **b);
int			ft_no_neg(int *res, int a_size);
int			ft_get_biggest_pos_res_idx(int *res, t_list **a);
void		ft_push_first_2(t_list **a, t_list **b);
void		ft_push_from_a_to_b(t_list **a, t_list **b, int a_size);
void		ft_push_from_b_to_a(t_list **a, t_list **b);
void		ft_do_cheapest_a(t_list **a, t_list **b, int a_cost, int b_cost);
void		ft_sort_3(t_list **a);
void		ft_run_opt_instructions(t_list **a, t_list **b,
							int a_cost, int b_cost);
void		ft_run_reg_instructions(t_list **a, t_list **b,
							int a_cost, int b_cost);
void		ft_run_on_single(int loops, t_list **stack, void (*f)(t_list **));
void		ft_run_on_both(int loops, t_list **a, t_list **b,
						void (*f)(t_list **, t_list **));
void		ft_do_a_cost(int a_cost, t_list **a);
void		ft_do_b_cost(int b_cost, t_list **b);
void		ft_opt_pos(t_list **a, t_list **b, int a_cost, int b_cost);
void		ft_opt_neg(t_list **a, t_list **b, int a_cost, int b_cost);
void		ft_re_order_a(t_list **a, int pivot_idx);
void		ft_finalize_a(t_list **a);

/* SORTING UTILS*/
int			ft_a_is_sorted(t_list *a);
int			ft_get_stack_size(t_list *stack);
int			ft_find_middle_node_idx(t_list **stack);
int			ft_find_smallest_node_idx(t_list **stack);
int			ft_find_smallest_node_data(t_list **stack);
int			ft_find_biggest_node_idx(t_list **stack);
int			ft_find_biggest_node_data(t_list **stack);
void		ft_add_new_tail(t_list **lst, t_list *node);
void		ft_free_stack(t_list **stack);
t_list		*ft_create_node(int data, int index);
t_list		*ft_get_before_last_node(t_list *stack);
t_list		*ft_get_last_node(t_list *stack);
t_list		*ft_init_stack(t_list *stack_a, int *entries, int ac);
t_list		*ft_re_init_index(t_list *stack);

/* UTILS */
int			ft_isdigit(char c);
int			ft_strlen(const char *str);
void		ft_putstr_fd(char *str, int fd);
void		ft_print_stack(t_list **stack, char *name);
void		ft_print_err(t_list **stack_a, t_list **stack_b);

#endif
