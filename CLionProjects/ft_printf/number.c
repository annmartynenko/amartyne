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
	int num;

	if (format[i] == '%' && (format[i + 1] == 'd' || format[i] == 'i'))
	{
		i++;
		num = va_arg(ap, int);
		ft_putnbr(num);
	}
	return (i);
}

int word(char *format, int i, va_list ap)
{
	char *string;
	char c;

	if(format[i] == '%' && format[i + 1] == 's')
	{
		i++;
		string = va_arg(ap, char*);
		ft_putstr(string);
	}
	if(format[i] == '%' && format[i + 1] == 'c')
	{
		i++;
		c = va_arg(ap, int);
		ft_putchar(c);
	}
	return(i);
}