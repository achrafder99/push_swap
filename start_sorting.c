/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:59:39 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 20:20:41 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_large_numbers(t_top *stack, t_top *temp)
{
	t_stack	*node;
	t_move	moves;

	perform_lis(stack, temp);
	while (!is_empty(temp))
	{
		node = temp->top;
		index_stack(stack);
		index_stack(temp);
		get_costs(stack, temp);
		get_minimum(node, &moves);
		if (moves.index_a >= 0 && moves.index_b >= 0)
			in_the_top(moves, stack, temp);
		else if (moves.index_a < 0 && moves.index_b < 0)
			in_the_bottom(moves, stack, temp);
		else if (moves.index_a < 0 && moves.index_b >= 0)
			top_and_bottom(moves, stack, temp);
		else if (moves.index_a >= 0 && moves.index_b < 0)
			bottom_and_top(moves, stack, temp);
	}
	complete_sort(stack);
}

void	start_sorting(t_top *top, t_top *temp, int length)
{
	if (length <= 3)
		sort_3_numbers(top);
	else if (length <= 10)
		sort_less_numbers(top, temp, length);
	else
		sort_large_numbers(top, temp);
}
