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
	int i;
	va_list ap;

	i = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			ft_putchar(format[i]);
		i = number(format, i, ap);
		i = word(format, i, ap);
		i++;
	}
	va_end(ap);
	return (0);
}
