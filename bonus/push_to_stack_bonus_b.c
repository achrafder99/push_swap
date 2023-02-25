/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_stack_bonus_b.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:47:47 by adardour          #+#    #+#             */
/*   Updated: 2023/02/01 18:11:52 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	push_to_stack_bonus_b(int data, t_top *temp, t_top *top)
{
	if (is_empty(top))
		return ;
	push(data, temp);
	pop(top);
}
