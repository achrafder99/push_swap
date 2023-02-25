/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_stack_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:26:33 by adardour          #+#    #+#             */
/*   Updated: 2023/02/23 23:27:43 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_to_stack_b(int data, t_top *temp, t_top *top)
{
	if (is_empty(top))
		return ;
	push(data, temp);
	ft_putstr_fd("pb", 1);
	ft_putchar_fd('\n', 1);
}
