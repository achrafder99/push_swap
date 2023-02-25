/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lis.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:01:23 by adardour          #+#    #+#             */
/*   Updated: 2023/02/24 17:30:46 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_lis(int *numbers, int *lis, int size)
{
	int	i;
	int	max_length;
	int	j;

	i = 1;
	max_length = 0;
	while (i < size)
	{
		j = 0;
		while (j < i)
		{
			if ((numbers[j] < numbers[i]) && (lis[j] + 1 > lis[i]))
			{
				lis[i] = lis[j] + 1;
			}
			j++;
		}
		if (max_length < lis[i])
			max_length = lis[i];
		i++;
	}
	return (max_length);
}
