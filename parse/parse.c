/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:32:39 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 20:15:16 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	parse_argument(int c, char **v, t_top *temp, t_top *top)
{
	char	**numbers;
	int		size;
	int		i;

	numbers = get_all_numbers(c, v);
	size = get_length(numbers);
	i = 0;
	if (check_numbers(numbers, size))
	{
		push_to_stack(numbers, size, top);
		if (!check_if_sorted(top, get_size(top)))
			start_sorting(top, temp, size);
		else
			return (free_things(numbers));
	}
	else
		return (ft_putendl_fd("Error", 2));
	while (numbers[i])
	{
		free(numbers[i]);
		i++;
	}
	free(numbers);
}
