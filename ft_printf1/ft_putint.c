/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <amartyne@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 16:07:19 by amartyne          #+#    #+#             */
/*   Updated: 2018/10/20 16:07:21 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void 	print_n(int n, a_struct flags, int len, int *len_res)
{
	if (n < 10)
		(*len_res) += ft_putchar(n + '0');
	else
	{
		ft_putnbr((n / 10), len_res);
		(*len_res) += ft_putchar(n % 10 + '0');
	}
	if (flags.width > len && flags.minus)
	{
		(*len_res) += n_time((flags.width - len), &ft_putchar, ' ');
	}
}

void	ft_putint(int n, a_struct flags, int *len_res)
{
	int j;
	int nb;
	int len;

	flags.sp = 'd';
	nb = n;
	j = 1;
	len = 0;
	if (n < 0)
	{
		nb = -nb;
		flags.plus = 100;
	}
	len += a_len(nb, 10, len, (long long *)&j);
	if_flags_d(flags, &len, len_res);
	if (n < 0 && ((!flags.nul && !flags.width && !flags.precision) || flags.minus ||\
	(flags.nul && !flags.width && flags.precision == -1)))
	{
		(*len_res) += ft_putchar('-');
		len++;
	}
	else if (n >= 0 && flags.plus && !flags.nul && !flags.minus &&\
	flags.precision != -1 >= flags.width)
		(*len_res) += ft_putchar('+');
	print_n(nb, flags, len, len_res);
}

void 	print_sch(signed char n, a_struct flags, int len, int *len_res)
{
	if (n < 10)
		(*len_res) += ft_putchar(n + '0');
	else
	{
		ft_putnbr((n / 10), len_res);
		(*len_res) += ft_putchar(n % 10 + '0');
	}
	if (flags.width > len && flags.minus)
	{
		(*len_res) += n_time((flags.width - len), &ft_putchar, ' ');
	}
}

void	ft_putschar(signed char n, a_struct flags, int *len_res)
{
	int j;
	int nb;
	int len;

	flags.sp = 'd';
	nb = n;
	j = 1;
	len = 0;
	if (n < 0)
	{
		nb = -nb;
		flags.plus = 100;
	}
	len += a_len(nb, 10, len, (long long *)&j);
	if_flags_d(flags, &len, len_res);
	if (n < 0 && ((!flags.nul && !flags.width && flags.precision == -1) || flags.minus ||\
	(flags.nul && !flags.width && flags.precision == -1)))
	{
		(*len_res) += ft_putchar('-');
		len++;
	}
	else if (n >= 0 && flags.plus && !flags.nul && !flags.minus &&\
	flags.precision != -1 >= flags.width)
		(*len_res) += ft_putchar('+');
	print_sch(nb, flags, len, len_res);
}