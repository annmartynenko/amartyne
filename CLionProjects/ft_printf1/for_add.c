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
		ft_putunslnbr(va_arg(ap, unsigned long), flags, len_res);
	else if (format[(*i)] == 'o')
		*len_res += ft_itoa_unslong((unsigned short)va_arg(ap, int), 8, low, flags);
	else if (format[(*i)] == 'u')
		ft_putunslnbr((unsigned short)va_arg(ap, int), flags, len_res);
	else if (format[(*i)] == 'O')
		(*len_res) +=  ft_itoa_base(va_arg(ap, unsigned long int), 8, up, flags);
	else if (format[(*i)] == 'U')
		ft_putunslnbr(va_arg(ap, unsigned long int), flags, len_res);
	else if (format[(*i)] == 'D')
		ft_putlnbr(va_arg(ap, long int), flags, len_res);
}

void	for_l(char *format, int *i, va_list ap, a_struct flags, int *len_res)
{
	if (format[(*i)] == 'x')
		*len_res += ft_itoa_unslong(va_arg(ap, unsigned long), 16, low, flags);
	else if (format[(*i)] == 'X')
		*len_res += ft_itoa_unslong(va_arg(ap, unsigned long), 16, up, flags);
	else if (format[(*i)] == 'o')
		*len_res += ft_itoa_unslong(va_arg(ap, unsigned long), 8, low, flags);
	else if (format[(*i)] == 'u')
		ft_putunslnbr(va_arg(ap, unsigned long), flags, len_res);
	else if (format[(*i)] == 's')
		uni_str((wchar_t*)va_arg(ap, char*), flags, len_res);
	else if (format[(*i)] == 'c')
		unicode((wchar_t)va_arg(ap, int), flags, unco, len_res);
	else if (format[(*i)] == 'O')
		(*len_res) +=  ft_itoa_base(va_arg(ap, unsigned long int), 8, up, flags);
	else if (format[(*i)] == 'U')
		ft_putunslnbr(va_arg(ap, unsigned long int), flags, len_res);
	else if (format[(*i)] == 'D')
		ft_putlnbr(va_arg(ap, long int), flags, len_res);
	else if (format[(*i)] == 'p')
		(*len_res) +=  ft_itoa_base(va_arg(ap, long long), 16, P, flags);
}

void	for_ll(char *format, int *i, va_list ap, a_struct flags, int *len_res)
{
	if (format[(*i)] == 'd' || format[(*i)] == 'i')
		ft_putnumber(va_arg(ap, long long), flags, len_res);
	else if (format[(*i)] == 'x')
		*len_res += ft_itoa_max(va_arg(ap, unsigned long long), 16, low, flags);
	else if (format[(*i)] == 'X')
		*len_res += ft_itoa_max(va_arg(ap, unsigned long long), 16, up, flags);
	else if (format[(*i)] == 'o')
		*len_res += ft_itoa_unslong((unsigned long long)va_arg(ap, uintmax_t), 8, low, flags);
	else if (format[(*i)] == 'u')
		ft_putunslnbr((unsigned long long)va_arg(ap, uintmax_t), flags, len_res);
	else if (format[(*i)] == 'O')
		(*len_res) +=  ft_itoa_base(va_arg(ap, unsigned long int), 8, up, flags);
	else if (format[(*i)] == 'U')
		ft_putunslnbr(va_arg(ap, unsigned long int), flags, len_res);
	else if (format[(*i)] == 'D')
		ft_putlnbr(va_arg(ap, long int), flags, len_res);
}

void for_hh(char *format, int *i, va_list ap, a_struct flags, int *len_res)
{
	if(format[(*i)] == 'd' || format[(*i)] == 'i')
		ft_putschar((signed char)va_arg(ap, int), flags, len_res);
	else if (format[(*i)] == 'x')
		*len_res += ft_itoa_max((unsigned char)va_arg(ap, int), 16, low, flags);
	else if (format[(*i)] == 'X')
		*len_res += ft_itoa_max((unsigned char)va_arg(ap, int), 16, up, flags);
	else if (format[(*i)] == 'o')
		*len_res += ft_itoa_unslong((unsigned char)va_arg(ap, int), 8, low, flags);
	else if (format[(*i)] == 'u')
		ft_putunslnbr((unsigned char)va_arg(ap, int), flags, len_res);
	else if (format[(*i)] == 'O')
		(*len_res) +=  ft_itoa_base((unsigned short)va_arg(ap, int), 8, up, flags);
	else if (format[(*i)] == 'U')
		ft_putunslnbr((unsigned short)va_arg(ap, int), flags, len_res);
	else if (format[(*i)] == 'D')
		ft_putlnbr((unsigned short)va_arg(ap, int), flags, len_res);
	else if (format[(*i)] == 'C')
		unicode(va_arg(ap, wchar_t), flags, unco, len_res);
	else if (format[(*i)] == 'S')
		uni_str((wchar_t*)va_arg(ap, char*), flags, len_res);
}