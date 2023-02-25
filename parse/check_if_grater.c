/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_grater.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:31:48 by adardour          #+#    #+#             */
/*   Updated: 2023/02/24 16:41:52 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_if_grater(char **numbers, int length)
{
	int	i;

	i = 0;
	while (i < length)
	{	
		if ((str_to_long(numbers[i]) > MAXINT)
			|| (str_to_long(numbers[i]) < MININT))
			return (0);
		i++;
	}
	return (1);
}
