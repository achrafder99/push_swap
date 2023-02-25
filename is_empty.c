/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_empty.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:45:46 by adardour          #+#    #+#             */
/*   Updated: 2023/01/31 20:23:28 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_empty(t_top *top)
{
	if (top->top == NULL)
		return (1);
	return (0);
}
