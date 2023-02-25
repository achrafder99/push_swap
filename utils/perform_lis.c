/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform_lis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:56:22 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 14:51:26 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	perform_lis(t_top *stack, t_top *temp)
{
	int	*lis;
	int	*number_increased;
	int	max_length;
	int	*numbers;

	lis = malloc(sizeof(int) * get_size(stack));
	numbers = malloc(sizeof(int) * get_size(stack));
	if (lis == NULL || numbers == NULL)
		exit(EXIT_FAILURE);
	init_lis(lis, get_size(stack));
	copy_stack_in_array(numbers, stack, get_size(stack));
	max_length = get_lis(numbers, lis, get_size(stack));
	number_increased = get_longest_numbers(numbers, lis, max_length,
			get_size(stack));
	not_part_of_lis(number_increased, stack, max_length, temp);
	free(number_increased);
	free(numbers);
	free(lis);
}
