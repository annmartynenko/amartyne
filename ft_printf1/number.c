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
#include <stdio.h>
void    number(char format, va_list ap, a_struct flags, int *len_res)
{
	if ((format == 'd' || format == 'i'))
		ft_putnumber(va_arg(ap, int), flags, len_res);
	else if (format == 'D')
		ft_putlnbr(va_arg(ap, long int), flags, len_res);
	else if (format == 'U')
		ft_putunslnbr(va_arg(ap, unsigned long int), flags, len_res);
	else if (format == 'O')
		(*len_res) +=  ft_itoa_base(va_arg(ap, unsigned long int), 8, up, flags);
	else if (format == 'p')
		(*len_res) +=  ft_itoa_base(va_arg(ap, long long), 16, P, flags);
}

unsigned long	check(char format, va_list ap)
{
	int o;
	unsigned int u;

	u = 0;
	o = 0;
	if (format == 'o' || format == 'x' || format == 'X')
	{
		o = va_arg(ap, int);
		return (o);
	}
	else if (format == 'u')
	{
		u = (unsigned int)va_arg(ap, intmax_t);
		return (u);
	}
	return (0);
}

int    convert(char format, va_list ap, a_struct flags)
{
	int len_res;

	len_res = 0;
	if (format == 'o')
		len_res += ft_itoa_base(va_arg(ap, int), 8, low, flags);
	else if (format == 'u')
		ft_putunslnbr((unsigned int)va_arg(ap, intmax_t), flags, &len_res);
	else if (format == 'x')
		len_res += ft_itoa_base_int(va_arg(ap, int), 16, low, flags);
	else if (format == 'X')
		len_res += ft_itoa_base_int(va_arg(ap, int), 16, up, flags);
	return (len_res);
}

void    word(char format, va_list ap, a_struct flags, int *len_res)
{
	if (format == 's')
		ft_putstring(va_arg(ap, char*), flags, len_res);
	else if (format == 'S')
		uni_str(va_arg(ap, wchar_t*), flags, len_res);
	else if (format == 'c')
	{
		if (flags.width > 1 && !flags.minus)
			(*len_res) += n_time((flags.width - 1), &ft_putchar, ' ');
		(*len_res) += ft_putchar((char)va_arg(ap, int));
		if (flags.width > 1 && flags.minus)
			(*len_res) += n_time((flags.width - 1), &ft_putchar, ' ');
	}
	else if (format == 'C')
		unicode(va_arg(ap, wchar_t), flags, unco, len_res);
}