/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:10:15 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 20:49:40 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	another_cas(t_top *stack_a, int data)
{
	t_stack	*a;
	int		pos_best;
	int		best;

	a = stack_a->top;
	best = 2147483647;
	while (a != NULL)
	{
		if (data < a->data && a->data < best)
		{
			pos_best = a->position;
			best = a->data;
		}
		a = a->next;
	}
	return (pos_best);
}

void	get_costs(t_top *stack_a, t_top *stack_b)
{
	t_stack	*b;
	t_stack	*a;

	b = stack_b->top;
	while (b != NULL)
	{
		a = stack_a->top;
		while (a != NULL)
		{
			if (a->next == NULL)
				break ;
			if (check_is_larger(b->data, stack_a) || check_is_smaller(b->data,
					stack_a))
				small_or_big_element(stack_a, stack_b, b);
			else
			{
				if ((b->data > a->data) && (b->data < a->next->data))
					element_ranged(stack_a, stack_b, b, a);
				else
					element_not_ranged(stack_a, stack_b, b);
			}
			a = a->next;
		}
		b = b->next;
	}
}
