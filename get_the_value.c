/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_the_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:48:41 by adardour          #+#    #+#             */
/*   Updated: 2023/02/04 12:37:44 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_the_value(t_stack *node, int length)
{
	t_stack	*temp;
	int		i;
	int		value;

	temp = node;
	i = 0;
	while (i <= length)
	{
		value = temp->data;
		temp = temp->next;
		i++;
	}
	return (value);
}
