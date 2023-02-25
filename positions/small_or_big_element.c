/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_or_big_element.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:35:28 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 23:00:12 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	small_or_large_index(int index_smaller, t_stack *b, t_top *stack_a,
		t_top *stack_b)
{
	b->costs.index_a = index_smaller;
	b->costs.index_b = b->position;
	b->costs.number_of_moves = mini_move_positive(b, get_size(stack_a),
			get_size(stack_b));
}

void	in_the_top_index(int index_smaller, t_stack *b, t_top *stack_a,
		t_top *stack_b)
{
	b->costs.index_a = index_smaller;
	b->costs.index_b = b->position;
	b->costs.number_of_moves = mini_move_positive(b, get_size(stack_a),
			get_size(stack_b));
}

void	in_the_bottom_index(int index_smaller, t_stack *b, t_top *stack_a,
		t_top *stack_b)
{
	b->costs.index_a = -index_smaller;
	b->costs.index_b = -b->position;
	b->costs.number_of_moves = mini_move_negative(b, get_size(stack_a),
			get_size(stack_b));
}

void	bottom_and_top_index(int index_smaller, t_stack *b, t_top *stack_a,
		t_top *stack_b)
{
	if (index_smaller > get_size(stack_a) / 2 && b->position < get_size(stack_b)
		/ 2)
	{
		b->costs.index_a = -index_smaller;
		b->costs.index_b = b->position;
		b->costs.number_of_moves = mini_move_mid(b, get_size(stack_a),
				get_size(stack_b));
	}
	else
	{
		b->costs.index_a = index_smaller;
		b->costs.index_b = -b->position;
		b->costs.number_of_moves = mini_move_mid(b, get_size(stack_a),
				get_size(stack_b));
	}
}

void	small_or_big_element(t_top *stack_a, t_top *stack_b, t_stack *b)
{
	int	index_smaller;

	index_smaller = get_index_of_smallest_number(stack_a);
	if (index_smaller <= get_size(stack_a) / 2
		&& b->position <= get_size(stack_b) / 2)
		small_or_large_index(index_smaller, b, stack_a, stack_b);
	else if (index_smaller > get_size(stack_a) / 2
		&& b->position > get_size(stack_b) / 2)
		in_the_bottom_index(index_smaller, b, stack_a, stack_b);
	else
		bottom_and_top_index(index_smaller, b, stack_a, stack_b);
}
