# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 18:27:40 by adardour          #+#    #+#              #
#    Updated: 2023/02/25 22:59:03 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


RED=\033[0;31m
NC=\033[0m

NAME = push_swap.a
NAME_BONUS = checker.a
EXECUTABLE=push_swap

BONUS_HEADER = ./bonus/bonus.h

SRCS = push_swap.c get_length.c str_to_long.c \
push_to_stack.c push.c  check_if_sorted.c start_sorting.c is_empty.c peek.c pop.c \
get_the_head.c   get_size.c \
check_is_smaller.c sort_less_numbers.c check_is_larger.c \
get_the_value.c copy_stack.c get_index_of_larger_number.c \
get_index_of_smaller.c send_argument_to_stack.c sort_3_numbers.c get_position.c free_stack.c free_things.c \
index_the_stack.c get_lis.c count_instructions.c complete_sort.c\
./moves/mini_move_mid.c ./moves/mini_move_negative.c ./moves/mini_move_positive.c \
./operations/swap_a.c ./operations/swap_b.c ./operations/push_to_stack_a.c ./operations/push_to_stack_b.c ./operations/rotate_a.c ./operations/rotate_b.c\
./operations/rotate_reverse_b.c ./operations/rotate_reverse_a.c ./operations/rotate_rr.c ./operations/rotate_r.c \
./utils/best_element.c ./utils/get_increased.c ./utils/includes.c ./utils/not_in_lis.c ./utils/init_lis.c ./utils/perform_lis.c \
./parse/check_duplication.c ./parse/check_if_grater.c ./parse/is_integers.c ./parse/parse.c ./parse/check_numbers.c \
./execute_instructions/in_the_top.c ./execute_instructions/in_the_bottom.c ./execute_instructions/top_and_bottom.c ./execute_instructions/bottom_and_top.c \
./positions/small_or_big_element.c ./positions/element_ranged.c ./positions/element_not_ranged.c


BONUS = ./bonus/check_instruction.c ./bonus/checker.c ./bonus/parse_argument_checker.c ./bonus/rotate_a_bonus.c ./bonus/rotate_reverse_bonus_a.c \
./bonus/swap_bonus_a.c ./bonus/push_to_stack_bonus_a.c ./bonus/rotate_b_bonus.c ./bonus/rotate_reverse_bonus_b.c ./bonus/push_to_stack_bonus_b.c \
./bonus/sa_sb.c ./bonus/ra_rb.c ./bonus/r_ra_r_rb.c ./bonus/swap_bonus_b.c 

CC		= cc
RM		= rm -rf
CFLAGS = -Wall -Wextra -Werror -g

OBJS = ${SRCS:%.c=%.o}
OBJSBONUS = ${BONUS:%.c=%.o}

all:	${NAME}

%.o:%.c push_swap.h $(BONUS_HEADER)
		@${CC} ${CFLAGS} -c $< -o ${<:%.c=%.o} 
		@echo [ ✅ ] ${<:%.c=%.o} 
		
$(NAME): ${OBJS} 
		@ar rcs ${NAME} ${OBJS}
		@cd ./libft && make
		@${CC} push_swap.c -o push_swap libft/libft.a push_swap.a
		@echo  "[ ✅ EXECUTABLE = ]" "$(RED)${EXECUTABLE}$(NC)"

bonus:	${OBJS} ${OBJSBONUS} $(NAME)
		ar rcs ${NAME_BONUS} ${OBJSBONUS}
		@mv ${NAME_BONUS} ./bonus
		@cd bonus && cd get_next_line && make
		@cd bonus && ${CC} checker.c -o checker ../libft/libft.a ../push_swap.a checker.a ./get_next_line/get_next_line.a ./get_next_line/get_next_line_utils.c
		mv bonus/checker ./

clean:
		@${RM}  ${OBJS} 
		@cd bonus && rm -rf *.o 
		@cd libft && rm -rf *.o 
		@cd bonus && cd get_next_line && rm -rf *.o *.a

fclean:	clean
		@${RM} ${NAME} 
		@rm -rf push_swap
		@cd bonus && rm -rf  *.a checker
		@cd libft && rm -rf *.a 
		
		

re:		fclean all