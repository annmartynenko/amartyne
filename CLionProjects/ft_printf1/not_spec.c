/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_spec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <amartyne@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 20:46:46 by amartyne          #+#    #+#             */
/*   Updated: 2018/10/07 20:46:47 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
void not_spec(a_struct flags, int *len_res)
{
	if (flags.width && !flags.minus && !flags.nul)
		n_time((flags.width - 1), len_res, ' ');
	else if (flags.width && flags.nul && !flags.minus)
		n_time((flags.width - 1), len_res, '0');
}