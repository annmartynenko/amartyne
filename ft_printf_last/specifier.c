/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <amartyne@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 16:41:47 by amartyne          #+#    #+#             */
/*   Updated: 2018/10/02 16:41:48 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
void specX2(char *format, int *i, va_list ap, a_struct flags)
{
	(*i) += 2;
	if (format[(*i) - 2] == 'l' && format[(*i) - 1] == 'l' &&\
	(format[(*i)] == 'd' || format[(*i)] == 'i'))
		ft_putnumber(va_arg(ap, long long), flags);
	else if (format[(*i) - 2] == 'h' && format[(*i) - 1] == 'h' &&\
	(format[(*i)] == 'd' || format[(*i)] == 'i'))
		ft_putnumber((signed char)va_arg(ap, int), flags);
	else
		(*i) -= 2;
}

void specifier_jz(char *format, int *i, va_list ap, a_struct flags)
{
	unsigned short j;
	size_t z;

	z = 0;
	(*i)++;
	if (format[(*i) + 1] == 'j')
	{
		if (format[(*i)] == 'd' || format[(*i)] == 'i')
			ft_putnumber((short)va_arg(ap, intmax_t), flags);
		else if (format[(*i)])
		{
			j = (unsigned short)va_arg(ap, uintmax_t);
			convert(format[(*i)], ap, flags, j);
		}
	}
	else if (format[(*i) + 1] == 'z' && (format[(*i)] == 'd' ||\
	format[(*i)] == 'i'))
		ft_putnumber((short)va_arg(ap, size_t), flags);
	else
		(*i)--;
}
void specifier_lh(char *format, int *i, va_list ap, a_struct flags)
{
	unsigned long l;
	unsigned long long ll;

	l = 0;
	ll = 0;
	(*i)++;
	//printf("%c\n", format[(*i) - 1]);
	if (format[(*i) - 1] == 'l')
	{
		if (format[(*i)] == 'd' || format[(*i)] == 'i')
		{
			ft_putnumber(va_arg(ap, long), flags);
		}
		else if (format[(*i)] != 'l')
		{
			l = va_arg(ap, unsigned long);
			convert(format[(*i)], ap, flags, l);
		}
	}
	else if (format[(*i)] == 'h')
	{
		if (format[(*i) + 1] == 'd' || format[(*i) + 1] == 'i')
			ft_putnumber((short)va_arg(ap, int), flags);
		else if (format[(*i) + 1] != 'h')
		{
			l = va_arg(ap, unsigned long long);
			convert(format[(*i) + 1], ap, flags, l);
		}
	}
	else
		(*i)--;
	specX2(format, i, ap, flags);
}