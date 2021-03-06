/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 13:18:05 by amartyne          #+#    #+#             */
/*   Updated: 2018/07/18 13:19:48 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	not_letter(char format, a_struct flags, int *len_res)
{
	if (format == '%' || !valid(format))
	{
		not_spec(flags, len_res);
		*len_res += ft_putchar(format);
		if (flags.width && flags.minus)
			n_time((flags.width - 1), len_res, ' ');
	}
	else if (!valid(format))
		*len_res += ft_putchar(format);
}

int		ft_printf(char *format, ...)
{
	int			i;
	a_struct	flags;
	va_list		ap;
	int			len_res;

	len_res = 0;
	i = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			len_res += ft_putchar(format[i]);
		else if (format[i] == '%' && format[i + 1] == '\0')
			break ;
		else if (format[i] == '%' && !valid(format[i + 1]))
			len_res += ft_putchar(format[++i]);
		else
		{
			if (format[i + 1] != '\0')
				i++;
			if (format[i] == '%')
				len_res += ft_putchar('%');
			else if (!valid(format[i]))
				len_res += ft_putchar(format[i]);
			else
			{
				flags = find_flag(format, &i, ap);
				number(format[i], ap, flags, &len_res);
				len_res += convert(format[i], ap, flags);
				word(format[i], ap, flags, &len_res);
				len_res += specifier(format, &i, ap, flags);
				not_letter(format[i], flags, &len_res);
			}
		}
		i++;
	}
	va_end(ap);
	return (len_res);
}
