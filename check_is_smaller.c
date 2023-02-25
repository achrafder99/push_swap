/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_smaller.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:14:19 by adardour          #+#    #+#             */
/*   Updated: 2023/01/29 16:44:16 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_is_smaller(int data, t_top *stack)
{
	t_stack	*node;

	node = stack->top;
	while (node != NULL)
	{
		if (node->data < data && (node->data != data))
			return (0);
		node = node->next;
	}
	return (1);
}
