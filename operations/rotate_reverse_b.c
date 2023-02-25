/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:43:20 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 18:48:39 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_reverse_b(t_top *top)
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
	ft_putstr_fd("rrb", 1);
	ft_putchar_fd('\n', 1);
}
