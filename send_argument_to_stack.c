/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_argument_to_stack.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:36:08 by adardour          #+#    #+#             */
/*   Updated: 2023/02/04 13:06:01 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	send_argument_to_stack(int how_much, char **numbers, t_top *top)
{
	int	i;

	i = 0;
	while (i < how_much)
	{
		push(ft_atoi(numbers[i]), top);
		i++;
	}
	i = 0;
	while (i < how_much)
	{
		free(numbers[i]);
		i++;
	}
	free(numbers);
}
