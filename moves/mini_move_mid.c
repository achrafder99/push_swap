/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_move_mid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 23:01:14 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 18:58:55 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	mini_move_mid(t_stack *stack_b, int size_a, int size_b)
{
	int	minimum_move;
	int	ina;
	int	inb;

	minimum_move = 0;
	inb = 0;
	ina = 0;
	if (stack_b->costs.index_a >= 0 && stack_b->costs.index_b < 0)
	{
		inb = size_b + stack_b->costs.index_b;
		ina = stack_b->costs.index_a;
	}
	else if (stack_b->costs.index_a < 0 && stack_b->costs.index_b >= 0)
	{
		inb = stack_b->costs.index_b;
		ina = size_a + stack_b->costs.index_a;
	}
	minimum_move = ina + inb;
	return (minimum_move);
}
