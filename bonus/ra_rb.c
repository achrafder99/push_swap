/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:54:19 by adardour          #+#    #+#             */
/*   Updated: 2023/02/01 18:12:35 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	rotate_a_rotate_b(t_top *top, t_top *temp)
{
	rotate_bonus_a(top);
	rotate_bonus_b(temp);
}
