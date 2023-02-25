/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_in_lis.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:30:42 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 20:14:37 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	not_part_of_lis(int *numbers_increased, t_top *top, int max_length,
		t_top *temp)
{
	t_stack	*node;

	node = top->top;
	while (get_size(top) != max_length)
	{
		if (!includes(peek(top), numbers_increased, max_length))
		{
			push_to_stack_b(peek(top), temp, top);
			pop(top);
		}
		else
			rotate_a(top);
	}
}
