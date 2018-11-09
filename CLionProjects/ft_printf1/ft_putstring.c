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
	if (s != NULL)
	{
		//printf("\nlen %d, w %d, pr %d\n", len, flags.width, flags.precision);
		if (flags.width > len && !flags.minus && flags.precision == -1 &&\
		flags.nul)
			n_time((flags.width - len), len_res, '0');
		else if (flags.width > len && !flags.minus && flags.precision == -1)
			n_time((flags.width - len), len_res, ' ');
		else if (flags.precision < flags.width && flags.precision > len &&\
		flags.precision != -1 && !flags.minus)
			n_time((flags.width - len), len_res, ' ');
		else if (flags.precision < flags.width && flags.precision < len &&\
		flags.precision != -1 && !flags.minus)
			n_time((flags.width - flags.precision), len_res, ' ');
		else if (flags.precision > flags.width && flags.width > len &&\
		flags.precision != -1 && !flags.minus)
			n_time((flags.width - len), len_res, ' ');
		else if (flags.width > flags.precision && !flags.minus &&\
		flags.precision != -1)
		{
			if (len == 0)
				n_time((flags.width), len_res, ' ');
			else
				n_time((flags.width - flags.precision), len_res, ' ');
		}
		while (s[i] != '\0')
		{
			if (flags.precision != -1 && i == flags.precision)
				break;
			(*len_res) += ft_putchar(s[i]);
			i++;
		}
		if (flags.width > len && flags.minus && flags.precision == -1)
			n_time((flags.width - len), len_res, ' ');
		else if (flags.width > flags.precision && flags.minus)
		{
			if (flags.precision <= len && flags.precision != -1)
				n_time((flags.width - flags.precision), len_res, ' ');
			else if (flags.precision > len && flags.precision != -1)
				n_time(flags.width, len_res, ' ');
		}
	}
	else if (s == 0 && flags.width)
		n_time(flags.width, len_res, '0');
	else if (!flags.width)
		*len_res += ft_putstr("(null)");
}

void	ft_putwchr(wchar_t *s, a_struct flags, int *len_res)
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			if (flags.precision != -1 && i == flags.precision)
				break;
			(*len_res) += 1;
			ft_putwchr(s, flags, len_res);
			i++;
		}
	}
	else
		*len_res += ft_putstr("(null)");
}