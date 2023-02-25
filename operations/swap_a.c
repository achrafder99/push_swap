/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:07:56 by adardour          #+#    #+#             */
/*   Updated: 2023/02/23 23:26:06 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_top *stack)
{
	int	temp;

	temp = stack->top->data;
	if (is_empty(stack) || stack->top->next == NULL)
		return ;
	stack->top->data = stack->top->next->data;
	stack->top->next->data = temp;
	ft_putstr_fd("sa", 1);
	ft_putchar_fd('\n', 1);
}
