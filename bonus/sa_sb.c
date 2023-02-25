/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:52:57 by adardour          #+#    #+#             */
/*   Updated: 2023/02/01 18:10:22 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	swap_a_swap_b(t_top *top, t_top *temp)
{
	if (top->top && temp->top)
	{
		swap_bonus_a(top);
		swap_bonus_b(temp);
	}
}
