/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 15:06:59 by amartyne          #+#    #+#             */
/*   Updated: 2018/09/09 15:07:02 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void for_minus(a_struct flags, int len, int base, int *len_res)
{
	int dot;

	dot = 0;
	if (flags.hash && base == 16)
		dot = 2;
	else if (flags.hash && base == 8)
		dot = 1;
	if (flags.minus && flags.width > len)
	{
		if (flags.width > flags.precision && flags.precision)
			(*len_res) += n_time((flags.width - flags.precision - dot), &ft_putchar, ' ');
		else if (flags.width && !flags.precision)
			(*len_res) += n_time((flags.width - len - dot), &ft_putchar, ' ');
	}
}

int print_space(a_struct flags, int len, int base, int letter)
{
	int len_res;

	len_res = 0;
	if (flags.hash && base == 8)
	{
		if (!flags.minus)
			len_res += n_time((flags.width - len - 1), &ft_putchar, ' ');
		len_res += ft_putchar('0');
	}
	else if ((flags.hash && base == 16) || letter == P)
	{
		if (!flags.minus)
			len_res += n_time((flags.width - len - 2), &ft_putchar, ' ');
		if (letter == low)
			len_res += ft_putstr("0x");
		else if (letter == up)
			len_res += ft_putstr("0X");
	}
	else
		len_res += n_time((flags.width - len), &ft_putchar, ' ');
	return (len_res);
}

int print_nul(a_struct flags, int len, int base, int letter)
{
	int len_res;

	len_res = 0;
	if (flags.hash && base == 8)
	{
		len_res += ft_putchar('0');
		len_res += n_time((flags.width - len - 1), &ft_putchar, '0');
	}
	else if (flags.hash && base == 16)
	{
		if (letter == low)
			len_res += ft_putstr("0x");
		else if (letter == up)
			len_res += ft_putstr("0X");
		len_res += n_time((flags.width - len - 2), &ft_putchar, '0');
	}
	else
		len_res += n_time((flags.width - len), &ft_putchar, '0');
	return (len_res);
}

int print_nul_pr(a_struct flags, int len, int base, int letter)
{
	int len_res;

	len_res = 0;
	if (flags.hash && base == 8)
	{
		len_res += ft_putchar('0');
		len_res += n_time((flags.precision - len), &ft_putchar, '0');
	}
	else if (flags.hash && base == 16)
	{
		if (letter == low)
			len_res += ft_putstr("0x");
		else if (letter == up)
			len_res += ft_putstr("0X");
		len_res += n_time((flags.precision - len), &ft_putchar, '0');
	}
	else
		len_res += n_time((flags.precision - len), &ft_putchar, '0');
	return(len_res);
}

int if_flags_ito(a_struct flags, int len, int base, int letter)
{
	int len_res;

	len_res = 0;
	if (flags.width > len && flags.precision && \
	flags.width > flags.precision && !flags.hash)
	{
		len_res += n_time((flags.width - flags.precision), &ft_putchar, ' ');
		len_res += n_time((flags.precision - len), &ft_putchar, '0');
	}
	else if (flags.width > len && flags.width <= flags.precision &&\
	!flags.hash)
		len_res += n_time((flags.precision - len), &ft_putchar, '0');
	else if (flags.width > len && flags.nul)
		len_res += print_nul(flags, len, base, letter);
	else if (flags.width > len && !flags.minus && !flags.nul &&\
	!flags.precision)
		len_res += print_space(flags, len, base, letter);
	else if (flags.precision && flags.precision <= flags.width &&\
	flags.hash)
		len_res += print_nul_pr(flags, len, base, letter);
	else if (flags.precision && flags.precision > flags.width &&\
	flags.hash)
		len_res += print_nul_pr(flags, len, base, letter);
	else if (flags.hash)
		len_res += print_space(flags, len, base, letter);
	return(len_res);
}