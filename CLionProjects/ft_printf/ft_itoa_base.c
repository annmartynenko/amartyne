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

char *fill(int base, long long int n, long long j, char *array)
{
	int i;
	char	symbols[16];

	ft_memcpy(symbols, "0123456789abcdef", 16);
	i = 0;
	if (array[i] == '-')
		i++;
	while (j >= 1)
	{
		if (n / j <= base)
			array[i++] = symbols[n / j];
		else
			array[i++] = n / j + '0';
		n %= j;
		j /= base;
	}
	array[i] = '\0';
	return (array);
}

char *ft_itoa_base(long long int n, int base)
{
	char *a;
	int len;
	long long int nb;
	long long j;

	j = 1;
	nb = n;
	len = 0;
	len = sign(&nb);
	len = a_len(nb, base, len, &j);
	a = (char*)malloc(sizeof(char) * len + 1);
	if (!a)
		return (0);
	if (n < 0)
		a[0] = '-';
	a = fill(base, nb, j, a);
	return (a);
}