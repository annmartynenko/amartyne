/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <amartyne@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:37:00 by amartyne          #+#    #+#             */
/*   Updated: 2018/10/22 14:37:01 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
void	for_h(char *format, int *i, va_list ap, a_struct flags, int *len_res)
{
	if (format[(*i)] == 'x')
		*len_res += ft_itoa_unslong((unsigned short)va_arg(ap, int), 16, low,\
		flags);
	else if (format[(*i)] == 'X')
		*len_res += ft_itoa_unslong((unsigned short)va_arg(ap, int), 16, up,\
		flags);
	else if (format[(*i)] == 'U')
		ft_putunslnbr((unsigned short)va_arg(ap, int), flags, len_res);
	else if (format[(*i)] == 'u' || format[(*i)] == 'o')
		*len_res += convert(format[(*i) + 1], ap, flags,\
		(unsigned short)va_arg(ap, int));
}

void	for_l(char *format, int *i, va_list ap, a_struct flags, int *len_res)
{
	if (format[(*i)] == 'x')
		*len_res += ft_itoa_unslong(va_arg(ap, unsigned long), 16, low, flags);
	else if (format[(*i)] == 'X')
		*len_res += ft_itoa_unslong(va_arg(ap, unsigned long), 16, up, flags);
	else if (format[(*i)] == 'u' || format[(*i)] == 'o')
		*len_res += convert(format[(*i)], ap, flags, va_arg(ap, unsigned long));
}

void	for_ll(char *format, int *i, va_list ap, a_struct flags, int *len_res)
{
	if (format[(*i)] == 'd' || format[(*i)] == 'i')
		ft_putnumber(va_arg(ap, long long), flags, len_res);
	else if (format[(*i)] == 'x')
		*len_res += ft_itoa_max(va_arg(ap, unsigned long long), 16, low, flags);
	else if (format[(*i)] == 'X')
		*len_res += ft_itoa_max(va_arg(ap, unsigned long long), 16, up, flags);
	else if((format[(*i)] == 'u' || format[(*i)] == 'o'))
		*len_res += convert(format[(*i)], ap, flags, (unsigned long long)va_arg(ap, uintmax_t));
}

void for_hh(char *format, int *i, va_list ap, a_struct flags, int *len_res)
{
	if(format[(*i)] == 'd' || format[(*i)] == 'i')
		ft_putint((signed char)va_arg(ap, int), flags, len_res);
	else if (format[(*i)] == 'x')
		*len_res += ft_itoa_max((unsigned char)va_arg(ap, int), 16, low, flags);
	else if (format[(*i)] == 'X')
		*len_res += ft_itoa_max((unsigned char)va_arg(ap, int), 16, up, flags);
	else if (format[(*i)] == 'u' || format[(*i)] == 'o')
		*len_res += convert(format[(*i)], ap, flags, (unsigned char)va_arg(ap, int));
}