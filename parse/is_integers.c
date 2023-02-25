/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:07:57 by adardour          #+#    #+#             */
/*   Updated: 2023/02/24 16:41:25 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_integers(char **numbers, int length)
{
	int		i;
	int		j;
	t_hold	hold;

	i = 0;
	while (i < length)
	{
		hold = (t_hold){.digit = 0, .sign = 0};
		j = 0;
		while (numbers[i][j] != '\0')
		{
			if (!ft_isdigit(numbers[i][j]) && (!ft_isdigit(numbers[i][j + 1])))
				return (0);
			if (numbers[i][0] == '-' || numbers[i][0] == '+')
				hold.sign = 1;
			if (ft_isdigit(numbers[i][j]))
				hold.digit++;
			j++;
		}
		if (ft_strlen(numbers[i]) != (hold.sign + hold.digit))
			return (0);
		i++;
	}
	return (1);
}
