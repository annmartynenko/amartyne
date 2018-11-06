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

void uni_str(wchar_t *arr, a_struct flags, int *len_res)
{
	int i;
	int len;
	int odd;

	i = 0;
	len = 0;
	odd = 0;
	if (arr)
	{
		while (arr[odd])
		{
			len += len_unco(count_bin((wchar_t) arr[i]));
			odd++;
		}
		//(*len_res) += len;
		if (flags.width > len && !flags.minus && flags.nul)
			n_time((flags.width - len), len_res, '0');
		else if (flags.width > len && !flags.minus && !flags.nul)
			n_time((flags.width - len), len_res, ' ');
		else if (flags.width && !flags.minus && !flags.nul)
			n_time((flags.width), len_res, ' ');
		else if (flags.width && !flags.minus && flags.nul)
			n_time((flags.width), len_res, '0');
		if (flags.precision != 0)
		{
			while (arr[i])
			{
				unicode(arr[i++], flags, 2, len_res);
				odd--;
			}
		}
		if (flags.width > len && flags.minus && !flags.nul)
			n_time((flags.width - len), len_res, ' ');
	}
	else
		*len_res += ft_putstr("(null)");
}

void	n_time(int i, int *len_res, char str)
{
	int j;
	char *ch;

	ch = NULL;
	j = 0;
	if (i > 0)
	{
		ch = (char *)malloc(sizeof(char) * i + 1);
		while (j < i)
			ch[j++] = str;
		ch[j] = '\0';
		*len_res += ft_putstr(ch);
	}
}

int	len_unco(int size)
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