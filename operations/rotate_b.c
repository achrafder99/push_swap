/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:35:56 by adardour          #+#    #+#             */
/*   Updated: 2023/02/23 23:27:38 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_b(t_top *top)
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
	ft_putstr_fd("rb", 1);
	ft_putchar_fd('\n', 1);
}
