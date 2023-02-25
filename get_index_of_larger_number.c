/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index_of_larger_number.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:48:39 by adardour          #+#    #+#             */
/*   Updated: 2023/01/30 23:52:59 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index_of_larger_number(t_top *top)
{
	t_stack	*current;
	int		max_value;
	int		max_index;
	int		index;

	max_value = 0;
	max_index = -1;
	index = 0;
	current = top->top;
	while (current != NULL)
	{
		if (current->data > max_value)
		{
			max_value = current->data;
			max_index = index;
		}
		current = current->next;
		index++;
	}
	return (max_index);
}
