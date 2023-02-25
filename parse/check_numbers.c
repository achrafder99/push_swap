/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:31:58 by adardour          #+#    #+#             */
/*   Updated: 2023/02/24 16:42:14 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_numbers(char **numbers, int length)
{
	int	is_duplicate;
	int	check_integers;
	int	is_greater;

	is_duplicate = check_duplication(numbers, length);
	check_integers = is_integers(numbers, length);
	is_greater = check_if_grater(numbers, length);
	if (!is_duplicate || !check_integers || !is_greater)
		return (0);
	return (1);
}
