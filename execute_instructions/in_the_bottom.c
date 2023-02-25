/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_the_bottom.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:14:34 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 20:16:17 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	in_the_bottom(t_move moves, t_top *stack, t_top *temp)
{
	int	a;
	int	b;

	a = (get_size(stack) - (-moves.index_a));
	b = (get_size(temp) - (-moves.index_b));
	while (a && b)
	{
		rotate_rr(stack, temp);
		a--;
		b--;
	}
	while (a)
	{
		rotate_reverse_a(stack);
		a--;
	}
	while (b)
	{
		rotate_reverse_b(temp);
		b--;
	}
	push_to_stack_a(peek(temp), stack, temp);
	pop(temp);
}
