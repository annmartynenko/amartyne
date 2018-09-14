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
	len = 1; //wait for fix
	if (flags.width > len && !flags.minus && !flags.nul)
		n_time((flags.width - len), &ft_putchar, ' ');
	while (arr[i])
	{
		unicode(arr[i], flags, 2);
		i++;
	}
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