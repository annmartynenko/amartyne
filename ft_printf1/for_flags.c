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
#include <stdio.h>

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
		if (flags.width > flags.precision && flags.precision != -1)
			n_time((flags.width - flags.precision - dot), len_res, ' ');
		else if (flags.width && flags.precision == -1)
			n_time((flags.width - len - dot), len_res, ' ');
	}
}

int print_space(a_struct flags, int len, int base, int letter)
{
	int len_res;

	len_res = 0;
	if (flags.hash && base == 8)
	{
		if (!flags.minus)
			n_time((flags.width - len - 1), &len_res, ' ');
		if (letter != -1)
			len_res += ft_putchar('0');
	}
	else if ((flags.hash && base == 16) || letter == P)
	{
		if (!flags.minus)
			n_time((flags.width - len - 2), &len_res, ' ');
		if (letter == low)
			len_res += ft_putstr("0x");
		else if (letter == up)
			len_res += ft_putstr("0X");
		else if (letter == P)
			len_res += ft_putstr("0x");
	}
	else
		n_time((flags.width - len), &len_res, ' ');
	return (len_res);
}

int print_nul(a_struct flags, int len, int base, int letter)
{
	int len_res;

	len_res = 0;
	if (flags.hash && base == 8)
	{
		len_res += ft_putchar('0');
		n_time((flags.width - len - 1), &len_res, '0');
	}
	else if (flags.hash && base == 16)
	{
		if (letter == low)
			len_res += ft_putstr("0x");
		else if (letter == up)
			len_res += ft_putstr("0X");
		if (!flags.minus)
			n_time((flags.width - len - 2), &len_res, '0');
	}
	else if (letter == P)
	{
		len_res += ft_putstr("0x");
		n_time((flags.width - len - 2), &len_res, '0');
	}
	else if (flags.precision != -1)
		n_time((flags.precision - len), &len_res, '0');
	else
		n_time((flags.width - len), &len_res, '0');
	return (len_res);
}

int print_nul_pr(a_struct flags, int len, int base, int letter)
{
	int len_res;

	len_res = 0;
	if (flags.hash && base == 8)
	{
		len_res += ft_putchar('0');
		n_time((flags.precision - len), &len_res, '0');
	}
	else if (flags.hash && base == 16)
	{
		if (letter == low)
			len_res += ft_putstr("0x");
		else if (letter == up)
			len_res += ft_putstr("0X");
		n_time((flags.precision - len), &len_res, '0');
	}
	else
		n_time((flags.precision - len), &len_res, '0');
	return(len_res);
}

int if_flags_ito(a_struct flags, int len, int base, int letter)
{
	int len_res;

	len_res = 0;
	if(letter == P && !flags.minus && !flags.nul && !flags.width)
		len_res += ft_putstr("0x");
	if (flags.width > len && flags.precision != -1 && \
	flags.width > flags.precision && !flags.hash && flags.precision >= len &&\
	!flags.minus)
	{
		n_time((flags.width - flags.precision), &len_res, ' ');
		n_time((flags.precision - len), &len_res, '0');
	}
	else if (flags.width > len && flags.precision != -1 &&\
	flags.width > flags.precision && !flags.hash && !flags.minus)
	{
		if (flags.precision == 0)
			len = 0;
		n_time((flags.width - len), &len_res, ' ');
	}
	else if (flags.width > len && flags.width <= flags.precision &&\
	!flags.hash)
		n_time((flags.precision - len), &len_res, '0');
	else if (flags.width > len && flags.nul && !flags.minus) //+
		len_res += print_nul(flags, len, base, letter);
	else if (flags.width > len && !flags.minus && !flags.nul &&\
	flags.precision == -1)
		len_res += print_space(flags, len, base, letter);
	else if (flags.precision != -1 && flags.precision <= flags.width &&\
	flags.hash && flags.width) //g
		len_res += print_nul_pr(flags, len, base, letter);
	else if (flags.precision != -1 && flags.precision > flags.width &&\
	flags.hash) //g
		len_res += print_nul_pr(flags, len, base, letter);
	else if (flags.hash && flags.precision == -1) // #o
		len_res += print_space(flags, len, base, letter);
	else if (flags.precision != -1)
		len_res += print_nul(flags, len, base, letter);
	return(len_res);
}