/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 17:49:24 by amartyne          #+#    #+#             */
/*   Updated: 2018/07/23 17:49:26 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int a_len(long long int n, int base, int len, long long *j)
{
	while (n / *j >= base)
	{
		len++;
		*j *= base;
	}
	len++;
	return (len);
}

int sign(long long int *n)
{
	int len;

	len = 0;
	if (*n < 0)
	{
		*n = -(*n);
		len = 1;
	}
	return (len);
}

void	fill(int base, long long int n, long long j, int letter)
{
	char	symbols[16];

	if (letter == 1)
		ft_memcpy(symbols, "0123456789ABCDEF", 16);
	else
		ft_memcpy(symbols, "0123456789abcdef", 16);
	if (n < 0)
		n = -n;
	while (j >= 1)
	{
		if (n / j <= base)
			ft_putchar(symbols[n / j]);
		else
			ft_putchar(n / j + '0');
		n %= j;
		j /= base;
	}

}

void	ft_itoa_base(long long int n, int base, int letter, a_struct flags)
{
	int len;
	long long int nb;
	long long j;

	j = 1;
	nb = n;
	len = sign(&nb);
	len = a_len(nb, base, len, &j);
	if_flags_ito(flags, len, base, letter);
	if (n < 0)
		ft_putchar('-');
	fill(base, nb, j, letter);
	if (flags.minus && flags.width > len)
		n_time((flags.width - len), &ft_putchar, ' ');
}