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

void for_minus(a_struct flags, int len, int base)
{
	int dot;

	dot = 0;
	if (flags.hash && base == 16)
		dot = 2;
	else if (flags.hash && base == 8)
		dot = 1;
	if (flags.minus && flags.width > len)
	{
		if (flags.width > flags.precision)
			n_time((flags.width - flags.precision - dot), &ft_putchar, ' ');
		else if (!flags.width && !flags.precision)
			n_time((flags.width - len - dot), &ft_putchar, ' ');
	}
}

void print_space(a_struct flags, int len, int base, int letter)
{
	if (flags.hash && base == 8)
	{
		if (!flags.minus)
			n_time((flags.width - len - 1), &ft_putchar, ' ');
		ft_putchar('0');
	}
	else if ((flags.hash && base == 16) || letter == P)
	{
		if (!flags.minus)
			n_time((flags.width - len - 2), &ft_putchar, ' ');
		if (letter == low)
			ft_putstr("0x");
		else if (letter == up)
			ft_putstr("0X");
	}
	else
		n_time((flags.width - len), &ft_putchar, ' ');
}

void print_nul(a_struct flags, int len, int base, int letter)
{
	if (flags.hash && base == 8)
	{
		ft_putchar('0');
		n_time((flags.width - len - 1), &ft_putchar, '0');
	}
	else if (flags.hash && base == 16)
	{
		if (letter == low)
			ft_putstr("0x");
		else if (letter == up)
			ft_putstr("0X");
		n_time((flags.width - len - 2), &ft_putchar, '0');
	}
	else
		n_time((flags.width - len), &ft_putchar, '0');
}

void print_nul_pr(a_struct flags, int len, int base, int letter)
{
	if (flags.hash && base == 8)
	{
		ft_putchar('0');
		n_time((flags.precision - len), &ft_putchar, '0');
	}
	else if (flags.hash && base == 16)
	{
		if (letter == low)
			ft_putstr("0x");
		else if (letter == up)
			ft_putstr("0X");
		n_time((flags.precision - len), &ft_putchar, '0');
	}
	else
		n_time((flags.precision - len), &ft_putchar, '0');
}

void if_flags_ito(a_struct flags, int len, int base, int letter)
{
	if (flags.width > len && flags.precision && \
	flags.width > flags.precision && !flags.hash)
	{
		n_time((flags.width - flags.precision), &ft_putchar, ' ');
		n_time((flags.precision - len), &ft_putchar, '0');
	}
	else if (flags.width > len && flags.width <= flags.precision &&\
	!flags.hash)
		n_time((flags.precision - len), &ft_putchar, '0');
	else if (flags.width > len && flags.nul)
		print_nul(flags, len, base, letter);
	else if (flags.width > len && !flags.minus && !flags.nul &&\
	!flags.precision)
		print_space(flags, len, base, letter);
	else if (flags.precision && flags.precision <= flags.width &&\
	flags.hash)
		print_nul_pr(flags, len, base, letter);
	else if (flags.precision && flags.precision > flags.width &&\
	flags.hash)
		print_nul_pr(flags, len, base, letter);
	else if (flags.hash)
		print_space(flags, len, base, letter);
}