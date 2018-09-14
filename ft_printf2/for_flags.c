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

void if_flags(a_struct flags, int len)
{
	if (flags.width > len && flags.nul && flags.plus)
	{
		ft_putchar('+');
		n_time((flags.width - len - 1), &ft_putchar, '0');
	}
	else if (flags.width > len && !flags.nul && flags.plus)
	{
		n_time((flags.width - len - 1), &ft_putchar, ' ');
		ft_putchar('+');
	}
	else if (flags.width > len && flags.precision && \
	flags.width > flags.precision)
	{
		n_time((flags.width - flags.precision), &ft_putchar, ' ');
		n_time((flags.precision - len), &ft_putchar, '0');
	}
	else if (flags.width > len && flags.width <= flags.precision)
	{
		if (flags.space)
			ft_putchar(' ');
		n_time((flags.precision - len), &ft_putchar, '0');
	}
	else if (flags.width > len && !flags.minus && !flags.nul)
		n_time((flags.width - len), &ft_putchar, ' ');
	else if (flags.width > len && flags.nul)
		n_time((flags.width - len), &ft_putchar, '0');
	else if (flags.precision)
	{
		if (flags.space)
			ft_putchar(' ');
		n_time((flags.precision - len), &ft_putchar, '0');
	}
	else if (flags.space)
		ft_putchar(' ');
	else if (flags.plus)
		ft_putchar('+');
}

void print_space(a_struct flags, int len, int base, int letter)
{
	if (flags.hash && base == 8)
	{
		n_time((flags.width - len - 1), &ft_putchar, ' ');
		ft_putchar('0');
	}
	else if ((flags.hash && base == 16 && letter == low) || letter == P)
	{
		n_time((flags.width - len - 2), &ft_putchar, ' ');
		ft_putstr("0x");
	}
	else if (flags.hash && base == 16 && letter == up)
	{
		n_time((flags.width - len - 2), &ft_putchar, ' ');
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
	else if (flags.hash && base == 16 && letter == low)
	{
		ft_putstr("0x");
		n_time((flags.width - len - 2), &ft_putchar, '0');
	}
	else if (flags.hash && base == 16 && letter == up)
	{
		ft_putstr("0X");
		n_time((flags.width - len - 2), &ft_putchar, '0');
	}
	else
		n_time((flags.width - len), &ft_putchar, '0');
}

void if_flags_ito(a_struct flags, int len, int base, int letter)
{
	int dop;

	dop = 0;
	if (flags.hash)
	{
		if (base == 8)
			dop++;
		if (base == 16)
			dop += 2;
	}
	//ft_putnbr(dop);
	if (flags.width > len && flags.nul)
		n_time((flags.width - len - dop), &ft_putchar, '0');
	else if (flags.width > len && flags.precision && \
	flags.width > flags.precision && !flags.hash)
	{
		n_time((flags.width - flags.precision), &ft_putchar, ' ');
		n_time((flags.precision - len), &ft_putchar, '0');
	}
	else if (flags.width > len && flags.width <= flags.precision && !flags.hash)
	{
		if (flags.space)
			ft_putchar(' ');
		n_time((flags.precision - len), &ft_putchar, '0');
	}
	else if (flags.width > len && flags.nul)
		print_nul(flags, len, base, letter);
	else if (flags.width > len && !flags.minus && !flags.nul &&\
	!flags.precision)
		print_space(flags, len, base, letter);
	else if (flags.precision)
	{
		ft_putnbr(dop);
		if (flags.space)
			ft_putchar(' ');
		if (flags.hash)
			print_nul(flags, len, base, letter);

		n_time((flags.precision - len), &ft_putchar, '0');
	}
	else if (flags.space)
		ft_putchar(' ');
}