/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 15:11:38 by amartyne          #+#    #+#             */
/*   Updated: 2018/09/18 15:11:40 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
void ft_putstring(char const *s, a_struct flags, int *len_res)
{
	int i;
	int len;

	i = 0;
	len = (int)ft_strlen(s);
	if (s)
	{
		//printf("\nlen %d, w %d, pr %d\n", len, flags.width, flags.precision);
		if (flags.width > len && !flags.minus && flags.precision == -1)
			(*len_res) += n_time((flags.width - len), &ft_putchar, ' ');
		else if (flags.width > flags.precision && !flags.minus &&\
		flags.precision != -1)
		{
			if (len == 0)
				(*len_res) += n_time((flags.width), &ft_putchar, ' ');
			else
				(*len_res) += n_time((flags.width - flags.precision),\
			&ft_putchar, ' ');
		}
		while (s[i] != '\0')
		{
			if (flags.precision != -1 && i == flags.precision)
				break;
			(*len_res) += ft_putchar(s[i]);
			i++;
		}
		if (flags.width > len && flags.minus && flags.precision == -1)
			(*len_res) += n_time((flags.width - len), &ft_putchar, ' ');
		else if (flags.width > flags.precision && flags.minus)
		{
			if (flags.precision <= len && flags.precision != -1)
				(*len_res) += n_time((flags.width - flags.precision),\
				&ft_putchar, ' ');
			else if (flags.precision > len && flags.precision != -1)
				(*len_res) += n_time(flags.width,\
				&ft_putchar, ' ');
		}
	}
	else
		*len_res += ft_putstr("(null)");
}