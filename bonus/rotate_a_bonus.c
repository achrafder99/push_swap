/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:07:31 by adardour          #+#    #+#             */
/*   Updated: 2023/02/01 18:10:46 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	rotate_bonus_a(t_top *top)
{
	t_stack	*current;

	current = top->top;
	if (is_empty(top) || top->top->next == NULL)
		return ;
	while (current->next != NULL)
		current = current->next;
	current->next = top->top;
	top->top = top->top->next;
	current->next->next = NULL;
}
