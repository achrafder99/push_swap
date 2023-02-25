/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:32:09 by adardour          #+#    #+#             */
/*   Updated: 2023/02/01 18:09:52 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	swap_bonus_a(t_top *stack)
{
	int	temp;

	temp = stack->top->data;
	if (is_empty(stack) || stack->top->next == NULL)
		return ;
	stack->top->data = stack->top->next->data;
	stack->top->next->data = temp;
}
