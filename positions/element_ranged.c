/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_ranged.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:39:05 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 21:11:11 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	index_ranged(t_stack *b, t_stack *a, t_top *stack_a, t_top *stack_b)
{
	b->costs.index_a = a->next->position;
	b->costs.index_b = b->position;
	b->costs.number_of_moves = mini_move_positive(b, get_size(stack_a),
			get_size(stack_b));
}

void	index_ranged_1(t_stack *b, t_stack *a, t_top *stack_a, t_top *stack_b)
{
	b->costs.index_a = -a->next->position;
	b->costs.index_b = -b->position;
	b->costs.number_of_moves = mini_move_negative(b, get_size(stack_a),
			get_size(stack_b));
}

void	index_ranged_2(t_stack *b, t_stack *a, t_top *stack_a, t_top *stack_b)
{
	if ((a->next->position <= get_size(stack_a) / 2)
		&& (b->position > get_size(stack_b) / 2))
	{
		b->costs.index_a = a->next->position;
		b->costs.index_b = -b->position;
	}
	else
	{
		b->costs.index_a = -a->next->position;
		b->costs.index_b = b->position;
	}
	b->costs.number_of_moves = mini_move_mid(b, get_size(stack_a),
			get_size(stack_b));
}

void	element_ranged(t_top *stack_a, t_top *stack_b, t_stack *b, t_stack *a)
{
	if ((b->position <= get_size(stack_b) / 2)
		&& (a->next->position <= get_size(stack_a) / 2))
		index_ranged(b, a, stack_a, stack_b);
	else if ((b->position > get_size(stack_b) / 2)
		&& (a->next->position > get_size(stack_a) / 2))
		index_ranged_1(b, a, stack_a, stack_b);
	else
		index_ranged_2(b, a, stack_a, stack_b);
}
