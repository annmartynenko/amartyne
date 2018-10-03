/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_fun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 19:01:40 by amartyne          #+#    #+#             */
/*   Updated: 2018/08/13 19:01:43 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void uni_str(wchar_t *arr, a_struct flags)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (arr[i])
	{
		len += len_unco(count_bin((wchar_t)arr[i]));
		i++;
	}
	i = 0;
	if (flags.width > len && !flags.minus && !flags.nul)
		n_time((flags.width - len), &ft_putchar, ' ');
	while (arr[i])
		unicode(arr[i++], flags, 2);
	if (flags.width > len && flags.minus && !flags.nul)
		n_time((flags.width - len), &ft_putchar, ' ');
}

void n_time(int i, void (*f)(char), char str)
{
	int j;

	j = 0;
	while(j < i)
	{
		f(str);
		j++;
	}
}

int len_unco(int size)
{
	int len;

	if (size <= 7)
		len = 1;
	else if (size <= 11)
		len = 2;
	else if (size <= 16)
		len = 3;
	else
		len = 4;
	return (len);
}