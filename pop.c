/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:54:01 by adardour          #+#    #+#             */
/*   Updated: 2023/02/04 19:07:43 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pop(t_top *top)
{
	t_stack	*tmp;

	if (!(is_empty(top)))
	{
		tmp = top->top;
		top->top = top->top->next;
		free(tmp);
	}
}
