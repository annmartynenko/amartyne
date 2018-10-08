/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 20:30:26 by amartyne          #+#    #+#             */
/*   Updated: 2018/07/25 20:30:30 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
void ft_putunslnbr(unsigned long int n, a_struct flags)
{
	int len;
	long long int j;

	j = 1;
	len = 0;
	len = a_len(n, 10, len, &j);
	if_flags(flags, len);
	if (n < 10)
		ft_putchar((char)(n + '0'));
	else
	{
		ft_putnbr((char)n / 10);
		ft_putchar((char)(n % 10 + '0'));
	}
	if (flags.minus && flags.width > len)
		n_time((flags.width - len), &ft_putchar, ' ');
}

void ft_putunsnbr(unsigned int n, a_struct flags)
{
	int len;
	long long int j;

	j = 1;
	len = 0;
	len = a_len(n, 10, len, &j);
	if_flags(flags, len);
	if (n < 10)
		ft_putchar((char)(n + '0'));
	else
	{
		ft_putnbr(n / 10);
		ft_putchar((char)(n % 10 + '0'));
	}
	if (flags.minus && flags.width > len)
		n_time((flags.width - len), &ft_putchar, ' ');
}

void ft_putlnbr(long int n, a_struct flags)
{
	int len;
	long long int j;

	j = 1;
	len = 0;
	len = a_len(n, 10, len, &j);
    if_flags(flags, len);
	if (n < 10)
		ft_putchar((char)(n + '0'));
	else
	{
		ft_putnbr(n / 10);
		ft_putchar((char)(n % 10 + '0'));
	}
	if (flags.minus && flags.width > len)
		n_time((flags.width - len), &ft_putchar, ' ');
}