/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index_of_smaller.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:34:17 by adardour          #+#    #+#             */
/*   Updated: 2023/02/19 15:55:46 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index_of_smallest_number(t_top *top)
{
	t_stack	*current;
	int		min_value;
	int		min_index;
	int		index;

	min_value = top->top->data;
	min_index = 0;
	index = 0;
	current = top->top;
	while (current != NULL)
	{
		if (current->data < min_value)
		{
			min_value = current->data;
			min_index = index;
		}
		current = current->next;
		index++;
	}
	return (min_index);
}
