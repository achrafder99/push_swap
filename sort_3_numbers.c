/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:41:55 by adardour          #+#    #+#             */
/*   Updated: 2023/01/30 23:18:23 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3_numbers(t_top *top)
{
	int	top_number;
	int	middle_number;
	int	head_number;

	top_number = peek(top);
	middle_number = top->top->next->data;
	head_number = get_the_head(top);
	if ((top_number < middle_number) && (top_number < head_number)
		&& (middle_number > head_number))
		return (swap_a(top), rotate_a(top));
	else if ((middle_number > top_number) && (middle_number > head_number)
		&& (top_number > head_number))
		rotate_reverse_a(top);
	else if ((top_number > middle_number)
		&& (top_number > head_number) & (head_number > middle_number))
		rotate_a(top);
	else if ((top_number > middle_number) && (top_number > head_number)
		&& (middle_number > head_number))
		return (swap_a(top), rotate_reverse_a(top));
	else
		swap_a(top);
}
