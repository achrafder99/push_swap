/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse_bonus_a.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:28:48 by adardour          #+#    #+#             */
/*   Updated: 2023/02/01 18:12:43 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	rotate_reverse_bonus_a(t_top *top)
{
	t_stack	*last;
	t_stack	*current;

	if (is_empty(top) || top->top->next == NULL)
		return ;
	current = top->top;
	while (current->next != NULL)
	{
		last = current;
		current = current->next;
	}
	last->next = NULL;
	current->next = top->top;
	top->top = current;
}
