/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top_and_bottom.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:19:01 by adardour          #+#    #+#             */
/*   Updated: 2023/02/24 17:26:27 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	top_and_bottom(t_move moves, t_top *stack, t_top *temp)
{
	int	a;

	a = get_size(stack) - (-moves.index_a);
	while (a)
	{
		rotate_reverse_a(stack);
		a--;
	}
	while (moves.index_b)
	{
		rotate_b(temp);
		moves.index_b--;
	}
	push_to_stack_a(peek(temp), stack, temp);
	pop(temp);
}
