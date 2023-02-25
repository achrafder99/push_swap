/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_less_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:02:25 by adardour          #+#    #+#             */
/*   Updated: 2023/02/21 17:51:12 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_rest_of_stack(t_top *stack, t_top *temp, int length)
{
	int	position_of_larger;
	int	middle;

	if (!check_if_sorted(stack, length))
		sort_3_numbers(stack);
	while (!is_empty(temp))
	{
		if (check_is_larger(peek(temp), temp))
		{
			push_to_stack_a(peek(temp), stack, temp);
			pop(temp);
		}
		else
		{
			position_of_larger = get_index_of_larger_number(temp);
			middle = get_size(temp) / 2;
			if (position_of_larger <= middle)
				rotate_b(temp);
			else
				rotate_reverse_b(temp);
		}
	}
}

void	sort_less_numbers(t_top *stack, t_top *temp, int length)
{
	int	position_of_smallest;
	int	how_much;
	int	middle;

	how_much = length - 3;
	while (get_size(temp) != how_much)
	{
		if (check_is_smaller(peek(stack), stack))
		{
			push_to_stack_b(peek(stack), temp, stack);
			pop(stack);
		}
		else
		{
			position_of_smallest = get_index_of_smallest_number(stack);
			middle = get_size(stack) / 2;
			if (position_of_smallest <= middle)
				rotate_a(stack);
			else
				rotate_reverse_a(stack);
		}
	}
	sort_rest_of_stack(stack, temp, length);
}
