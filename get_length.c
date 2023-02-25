/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:46:24 by adardour          #+#    #+#             */
/*   Updated: 2023/02/04 17:09:15 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	get_length(char **numbers)
{
	size_t	length;

	length = 0;
	while (numbers[length] != NULL)
		length++;
	return (length);
}
