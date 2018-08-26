/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 18:01:29 by amartyne          #+#    #+#             */
/*   Updated: 2018/07/19 18:01:31 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int number(char *format, int i, va_list ap)
{
	if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
	{
		i++;
		ft_putnbr(va_arg(ap, int));
	}
	if (format[i] == '%' && format[i + 1] == 'D')
	{
		i++;
		ft_putlnbr(va_arg(ap, long int));
	}
	if (format[i] == '%' && format[i + 1] == 'o')
	{
		i++;
		ft_putstr(ft_itoa_base(va_arg(ap, int), 8));
	}
	if (format[i] == '%' && format[i + 1] == 'O')
	{
		i++;
		ft_putstr(ft_itoa_base(va_arg(ap, unsigned long int), 8));
	}
	if (format[i] == '%' && format[i + 1] == 'x')
	{
		i++;
		ft_putstr(ft_itoa_base(va_arg(ap, int), 16));
	}
	if (format[i] == '%' && format[i + 1] == 'X')
	{
		i++;
		ft_putstr(char_up(ft_itoa_base(va_arg(ap, int), 16)));
	}
	if (format[i] == '%' && format[i + 1] == 'u')
	{
		i++;
		ft_putunsnbr(va_arg(ap, unsigned int));
	}
	if (format[i] == '%' && format[i + 1] == 'U')
	{
		i++;
		ft_putunslnbr(va_arg(ap, unsigned long int));
	}
	return (i);
}

int word(char *format, int i, va_list ap)
{
	if(format[i] == '%' && format[i + 1] == 's')
	{
		i++;
		ft_putstr(va_arg(ap, char*));
	}
	if(format[i] == '%' && format[i + 1] == 'S')
	{
		i++;
		uni_str(va_arg(ap, wchar_t*));
	}
	if(format[i] == '%' && format[i + 1] == 'c')
	{
		i++;
		ft_putchar(va_arg(ap, int));
	}
	if(format[i] == '%' && format[i + 1] == 'p')
	{
		i++;
		ft_putstr("0x");
		ft_putstr(ft_itoa_base(va_arg(ap, long long), 16));
	}
	if(format[i] == '%' && format[i + 1] == 'C')
	{
		i++;
		unicode(va_arg(ap, wchar_t));
	}
	return(i);
}