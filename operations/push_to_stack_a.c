/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_stack_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:09:08 by adardour          #+#    #+#             */
/*   Updated: 2023/02/23 23:27:45 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_to_stack_a(int data, t_top *top, t_top *temp)
{
	if (is_empty(temp))
		return ;
	push(data, top);
	ft_putstr_fd("pa", 1);
	ft_putchar_fd('\n', 1);
}
