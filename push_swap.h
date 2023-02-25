/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:26:07 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 20:45:45 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <math.h>
# define MAXINT 2147483647
# define MININT -2147483648

typedef struct s_move
{
	int				index_a;
	int				index_b;
	int				number_of_moves;
}					t_move;

typedef struct s_costs
{
	int				index_a;
	int				index_b;
	int				number_of_moves;
}					t_costs;

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	int				position;
	t_costs			costs;
}					t_stack;

typedef struct s_top
{
	struct s_stack	*top;
}					t_top;

typedef struct t_hold
{
	t_stack			*current;
	t_stack			*node;
	int				divide;
	t_stack			*fake;
	int				value_in_position;
	int				medium;
	int				index;
	int				size;
	int				top_number;
	int				middle_number;
	int				head_number;
	char			*result;
	char			**numbers;
	int				i;
	int				j;
	int				duplication;
	int				check_integers;
	int				is_greater;
	t_stack			*new_head;
	t_stack			*new_current;
	char			*tmp;
	size_t			sign;
	size_t			digit;
	int				*number_increased;
	int				length;
}					t_hold;

int					check_duplication(char **numbers, int length);
size_t				get_length(char **numbers);
int					is_integers(char **numbers, int length);
long				str_to_long(const char *str);
int					check_if_grater(char **numbers, int length);
void				push_to_stack(char **numbers, int length, t_top *top);
void				push(int data, t_top *top);
int					check_if_sorted(t_top *top, int length);
void				start_sorting(t_top *top, t_top *temp, int length);
int					is_empty(t_top *top);
int					peek(t_top *top);
void				pop(t_top *top);
void				swap_a(t_top *stack);
void				push_to_stack_a(int data, t_top *top, t_top *temp);
void				rotate_a(t_top *top);
void				push_to_stack_b(int data, t_top *temp, t_top *top);
void				rotate_reverse_a(t_top *top);
int					get_the_head(t_top *top);
void				swap_b(t_top *stack);
void				rotate_b(t_top *top);
int					get_size(t_top *stack);
int					check_is_smaller(int data, t_top *stack);
void				rotate_reverse_b(t_top *top);
void				sort_less_numbers(t_top *stack, t_top *temp, int length);
int					check_is_larger(int data, t_top *top);
void				selection_sort(t_stack *head);
int					get_the_value(t_stack *node, int length);
void				copy_stack_in_array(int *numbers, t_top *stack, int size);
int					get_index_of_larger_number(t_top *top);
int					get_index_of_smallest_number(t_top *top);
void				send_argument_to_stack(int how_much, char **numbers,
						t_top *top);
void				sort_3_numbers(t_top *top);
void				parse_argument(int c, char **v, t_top *temp, t_top *top);
void				sort_3_numbers(t_top *top);
int					get_position(t_top *top, int data);
void				free_stack(t_stack *fake);
void				free_things(char **numbers);
int					check_numbers(char **numbers, int length);
void				index_stack(t_top *top);
int					longest_increasing(t_top *stack, t_hold hold);
void				rotate_rr(t_top *top, t_top *temp);
void				rotate_a_rotate_b(t_top *top, t_top *temp);
void				rotate_r(t_top *top, t_top *temp);
void				init_lis(int *lengths, int size);
int					get_lis(int *numbers, int *lis, int size);
void				get_costs(t_top *stack_a, t_top *stack_b);
int					mini_move_negative(t_stack *stack_b, int size_a,
						int size_b);
int					mini_move_positive(t_stack *stack_b, int size_a,
						int size_b);
int					mini_move_mid(t_stack *stack_b, int size_a, int size_b);
void				get_minimum(t_stack *stack_b, t_move *moves);
int					includes(int number, int *numbers, int size);
void				not_part_of_lis(int *numbers_increased, t_top *top,
						int max_length, t_top *temp);
void				init_lis(int *lengths, int size);
int					*get_longest_numbers(int *number, int *lis, int max_length,
						int size);
void				perform_lis(t_top *stack, t_top *temp);
void				complete_sort(t_top *stack);
void				in_the_top(t_move moves, t_top *stack, t_top *temp);
void				in_the_bottom(t_move move, t_top *stack, t_top *temp);
void				top_and_bottom(t_move moves, t_top *stack, t_top *temp);
void				bottom_and_top(t_move moves, t_top *stack, t_top *temp);
void				small_or_big_element(t_top *stack_a, t_top *stack_b,
						t_stack *b);
void				element_ranged(t_top *stack_a, t_top *stack_b, t_stack *b,
						t_stack *a);
void				element_not_ranged(t_top *stack_a, t_top *stack_b,
						t_stack *b);
int					another_cas(t_top *stack_a, int data);
#endif