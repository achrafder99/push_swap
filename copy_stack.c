/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:59:51 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 20:23:10 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	copy_stack_in_array(int *numbers, t_top *stack, int size)
{
	int		i;
	t_stack	*node;

	node = stack->top;
	i = 0;
	while (size)
	{
		numbers[i] = node->data;
		i++;
		size--;
		node = node->next;
	}
}
