/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_increased.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:31:25 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 20:15:01 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*get_longest_numbers(int *number, int *lis, int max_length, int size)
{
	int	*numbers;
	int	i;
	int	j;
	int	length;

	numbers = malloc(sizeof(int) * max_length);
	if (numbers == NULL)
		return (NULL);
	i = size - 1;
	j = 0;
	length = max_length;
	while (i != -1)
	{
		if (lis[i] == length)
		{
			numbers[j] = number[i];
			j++;
			length -= 1;
		}
		i--;
	}
	return (numbers);
}
