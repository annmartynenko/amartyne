/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:16:35 by amartyne          #+#    #+#             */
/*   Updated: 2018/09/15 16:16:38 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	if_flags(a_struct flags, int len, int *len_res)
{
	if (flags.width > len && flags.nul && flags.plus && !flags.minus)
	{
		(*len_res) += ft_putchar('+');
		(*len_res) += n_time((flags.width - len - 1), &ft_putchar, ' ');
	}
	else if (flags.width > len && !flags.nul && flags.plus && !flags.minus)
	{
		(*len_res) += n_time((flags.width - len - 1), &ft_putchar, ' ');
		(*len_res) += ft_putchar('+');
	}
	else if (flags.width > len && !flags.minus && !flags.nul && \
    len > flags.precision)
		*len_res += n_time((flags.width - len), &ft_putchar, ' ');
	else if (flags.width > len && flags.precision && \
    flags.width > flags.precision)
	{
		(*len_res) += n_time((flags.width - flags.precision), &ft_putchar, ' ');
		(*len_res) += n_time((flags.precision - len), &ft_putchar, '0');
	}
	else if (flags.width > len && flags.width <= flags.precision)
	{
		if (flags.space)
			(*len_res) += ft_putchar(' ');
		(*len_res) += n_time((flags.precision - len), &ft_putchar, '0');
	}
	else if (flags.width > len && flags.nul && !flags.minus)
	{
		if (flags.space)
		{
			(*len_res) += ft_putchar(' ');
			len++;
		}
		*len_res += n_time((flags.width - len), &ft_putchar, '0');
	}
	else if (flags.precision)
	{
		if (flags.space)
			(*len_res) += ft_putchar(' ');
		(*len_res) += n_time((flags.precision - len), &ft_putchar, '0');
	}
	else if (flags.space && flags.sp == 'd')
		(*len_res) += ft_putchar(' ');
	else if (flags.plus && flags.sp == 'd')
		(*len_res) += ft_putchar('+');
}