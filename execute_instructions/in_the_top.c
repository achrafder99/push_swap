/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_the_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:11:18 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 18:26:56 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	in_the_top(t_move moves, t_top *stack, t_top *temp)
{
	while (moves.index_a && moves.index_b)
	{
		rotate_r(stack, temp);
		moves.index_a--;
		moves.index_b--;
	}
	while (moves.index_a)
	{
		rotate_a(stack);
		moves.index_a--;
	}
	while (moves.index_b)
	{
		rotate_b(temp);
		moves.index_b--;
	}
	push_to_stack_a(peek(temp), stack, temp);
	pop(temp);
}
