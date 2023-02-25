/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_the_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:49:10 by adardour          #+#    #+#             */
/*   Updated: 2023/02/24 17:32:41 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_stack(t_top *top)
{
	int		i;
	t_stack	*node;

	i = 0;
	node = top->top;
	while (node != NULL)
	{
		node->position = i;
		node = node->next;
		i++;
	}
}
