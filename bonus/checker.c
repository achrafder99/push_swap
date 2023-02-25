/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 23:03:20 by adardour          #+#    #+#             */
/*   Updated: 2023/02/05 15:37:10 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	check_input(int c, char **argv)
{
	int	i;

	i = 1;
	while (i < c)
	{
		if (ft_strncmp(argv[i], "", 1) == 0)
			return (0);
		i++;
	}
	return (1);
}

static int	perform_sort(int c, char **argv, t_top *top, t_top *temp)
{
	int		length;
	char	**split_number;

	split_number = ft_split(argv[1], ' ');
	length = get_length(split_number);
	if (c == 2)
	{
		if (check_numbers(split_number, length))
		{
			push_to_stack(split_number, length, top);
			if (check_if_sorted(top, length) && (!is_empty(top)))
				return (0);
			else
			{
				check_instruction(top, temp);
				free_things(split_number);
			}
		}
		else
			ft_putstr_fd("Error\n", 2);
	}
	else
		parse_argument_checker(c, argv, temp, top);
	free_things(split_number);
	return (0);
}

int	main(int c, char **argv)
{
	t_top	*top;
	t_top	*temp;

	temp = (t_top *)malloc(sizeof(t_top));
	top = (t_top *)malloc(sizeof(t_top));
	temp->top = NULL;
	top->top = NULL;
	if (c == 1)
		return (0);
	if (!check_input(c, argv))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	perform_sort(c, argv, top, temp);
	return (0);
}
