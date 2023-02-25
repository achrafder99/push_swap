/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_things.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:26:55 by adardour          #+#    #+#             */
/*   Updated: 2023/02/04 20:33:55 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_things(char **split_number)
{
	int	i;

	i = 0;
	while (split_number[i])
	{
		free(split_number[i]);
		i++;
	}
	free(split_number);
	split_number = NULL;
}
