/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_not_ranged.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:42:40 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 21:01:56 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_index_1(t_stack *b, int best, t_top *stack_a, t_top *stack_b)
{
	b->costs.index_a = best;
	b->costs.index_b = b->position;
	b->costs.number_of_moves = mini_move_positive(b, get_size(stack_a),
			get_size(stack_b));
}

void	get_index_2(t_stack *b, int best, t_top *stack_a, t_top *stack_b)
{
	b->costs.index_a = -best;
	b->costs.index_b = -b->position;
	b->costs.number_of_moves = mini_move_negative(b, get_size(stack_a),
			get_size(stack_b));
}

void	get_index_3(int best, t_top *stack_a, t_top *stack_b, t_stack *b)
{
	if (best <= get_size(stack_a) / 2 && b->position > get_size(stack_b) / 2)
	{
		b->costs.index_a = best;
		b->costs.index_b = -b->position;
		b->costs.number_of_moves = mini_move_mid(b, get_size(stack_a),
				get_size(stack_b));
	}
	else
	{
		b->costs.index_a = -best;
		b->costs.index_b = b->position;
		b->costs.number_of_moves = mini_move_mid(b, get_size(stack_a),
				get_size(stack_b));
	}
}

void	element_not_ranged(t_top *stack_a, t_top *stack_b, t_stack *b)
{
	int	best;

	best = another_cas(stack_a, b->data);
	if (best <= get_size(stack_a) / 2 && b->position <= get_size(stack_b) / 2)
		get_index_1(b, best, stack_a, stack_b);
	else if (best > get_size(stack_a) / 2 && b->position > get_size(stack_b)
		/ 2)
		get_index_2(b, best, stack_a, stack_b);
	else
		get_index_3(best, stack_a, stack_b, b);
}
