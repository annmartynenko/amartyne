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
int specX2(char *format, int *i, va_list ap, a_struct flags)
{
	int len_res;

	len_res = 0;
	(*i) += 2;
	if (format[(*i) - 2] == 'l' && format[(*i) - 1] == 'l' &&\
	(format[(*i)] == 'd' || format[(*i)] == 'i'))
		ft_putnumber(va_arg(ap, long long), flags, &len_res);
	else if (format[(*i) - 2] == 'h' && format[(*i) - 1] == 'h' &&\
	(format[(*i)] == 'd' || format[(*i)] == 'i'))
		ft_putnumber((signed char)va_arg(ap, int), flags, &len_res);
	else
		(*i) -= 2;
	return (len_res);
}

int specifier_jz(char *format, int *i, va_list ap, a_struct flags)
{
	unsigned short	j;
	size_t			z;
	int				len_res;

	z = 0;
	(*i)++;
	len_res = 0;
	if (format[(*i) + 1] == 'j')
	{
		if (format[(*i)] == 'd' || format[(*i)] == 'i')
			ft_putnumber((short)va_arg(ap, intmax_t), flags, &len_res);
		else if (format[(*i)])
		{
			j = (unsigned short)va_arg(ap, uintmax_t);
			len_res += convert(format[(*i)], ap, flags, j);
		}
	}
	else if (format[(*i) + 1] == 'z')
	{
		if (format[(*i)] == 'd' || format[(*i)] == 'i')
			ft_putnumber((short)va_arg(ap, size_t), flags, &len_res);
		else if (format[(*i)])
		{
			z = va_arg(ap, size_t);
			len_res += convert(format[(*i)],ap,  flags, z);
		}
	}
	else
		(*i)--;
	return (len_res);
}

int specifier_lh(char *format, int *i, va_list ap, a_struct flags)
{
	unsigned long		l;
	unsigned long long	ll;
	int					len_res;

	l = 0;
	ll = 0;
	len_res = 0;
	(*i)++;
	if (format[(*i) - 1] == 'l')
	{
		if (format[(*i)] == 'd' || format[(*i)] == 'i')
			ft_putnumber(va_arg(ap, long), flags, &len_res);
		else if (format[(*i)] != 'l')
		{
			l = va_arg(ap, unsigned long);
			len_res += convert(format[(*i)], ap, flags, l);
		}
	}
	else if (format[(*i) - 1] == 'h')
	{
		if (format[(*i)] == 'd' || format[(*i)] == 'i')
			ft_putnumber((short)va_arg(ap, int), flags, &len_res);
		else if (format[(*i) + 1] != 'h')
		{
			l = va_arg(ap, unsigned long long);
			len_res += convert(format[(*i) + 1], ap, flags, l);
		}
	}
	else
		(*i)--;
	return (len_res);
}

int	specifier(char *format, int *i, va_list ap, a_struct flags)
{
	int len_res;

	len_res = 0;
	len_res += specifier_lh(format, i, ap, flags);
	len_res += specX2(format, i, ap, flags);
	len_res += specifier_jz(format, i, ap, flags);;
	return (len_res);
}