
############
#   NAME   #
############
NAME				:=	push_swap

##################
#   SRCS FILES	 #
##################
ACTIONS_DIR			:=	actions/
ACTIONS_FILES		:=	\
						ft_push_node.c \
						ft_reverse_rotate.c \
						ft_rotate.c \
						ft_swap.c
ACTIONS				:=	$(addprefix $(ACTIONS_DIR), $(ACTIONS_FILES))

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

SORTING_DIR			:=	sorting/
SORTING_FILES		:=	\
						ft_small_sort.c \
						ft_sort_3.c \
						ft_sort_4.c \
						ft_sort_5.c
SORTING				:=	$(addprefix $(SORTING_DIR), $(SORTING_FILES))

STACK_DIR			:=	stack/
STACK_FILES			:=	\
						ft_add_new_tail.c \
						ft_create_node.c \
						ft_find_biggest_node_data.c \
						ft_find_biggest_node_idx.c \
						ft_find_smallest_node_data.c \
						ft_find_smallest_node_idx.c \
						ft_free_stack.c \
						ft_get_before_last_node.c \
						ft_get_last_node.c \
						ft_get_stack_size.c \
						ft_init_stack.c \
						ft_re_init_index.c \
						ft_stack_is_sorted.c
STACK				:=	$(addprefix $(STACK_DIR), $(STACK_FILES))

UTILS_DIR			:=	utils/
UTILS_FILES			:=	\
						ft_isdigit.c \
						ft_print_err.c \
						ft_print_stack.c \
						ft_putstr_fd.c \
						ft_strlen.c
UTILS				:=	$(addprefix $(UTILS_DIR), $(UTILS_FILES))

###################
#   INGREDIENTS	  #
###################
INCS				:=	./inc/

SRCS_DIR			:=	./srcs/
SRCS				:=	\
						$(ACTIONS) \
						$(ENTRY) \
						$(OPER) \
						$(SORTING) \
						$(STACK) \
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

###############
#   RECIPES   #
###############
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
	# @echo $(GREEN) "--> $(NAME) COMPILED !" $(NC)" \n"

$(BUILD_DIR)/%.o: $(SRCS_DIR)/%.c
	# @echo $(YELLOW) "COMPILING:" $(NC) $<
	$(DIR_DUP)
	$(CC) $(CFLAGS) $(IFLAGS) -c -o $@ $<
	# @echo $(GREEN) "CREATED:" $(NC) $@ $(NC) "\n"

-include $(DEPS)

clean:
	$(RM) $(RMFLAGS) $(BUILD_DIR) $(DEPS)

fclean:
	$(MAKE) clean
	$(RM) $(RMFLAGS) $(NAME)
	# @echo $(GREEN) "Successfully removed:" $(NC) $(NAME) $(NC) "\n"

re:
	$(MAKE) fclean
	$(MAKE) all

############
#   SPEC   #
############
.PHONY: all clean fclean re
.SILENT:
