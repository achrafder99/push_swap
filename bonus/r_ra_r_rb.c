/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_ra_r_rb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:55:42 by adardour          #+#    #+#             */
/*   Updated: 2023/02/25 20:16:47 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	r_ra_r_rb(t_top *top, t_top *temp)
{
	rotate_reverse_bonus_a(top);
	rotate_reverse_bonus_b(temp);
}
