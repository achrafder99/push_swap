/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_larger.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:12:14 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 16:01:10 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_is_larger(int data, t_top *top)
{
	t_stack	*node;

	node = top->top;
	while (node != NULL)
	{
		if (data < node->data)
			return (0);
		node = node->next;
	}
	return (1);
}
