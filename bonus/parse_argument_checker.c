/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argument_checker.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 23:08:03 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 15:07:22 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

char	**get_all_numbers(int c, char **v)
{
	char	*result;
	char	**numbers;
	int		i;
	char	*tmp;

	result = ft_strdup("");
	i = 1;
	while (i < c)
	{
		tmp = ft_strjoin(result, v[i]);
		free(result);
		result = ft_strjoin(tmp, " ");
		free(tmp);
		i++;
	}
	numbers = ft_split(result, ' ');
	free(result);
	return (numbers);
}

void	parse_argument_checker(int c, char **v, t_top *temp, t_top *top)
{
	char	**numbers;
	int		size;

	numbers = get_all_numbers(c, v);
	size = get_length(numbers);
	if (check_numbers(numbers, size))
	{
		push_to_stack(numbers, size, top);
		if (!check_if_sorted(top, get_size(top)))
			check_instruction(top, temp);
		else
			return (free_things(numbers));
	}
	else
		ft_putendl_fd("Error", 2);
	free_things(numbers);
}
