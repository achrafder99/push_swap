/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_position.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:00:23 by adardour          #+#    #+#             */
/*   Updated: 2023/01/30 21:00:32 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_position(t_top *top, int data)
{
	t_stack	*node;
	int		position;

	node = top->top;
	position = 0;
	while (node != NULL)
	{
		if ((node->data > data) && (node->data != data))
			position++;
		node = node->next;
	}
	return (position);
}
