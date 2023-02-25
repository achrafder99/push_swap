/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:27:52 by adardour          #+#    #+#             */
/*   Updated: 2023/02/23 23:27:33 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_reverse_a(t_top *top)
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
	ft_putstr_fd("rra", 1);
	ft_putchar_fd('\n', 1);
}
