/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_r.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:49:37 by adardour          #+#    #+#             */
/*   Updated: 2023/02/24 17:27:19 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ra(t_top *top)
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

static void	rb(t_top *top)
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

void	rotate_r(t_top *top, t_top *temp)
{
	ra(top);
	rb(temp);
	ft_putendl_fd("rr", 1);
}
