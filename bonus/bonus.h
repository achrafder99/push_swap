/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:15:32 by adardour          #+#    #+#             */
/*   Updated: 2023/02/01 17:52:29 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include "../libft/libft.h"
# include "../push_swap.h"
# include "./get_next_line/get_next_line.h"

void	push_to_stack_bonus_a(int data, t_top *top, t_top *temp);
void	push_to_stack_bonus_b(int data, t_top *temp, t_top *top);
void	rotate_bonus_a(t_top *top);
void	rotate_bonus_b(t_top *top);
void	rotate_reverse_bonus_a(t_top *top);
void	rotate_reverse_bonus_b(t_top *top);
void	swap_bonus_a(t_top *stack);
void	swap_bonus_b(t_top *stack);
void	check_instruction(t_top *top, t_top *temp);
void	parse_argument_checker(int c, char **v, t_top *temp, t_top *top);
void	swap_a_swap_b(t_top *top, t_top *temp);
void	rotate_a_rotate_b(t_top *top, t_top *temp);
void	r_ra_r_rb(t_top *top, t_top *temp);

#endif