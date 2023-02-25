/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_move_negative.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 22:58:24 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 18:58:52 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	mini_move_negative(t_stack *stack_b, int size_a, int size_b)
{
	int	minimum_move;
	int	ina;
	int	inb;

	minimum_move = 0;
	if (stack_b->costs.index_a < 0 && stack_b->costs.index_b < 0)
	{
		ina = size_a - (-stack_b->costs.index_a);
		inb = size_b - (-stack_b->costs.index_b);
		while (ina && inb)
		{
			minimum_move++;
			ina--;
			inb--;
		}
		if (ina == 0)
			minimum_move += inb;
		else
			minimum_move += ina;
	}
	return (minimum_move);
}
