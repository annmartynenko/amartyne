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
void	ft_putnumber(long int n, a_struct flags)
{
	long long j;
	int len;

	//printf("%ld\n", n);
	j = 1;
	len = 0;
	len = a_len(n, 10, len, &j);
	if_flags(flags, len);
	//printf("%ld\n", n);
	if (n == -2147483648)
	{
		n = n % 1000000000;
		n = -n;
		ft_putchar('-');
		ft_putchar('2');
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
		//printf("\n%ld\n", n);
	}
	if (flags.width > len && flags.minus && !flags.nul)
		n_time((flags.width - len), &ft_putchar, ' ');
	//ft_putnbr(len);
}