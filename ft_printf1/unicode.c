/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unicode.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:50:51 by amartyne          #+#    #+#             */
/*   Updated: 2018/08/24 11:50:54 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <locale.h>
#include <stdio.h>
int count_bin(unsigned int numb)
{
	int len;

	len = 0;
	while(numb > 0)
	{
		numb = numb >> 1;
		len++;
	}
	return(len);
}

void two_bin(unsigned int numb)
{
	unsigned char part1;
	unsigned char part2;
	unsigned char res;

	part1 = ((numb >> 6) << 27) >> 27;
	part2 = ((numb << 26) >> 26);
	res = (192 | part1);
	write(1, &res, 1);
	res = (128 | part2);
	write(1, &res, 1);
}

void three_bin(unsigned int numb)
{
	unsigned char part1;
	unsigned char part2;
	unsigned char part3;
	unsigned char res;

	part1 = ((numb >> 12) << 28) >> 28;
	part2 = ((numb >> 6) << 26) >> 26;
	part3 = (numb << 26) >> 26;
	res = (224 | part1);
	write(1, &res, 1);
	res = (128 | part2);
	write(1, &res, 1);
	res = (128 | part3);
	write(1, &res, 1);
}

void four_bin(unsigned int numb)
{
	unsigned char part1;
	unsigned char part2;
	unsigned char part3;
	unsigned char part4;
	unsigned char res;

	part1 = ((numb >> 18) << 29) >> 29;
	part2 = ((numb >> 12) << 26) >> 26;
	part3 = ((numb >> 6) << 26) >> 26;
	part4 = (numb << 26) >> 26;
	res = (240 | part1);
	write(1, &res, 1);
	res = (128 | part2);
	write(1, &res, 1);
	res = (128 | part3);
	write(1, &res, 1);
	res = (128 | part4);
	write(1, &res, 1);
}

void unicode(wchar_t numb, a_struct flags, int mark, int *len_res)
{
	int size;
	int len;
	unsigned int value;

	value = (unsigned int) numb;
	size = count_bin(value);
	len = len_unco(size);
	(*len_res) += len / size;
	if (flags.width > len && !flags.minus && !flags.nul && mark == unco)
		(*len_res) += n_time((flags.width - len), &ft_putchar, ' ');
	if (size <= 7)
		ft_putchar(value);
	else if (size <= 11)
		two_bin(value);
	else if (size <= 16)
		three_bin(value);
	else
		four_bin(value);
	if (flags.width > len && flags.minus && !flags.nul && mark == unco)
		(*len_res) += n_time((flags.width - len), &ft_putchar, ' ');
}

