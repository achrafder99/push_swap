/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:29:45 by adardour          #+#    #+#             */
/*   Updated: 2023/02/24 16:30:02 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	includes(int number, int *numbers, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (numbers[i] == number)
			return (1);
		i++;
	}
	return (0);
}
