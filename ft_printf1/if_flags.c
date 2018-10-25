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
	if (flags.width > len && flags.nul && !flags.minus && flags.plus)
	{
			(*len_res) += ft_putchar('+');
		(*len_res) += n_time((flags.width - len - 1), &ft_putchar, '0');
	}
	else if (flags.width > len && !flags.nul && flags.plus && !flags.minus)
	{
		(*len_res) += n_time((flags.width - len - 1), &ft_putchar, ' ');
		(*len_res) += ft_putchar('+');
	}
	else if (flags.width > len && !flags.minus && !flags.nul && \
    len > flags.precision)
		*len_res += n_time((flags.width - len), &ft_putchar, ' ');
	else if (flags.width > len && flags.precision != -1 && \
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
	else if (flags.precision != -1)
	{
		if (flags.space)
			(*len_res) += ft_putchar(' ');
		(*len_res) += n_time((flags.precision - len), &ft_putchar, '0');
	}
	else if (flags.space && flags.sp == 'd' && !flags.plus && !flags.minus)
		(*len_res) += ft_putchar(' ');
}

void	if_flags_d(a_struct flags, int *len, int *len_res)
{
	if (flags.width > (*len) && flags.nul && !flags.minus && flags.precision == -1)
	{
		if (flags.plus == '+')
		{
			(*len)++;
			(*len_res) += ft_putchar('+');
		}
		else if (flags.plus == 100)
		{
			(*len)++;
			(*len_res) += ft_putchar('-');
		}
		(*len_res) += n_time((flags.width - (*len)), &ft_putchar, '0');
	}
	else if (flags.width > (*len) && !flags.nul && flags.plus != 100 && !flags.minus &&\
	flags.precision == -1)
	{
		if (flags.plus)
			(*len)++;
		(*len_res) += n_time((flags.width - (*len) - 1), &ft_putchar, ' ');
		if (flags.plus)
			(*len_res) += ft_putchar('+');
		(*len_res) += ft_putchar('0');
	}
	else if (flags.width > (*len) && !flags.minus && !flags.nul && \
	(*len) > flags.precision)
	{
		if (flags.plus == 100)
			(*len)++;
		if (flags.precision == 0)
			(*len) = 0;
		*len_res += n_time((flags.width - (*len)), &ft_putchar, ' ');
		if (flags.plus == 100)
			(*len_res) += ft_putchar('-');
	}
	else if (flags.width > (*len) && flags.precision != -1 && \
    flags.width > flags.precision && !flags.minus)
	{
		(*len_res) += n_time((flags.width - flags.precision), &ft_putchar, ' ');
		(*len_res) += n_time((flags.precision - (*len)), &ft_putchar, '0');
	}
	else if (flags.width > (*len) && flags.width <= flags.precision)
	{
		if (flags.space)
			(*len_res) += ft_putchar(' ');
		(*len_res) += n_time((flags.precision - (*len)), &ft_putchar, '0');
	}
	else if (flags.width > (*len) && flags.nul && !flags.minus)
	{
		if (flags.space)
		{
			(*len_res) += ft_putchar(' ');
			len++;
		}
		*len_res += n_time((flags.width - (*len)), &ft_putchar, '0');
	}
	else if (flags.precision != -1)
	{
		if (flags.space)
		{
			(*len)++;
			(*len_res) += ft_putchar(' ');
		}
		if (flags.plus)
		{
			len++;
			(*len_res) += ft_putchar('+');
		}
		(*len_res) += n_time((flags.precision - (*len)), &ft_putchar, '0');
		(*len) += flags.precision - (*len);
	}
	else if (flags.space && flags.sp == 'd' && !flags.plus && !flags.minus)
		(*len_res) += ft_putchar(' ');
}