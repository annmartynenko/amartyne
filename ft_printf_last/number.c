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

void    number(char format, va_list ap, a_struct flags)
{
	if ((format == 'd' || format == 'i'))
		ft_putnumber(va_arg(ap, int), flags);
	else if (format == 'D') //+ fl
		ft_putlnbr(va_arg(ap, long int), flags);
	else if (format == 'U') //+fl
		ft_putunslnbr(va_arg(ap, unsigned long int), flags);
	else if (format == 'O')
		ft_itoa_base(va_arg(ap, unsigned long int), 8, up, flags);
	else if (format == 'p')
		ft_itoa_base(va_arg(ap, long long), 16, P, flags);
}

unsigned long	check(char format, va_list ap)
{
	int u;

	u = 0;
	if (format == 'o' || format == 'x' ||\
	format == 'X')
		u = va_arg(ap, int);
	return (u);
}

void    convert(char format, va_list ap, a_struct flags, unsigned long modifer)
{
	if (modifer != 0)
		modifer = check(format, ap);
	if (format == 'o')
		ft_itoa_base(modifer, 8,low, flags); //+fl
	else if (format == 'u') //+fl
		ft_putunsnbr(va_arg(ap, unsigned int), flags);
	else if (format == 'x')
		ft_itoa_base(modifer, 16, low, flags); //fl+
	else if (format == 'X')
		ft_itoa_base(modifer, 16, up, flags); //fl+
}

void    word(char format, va_list ap, a_struct flags)
{
	if (format == 's')
		ft_putstring(va_arg(ap, char*), flags); //fl+
	else if (format == 'S')
		uni_str(va_arg(ap, wchar_t*), flags); //fl+
	else if (format == 'c')
	{
		if (flags.width > 1 && !flags.minus)
			n_time((flags.width - 1), &ft_putchar, ' ');
		ft_putchar((char)va_arg(ap, int)); //fl+
		if (flags.width > 1 && flags.minus)
			n_time((flags.width - 1), &ft_putchar, ' ');
	}
	else if (format == 'C')
		unicode(va_arg(ap, wchar_t), flags, unco); //fl+
}