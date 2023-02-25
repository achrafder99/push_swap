/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_lis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:28:27 by adardour          #+#    #+#             */
/*   Updated: 2023/02/24 17:28:48 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_lis(int *lengths, int size)
{
	static int	i;

	if (i == size)
		return ;
	if (i < size)
		lengths[i] = 1;
	i++;
	init_lis(lengths, size);
}
