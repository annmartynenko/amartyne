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
	int		i;
	a_struct	flags;
	va_list	ap;

	i = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			ft_putchar(format[i]);
		else
		{
            i++;
			flags = find_flag(format, &i, ap);
			printf("w:%d, pr:%d, nul:%d, min:%d, hash:%d, sp:%d, pl:%d \n", \
			flags.width, flags.precision, flags.nul, flags.minus,\
			 flags.hash, flags.space, flags.plus);
			number(format[i], ap, flags);
			convert(format[i], ap, flags);
			word(format[i], ap, flags);
		}
		i++;
	}
	va_end(ap);
	return (0);
}
