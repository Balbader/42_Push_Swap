
############
#   NAME   #
############
NAME				:=	push_swap

##################
#   SRCS FILES	 #
##################
A_TO_B_DIR			:=	a_to_b/
A_TO_B_FILES		:=	\
						ft_assign_pos.c \
						ft_pre_sort_stack.c \
						ft_push_from_a_to_b.c
A_TO_B				:=	$(addprefix $(A_TO_B_DIR), $(A_TO_B_FILES))

ACTIONS_DIR			:=	actions/
ACTIONS_FILES		:=	\
						ft_push_node.c \
						ft_reverse_rotate.c \
						ft_rotate.c \
						ft_swap.c
ACTIONS				:=	$(addprefix $(ACTIONS_DIR), $(ACTIONS_FILES))

B_TO_A_DIR			:=	b_to_a/
B_TO_A_FILES		:=	\
						ft_push_from_b_to_a.c \
						ft_push_from_b_to_a_utils.c
B_TO_A				:=	$(addprefix $(B_TO_A_DIR), $(B_TO_A_FILES))

COST_DIR			:=	cost/
COST_FILES			:=	\
						ft_calculate_node_cost.c \
						ft_cost.c \
						ft_cost_utils.c \
						ft_find_biggest_closest_a_node_idx.c \
						ft_find_cheapest_b_node_idx.c \
						ft_get_total_cost_arr.c
COST				:=	$(addprefix $(COST_DIR), $(COST_FILES))

ENTRY_DIR			:=	entry/
ENTRY_FILES			:=	\
						ft_check_entry.c \
						ft_convert_entry.c \
						ft_get_entry.c \
						ft_find_doubles.c
ENTRY				:=	$(addprefix $(ENTRY_DIR), $(ENTRY_FILES))

OPER_DIR			:=	operations/
OPER_FILES			:=	\
						ft_pa.c ft_pb.c \
						ft_ra.c ft_rb.c ft_rr.c \
						ft_rra.c ft_rrb.c ft_rrr.c \
						ft_sa.c ft_sb.c ft_ss.c
OPER				:=	$(addprefix $(OPER_DIR), $(OPER_FILES))

SMALL_SORT_DIR		:=	small_sort/
SMALL_SORT_FILES	:=	\
						ft_small_sort.c \
						ft_sort_3.c \
						ft_sort_4.c \
						ft_sort_5.c
SMALL_SORT			:=	$(addprefix $(SMALL_SORT_DIR), $(SMALL_SORT_FILES))

STACK_DIR			:=	stack/
STACK_FILES			:=	\
						ft_find_first_big_data.c \
						ft_find_first_big_idx.c \
						ft_find_second_big_data.c \
						ft_find_second_big_idx.c \
						ft_find_third_big_data.c \
						ft_find_third_big_idx.c \
						ft_find_smallest_node_data.c \
						ft_find_smallest_node_idx.c
STACK				:=	$(addprefix $(STACK_DIR), $(STACK_FILES))

STACK_UTILS_DIR		:=	stack_utils/
STACK_UTILS_FILES	:=	\
						ft_add_new_tail.c \
						ft_copy_stack_to_arr.c \
						ft_create_node.c \
						ft_free_stack.c \
						ft_get_before_last_node.c \
						ft_get_last_node.c \
						ft_get_stack_size.c \
						ft_init_stack.c \
						ft_print_stack.c \
						ft_re_init_index.c \
						ft_stack_is_sorted.c
STACK_UTILS			:=	$(addprefix $(STACK_UTILS_DIR), $(STACK_UTILS_FILES))

UTILS_DIR			:=	utils/
UTILS_FILES			:=	\
						ft_arr_is_sorted.c \
						ft_isdigit.c \
						ft_print_err.c \
						ft_putstr_fd.c \
						ft_sort_arr.c \
						ft_strlen.c
UTILS				:=	$(addprefix $(UTILS_DIR), $(UTILS_FILES))

###################
#   INGREDIENTS	  #
###################
INCS				:=	./inc/

SRCS_DIR			:=	./srcs/
SRCS				:=	\
						$(A_TO_B) \
						$(ACTIONS) \
						$(B_TO_A) \
						$(COST) \
						$(ENTRY) \
						$(OPER) \
						$(SMALL_SORT) \
						$(STACK) \
						$(STACK_UTILS) \
						$(UTILS) \
						main.c
SRCS        		:=	$(SRCS:%=$(SRCS_DIR)/%)

BUILD_DIR			:=	.build
OBJS        		:=	$(SRCS:$(SRCS_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS        		:=	$(OBJS:.o=.d)

CC					:=	cc
CFLAGS				:=	-Wall -Wextra -Werror -g3
IFLAGS				:=	$(addprefix -I, $(INCS))

################
#   UTENSILS   #
################
RM					:=	rm
RMFLAGS				:=	-r -f
MAKEFLAGS   		+=	--no-print-directory
DIR_DUP     		= 	mkdir -p $(@D)

######################
#   COLORS DISPLAY   #
######################
RED					:=	'\033[0;31m'
GREEN				:=	'\033[1;32m'
ORANGE				:=	'\033[0;33m'
YELLOW				:=	'\033[1;33m'
NC					:=	'\033[0m'

###############
#   RECIPES   #
###############
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
	@echo $(GREEN) "--> $(NAME) COMPILED !" $(NC)" \n"

$(BUILD_DIR)/%.o: $(SRCS_DIR)/%.c
	@echo $(YELLOW) "COMPILING:" $(NC) $<
	$(DIR_DUP)
	$(CC) $(CFLAGS) $(IFLAGS) -c -o $@ $<
	@echo $(GREEN) "CREATED:" $(NC) $@ $(NC) "\n"

-include $(DEPS)

clean:
	$(RM) $(RMFLAGS) $(BUILD_DIR) $(DEPS)

fclean:
	$(MAKE) clean
	$(RM) $(RMFLAGS) $(NAME)
	@echo $(GREEN) "Successfully removed:" $(NC) $(NAME) $(NC) "\n"

re:
	$(MAKE) fclean
	$(MAKE) all

############
#   SPEC   #
############
.PHONY: all clean fclean re
.SILENT:
