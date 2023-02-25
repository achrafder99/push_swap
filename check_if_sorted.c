/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:21:05 by adardour          #+#    #+#             */
/*   Updated: 2023/02/04 17:23:36 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_sorted(t_top *top, int length)
{
	int		i;
	t_stack	*node;

	i = 0;
	if (top->top == NULL)
		return (1);
	node = top->top;
	while (i < length)
	{
		if (node->next == NULL)
			return (1);
		if (node->data >= node->next->data)
			return (0);
		i++;
		node = node->next;
	}
	return (1);
}
