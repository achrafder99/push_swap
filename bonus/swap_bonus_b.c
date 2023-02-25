/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:46:35 by adardour          #+#    #+#             */
/*   Updated: 2023/02/01 18:10:11 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	swap_bonus_b(t_top *stack)
{
	int	temp;

	temp = stack->top->data;
	if (is_empty(stack) || stack->top->next == NULL)
		return ;
	stack->top->data = stack->top->next->data;
	stack->top->next->data = temp;
}
