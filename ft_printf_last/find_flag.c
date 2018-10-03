/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 15:00:36 by amartyne          #+#    #+#             */
/*   Updated: 2018/08/28 15:01:25 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

a_struct field(char *str, a_struct flags, int *i)
{
	int		len;
	int 	temp;
	char	*arr;

	len = 0;
	temp = (*i);
	if (ft_isdigit(str[(*i)]))
	{
		while(ft_isdigit(str[(*i)]))
		{
			(*i)++;
			len++;
		}
		arr = (char*)malloc(sizeof(char) * len + 1);
		(*i) = temp;
		len = 0;
		while (ft_isdigit(str[(*i)]))
			arr[len++] = str[(*i)++];
		if (flags.precision == '.')
			flags.precision = ft_atoi(arr);
		else
			flags.width = ft_atoi(arr);
	}
	return(flags);
}

void next_fl(char *str, int *i, a_struct *flags)
{
	if (str[(*i)] == '-')
	{
		(*flags).minus = '-';
		(*i)++;
	}
	if (str[(*i)] == '+')
	{
		(*flags).plus = '+';
		(*i)++;
	}
	if (str[(*i)] == ' ')
	{
		(*flags).space = ' ';
		(*i)++;
	}
	if (str[(*i)] == '#')
	{
		(*flags).hash = '#';
		(*i)++;
	}
	if (str[(*i)] == (char)48)
	{
		(*flags).nul = '1';
		(*i)++;
	}
}

a_struct find_flag(char *str, int *i, va_list ap)
{
	a_struct flags;

	flags.hash = 0;
	flags.space = 0;
	flags.minus = 0;
	flags.width = 0;
	flags.nul = 0;
	flags.precision = 0;
	flags.plus = 0;
	while (!ft_isalpha(str[(*i)]))
	{
		next_fl(str, i, &flags);
		if (str[(*i)] == '*')
		{
			flags.width = va_arg(ap, int);
			(*i)++;
		}
		flags = field(str, flags, i);
		if (str[(*i)] == '.')
		{
			flags.precision = '.';
			(*i)++;
			if (str[(*i)] == '*')
			{
				flags.precision = va_arg(ap, int);
				(*i)++;
			}
		}
		flags = field(str, flags, i);
	}
	return(flags);
}
