/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:32:05 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 18:35:38 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_minimum(t_stack *stack_b, t_move *moves)
{
	t_stack	*node;
	int		minimum;

	node = stack_b;
	minimum = 2147483647;
	while (node != NULL)
	{
		if (node->costs.number_of_moves < minimum)
		{
			minimum = node->costs.number_of_moves;
			moves->number_of_moves = minimum;
			moves->index_a = node->costs.index_a;
			moves->index_b = node->costs.index_b;
		}
		node = node->next;
	}
}
