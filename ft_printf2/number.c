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

void    number(char format, va_list ap, a_struct flags)
{
	if ((format == 'd' || format == 'i'))
		ft_putnbr(va_arg(ap, int));
	else if (format == 'D') //+ fl
		ft_putlnbr(va_arg(ap, long int), flags);
	else if (format == 'u') //+fl
		ft_putunsnbr(va_arg(ap, unsigned int), flags);
	else if (format == 'U') //+fl
		ft_putunslnbr(va_arg(ap, unsigned long int), flags);
}

void    convert(char format, va_list ap, a_struct flags)
{
	if (format == 'o')
		ft_itoa_base(va_arg(ap, int), 8,low, flags);
	else if (format == 'O')
		ft_itoa_base(va_arg(ap, unsigned long int), 8, up, flags);
	else if (format == 'x')
		ft_itoa_base(va_arg(ap, int), 16, low, flags);
	else if (format == 'X')
		ft_itoa_base(va_arg(ap, int), 16, up, flags);
	else if (format == 'p')
		ft_itoa_base(va_arg(ap, long long), 16, P, flags);
}

void    word(char format, va_list ap, a_struct flags)
{
	if (format == 's')
		ft_putstr(va_arg(ap, char*));
	else if (format == 'S')
		uni_str(va_arg(ap, wchar_t*), flags);
	else if (format == 'c')
		ft_putchar(va_arg(ap, int));
	else if (format == 'C')
		unicode(va_arg(ap, wchar_t), flags, 1);
}
