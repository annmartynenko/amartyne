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

void 	print_numb(long int n, a_struct flags, int len, int *len_res)
{
	if (n < 10)
		(*len_res) += ft_putchar(n + '0');
	else
	{
		ft_putnbr((n / 10), len_res);
		(*len_res) += ft_putchar(n % 10 + '0');
	}
	if (flags.width > len && flags.minus && !flags.nul)
		(*len_res) += n_time((flags.width - len), &ft_putchar, ' ');
}

void	ft_putnumber(long int n, a_struct flags, int *len_res)
{
	long long j;
	int len;

	j = 1;
	len = 0;
	len = a_len(n, 10, len, &j);
	if_flags(flags, len, len_res);
	if (n == -2147483648)
	{
		n = n % 1000000000;
		n = -n;
		(*len_res) += ft_putchar('-');
		(*len_res) += ft_putchar('2');
	}
	if (n < 0)
	{
		n = -n;
		(*len_res) += ft_putchar('-');
	}
	print_numb(n, flags, len, len_res);
}