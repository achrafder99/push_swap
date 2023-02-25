/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complete_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:04:54 by adardour          #+#    #+#             */
/*   Updated: 2023/02/24 17:31:35 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	complete_sort(t_top *stack)
{
	int	index_of_smallest;

	index_of_smallest = get_index_of_smallest_number(stack);
	while (!check_if_sorted(stack, get_size(stack)))
	{
		index_of_smallest = get_index_of_smallest_number(stack);
		if (index_of_smallest <= get_size(stack) / 2)
			rotate_a(stack);
		else
			rotate_reverse_a(stack);
	}
	index_stack(stack);
}
