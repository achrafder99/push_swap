/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:46:28 by adardour          #+#    #+#             */
/*   Updated: 2023/02/24 17:27:30 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rra(t_top *top)
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

static void	rrb(t_top *top)
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

void	rotate_rr(t_top *top, t_top *temp)
{
	rra(top);
	rrb(temp);
	ft_putendl_fd("rrr", 1);
}
