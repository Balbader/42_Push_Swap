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


/* ENTRY */
int			ft_check_entry(char *av);
int			ft_get_entry(char *av);
void		ft_find_doubles(int *arr, int arr_size);
long int	ft_convert_entry(const char *av);

/* SORTING */
void		ft_push_first_2(t_list **a, t_list **b);
void		ft_sort_3(t_list **a);

/* SORTING UTILS*/
int			ft_define_rotate_count(t_list *stack, int node_to_move_idx);
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
