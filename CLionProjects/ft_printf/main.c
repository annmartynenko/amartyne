/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 17:13:39 by amartyne          #+#    #+#             */
/*   Updated: 2018/07/18 15:40:46 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <locale.h>
int	main()
{
	setlocale(LC_ALL, "");
	wchar_t k1;
	int numb = -127;
	k1 = 945;
	wchar_t *r;
	int 	s[5] = {2222, 2222, 945, 0, 3000};

	r = (wchar_t*)malloc(sizeof(wchar_t) * 4);
	r[0] = 167;
	r[1] = 12587;
	r[2] = 4587;
	r[3] = '\0';
	//ft_printf("%d\n", count_bin(k1));
	printf("original:%S, %-d. \n", s, numb);
	ft_printf("ft      :%S, %-d. \n", s, numb);
	return (0);
}
