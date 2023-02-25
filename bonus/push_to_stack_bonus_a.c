/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_stack_bonus_a.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:34:28 by adardour          #+#    #+#             */
/*   Updated: 2023/02/01 18:11:46 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	push_to_stack_bonus_a(int data, t_top *top, t_top *temp)
{
	if (is_empty(temp))
		return ;
	push(data, top);
	pop(temp);
}
