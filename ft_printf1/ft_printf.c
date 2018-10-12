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

int	ft_printf(char *format, ...)
{
	int			i;
	a_struct	flags;
	va_list		ap;
	int 		len_res;

	len_res = 0;
	i = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			len_res += ft_putchar(format[i]);
		else if (format[i] == '%' && format[i + 1] == '\0')
			break;
		else if (format[i] == '%' && !valid(format[i + 1]))
			len_res += ft_putchar(format[++i]);
		else
		{
			//printf("char %c\n", format[i]);
			if (format[i + 1] != '\0')
				i++;
			//printf("char %c\n", format[i]);
			if (format[i] == '%')
				len_res += ft_putchar('%');
			else
			{
				//printf("form %c\n", format[i]);
				flags = find_flag(format, &i, ap);
				number(format[i],ap, flags, &len_res);
				len_res += convert(format[i], ap, flags, 0);
				word(format[i], ap, flags, &len_res);
				len_res += specifier(format, &i, ap, flags);
				if (format[i] == '%')
				{
					not_spec(flags, &len_res);
					len_res += ft_putchar('%');
					if (flags.width && flags.minus)
						len_res += n_time((flags.width - 1), &ft_putchar, ' ');
				}
				//printf("plus %d\n", flags.plus);
			}
			//printf("wid %d, min %d\n", flags.width, flags.minus);
		}
		i++;
	}
	va_end(ap);
	return (len_res);
}
