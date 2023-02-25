/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_instruction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 23:05:41 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 18:48:13 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	execute_instruction(char *line, t_top *top, t_top *temp)
{
	if (ft_strncmp(line, "rra\n", ft_strlen(line)) == 0)
		rotate_reverse_bonus_a(top);
	else if (ft_strncmp(line, "ra\n", ft_strlen(line)) == 0)
		rotate_bonus_a(top);
	else if (ft_strncmp(line, "sa\n", ft_strlen(line)) == 0)
		swap_bonus_a(top);
	else if (ft_strncmp(line, "pa\n", ft_strlen(line)) == 0 && temp->top)
		push_to_stack_bonus_a(peek(temp), top, temp);
	else if (ft_strncmp(line, "rrb\n", ft_strlen(line)) == 0)
		rotate_reverse_bonus_b(temp);
	else if (ft_strncmp(line, "rb\n", ft_strlen(line)) == 0)
		rotate_bonus_b(temp);
	else if (ft_strncmp(line, "sb\n", ft_strlen(line)) == 0)
		swap_bonus_b(temp);
	else if (ft_strncmp(line, "pb\n", ft_strlen(line)) == 0 && top->top)
		push_to_stack_bonus_b(peek(top), temp, top);
	else if (ft_strncmp(line, "ss\n", ft_strlen(line)) == 0)
		swap_a_swap_b(top, temp);
	else if (ft_strncmp(line, "rr\n", ft_strlen(line)) == 0)
		rotate_a_rotate_b(top, temp);
	else if (ft_strncmp(line, "rrr\n", ft_strlen(line)) == 0)
		r_ra_r_rb(top, temp);
	else
		return (ft_putendl_fd("Error", 2), exit(EXIT_FAILURE));
}

void	read_instructions(t_top *top, t_top *temp)
{
	char	*line;

	line = NULL;
	line = get_next_line(0);
	while (line)
	{
		execute_instruction(line, top, temp);
		free(line);
		line = get_next_line(0);
	}
}

void	check_result(t_top *top)
{
	if (check_if_sorted(top, get_size(top)))
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
}

void	check_instruction(t_top *top, t_top *temp)
{
	read_instructions(top, temp);
	check_result(top);
}
