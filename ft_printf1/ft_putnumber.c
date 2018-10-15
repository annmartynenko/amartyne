/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 17:39:56 by amartyne          #+#    #+#             */
/*   Updated: 2018/09/18 17:39:57 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void 	print_numb(long int n, a_struct flags, int len, int *len_res)
{
	if (n < 10)
		(*len_res) += ft_putchar(n + '0');
	else
	{
		ft_putnbr((n / 10), len_res);
		(*len_res) += ft_putchar(n % 10 + '0');
	}
	//printf("\nlen %d\n", flags.width - len);
	if (flags.width > len && flags.minus)
	{
		(*len_res) += n_time((flags.width - len), &ft_putchar, ' ');
	}
}

void	ft_putnumber(long int n, a_struct flags, int *len_res)
{
	long long j;
	long long nb;
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
	len += a_len(nb, 10, len, &j);
	//printf("\nlen %d\n", len);
	if_flags_d(flags, &len, len_res);
	if (nb == -2147483648)
	{
		nb = nb % 1000000000;
		nb = -nb;
		(*len_res) += ft_putchar('-');
		(*len_res) += ft_putchar('2');
	}
	if (n < 0 && (!flags.nul || flags.minus))
	{
		(*len_res) += ft_putchar('-');
	}
	else if (n >= 0 && flags.plus && !flags.nul && !flags.minus &&\
	flags.precision >= flags.width)
		(*len_res) += ft_putchar('+');
	print_numb(nb, flags, len, len_res);

}

void 	print_max(intmax_t n, a_struct flags, int len, int *len_res)
{
	if (n < 10)
		(*len_res) += ft_putchar((char)(n + '0'));
	else
	{
		ft_putmax(n / 10, flags, len_res);
		(*len_res) += ft_putchar((char)(n % 10 + '0'));
	}
	if (flags.width > len && flags.minus && !flags.nul)
		(*len_res) += n_time((flags.width - len), &ft_putchar, ' ');
}

void	ft_putmax(intmax_t n, a_struct flags, int *len_res)
{
	long long j;
	intmax_t nb;
	int len;

	nb = n;
	j = 1;
	len = 0;
	if (n < 0)
	{
		nb = -nb;
		len++;
	}
	len = a_len(nb, 10, len, &j);
	if_flags(flags, len, len_res);
	if (nb == -2147483648)
	{
		nb = nb % 1000000000;
		nb = -nb;
		(*len_res) += ft_putchar('-');
		(*len_res) += ft_putchar('2');
	}
	if (n < 0)
		(*len_res) += ft_putchar('-');
	print_max(nb, flags, len, len_res);
}