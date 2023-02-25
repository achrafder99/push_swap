/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:25:50 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 22:51:27 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_and_sort(int c, char **argv, t_top *top, t_top *temp)
{
	char	**split_number;
	int		length;

	if (c == 2)
	{
		split_number = ft_split(argv[1], ' ');
		length = get_length(split_number);
		if (check_numbers(split_number, length))
		{
			push_to_stack(split_number, length, top);
			if (!is_empty(top) && !check_if_sorted(top, length))
			{
				start_sorting(top, temp, length);
				free_things(split_number);
			}
			else
				return (free_things(split_number), exit(EXIT_FAILURE));
		}
		else
			return (free_things(split_number), ft_putendl_fd("Error", 2));
	}
	else
		return (parse_argument(c, argv, temp, top));
}

int	check_input(int c, char **argv)
{
	int	i;

	i = 1;
	while (i < c)
	{
		if (ft_strncmp(argv[i], "", 1) == 0 || !ft_strncmp(argv[i], " ", 1))
			return (0);
		i++;
	}
	return (1);
}

int	perform_sort(int c, char **argv, t_top *top, t_top *temp)
{
	parse_and_sort(c, argv, top, temp);
	return (0);
}

int	main(int c, char **argv)
{
	t_top	*top;
	t_top	*temp;

	temp = (t_top *)malloc(sizeof(t_top));
	top = (t_top *)malloc(sizeof(t_top));
	if (temp == NULL || top == NULL)
		return (1);
	temp->top = NULL;
	top->top = NULL;
	if (c == 1)
		return (0);
	if (!check_input(c, argv))
	{
		ft_putendl_fd("Error", 2);
		return (1);
	}
	perform_sort(c, argv, top, temp);
	return (0);
}
