/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_the_head.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:27:30 by adardour          #+#    #+#             */
/*   Updated: 2023/01/30 23:28:49 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_the_head(t_top *top)
{
	t_stack	*node;
	int		head;

	node = top->top;
	while (node != NULL)
	{
		head = node->data;
		node = node->next;
	}
	return (head);
}
