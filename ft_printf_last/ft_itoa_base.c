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
	while (n / (*j) >= base)
	{
		len++;
		(*j) *= base;
	}
	len++;
	return (len);
}

void	fill(unsigned base, unsigned n, long long j, int letter)
{
	char	symbols[16];

	if (letter == 1)
		ft_memcpy(symbols, "0123456789ABCDEF", 16);
	else
		ft_memcpy(symbols, "0123456789abcdef", 16);
	while (j >= 1)
	{
		if (n / j <= base)
			ft_putchar(symbols[n / j]);
		n %= j;
		j /= base;
	}

}

int unsigned_len(unsigned n, unsigned base, int len, unsigned *j)
{
	while (n / (*j) >= base)
	{
		len++;
		(*j) *= base;
	}
	len++;
	return (len);
}

void	ft_itoa_base(long long int n, int base, int letter, a_struct flags)
{
	int len;
	unsigned nb;
	unsigned j;

	j = 1;
	nb = (unsigned)n;
	len = unsigned_len(nb, (unsigned)base, 0, &j);
	if_flags_ito(flags, len, base, letter);
	fill((unsigned)base, nb, j, letter);
	for_minus(flags, len, base);
}