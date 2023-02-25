/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bottom_and_top.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:23:46 by adardour          #+#    #+#             */
/*   Updated: 2023/02/24 17:25:01 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	bottom_and_top(t_move moves, t_top *stack, t_top *temp)
{
	int	b;

	b = get_size(temp) - (-moves.index_b);
	while (b)
	{
		rotate_reverse_b(temp);
		b--;
	}
	while (moves.index_a)
	{
		rotate_a(stack);
		moves.index_a--;
	}
	push_to_stack_a(peek(temp), stack, temp);
	pop(temp);
}
