/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:19:25 by adardour          #+#    #+#             */
/*   Updated: 2023/02/23 23:25:58 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_top *top)
{
	t_stack		*current;

	current = top->top;
	if (is_empty(top) || top->top->next == NULL)
		return ;
	while (current->next != NULL)
		current = current->next;
	current->next = top->top;
	top->top = top->top->next;
	current->next->next = NULL;
	ft_putstr_fd("ra", 1);
	ft_putchar_fd('\n', 1);
}
