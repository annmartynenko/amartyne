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
	//int numb = 125;
	k1 = 7845;
	wchar_t *r;
    int *p;
	//int 	s[5] = {2222, 2222, 945, 0, 3000};
	//signed char f = 'a';
	r = (wchar_t*)malloc(sizeof(wchar_t) * 4);
	r[0] = 167;
	r[1] = 12587;
	r[2] = 4587;
	r[3] = '\0';
    p = &k1;
//	ft_printf("%d\n", count_bin(k1));
//	printf("1original :%015p. \n", p);
//	ft_printf("1ft_printf:%015p. \n", p);
//	printf("2original :% 12.*D. \n",  10, 123456789);
//	ft_printf("2ft_printf:% 12.*D. \n", 10, 123456789);
//	printf("3original :%0*.*D. \n", 10, 12, 123456789);
//	ft_printf("3ft_printf:%0*.*D. \n", 10, 12, 123456789);
//	printf("4original :%-10D. \n", 123456789);
//	ft_printf("4ft_printf:%-10D. \n", 123456789);
//	printf("5original :% 12D. \n", 123456789);
//	ft_printf("5ft_printf:% 12D. \n", 123456789);
//	printf("6original :%5.2x. \n", 125);
//	ft_printf("6ft_printf:%5.2x. \n", 125);
//	printf("7original :%-*x. \n", 5, 125);
//	ft_printf("7ft_printf:%-5x. \n", 125);
//	printf("$$$%10.2s$$$\n", "mystring");
//	int nb = -100;
//	char* format = "%+-20D.\n";
//	char* format = "%10.1D\n";
 // char* format = "%-10.1D\n"; //--
//	char* format = "%-10D.\n";
//	char* format = "%- 010D\n";
//	char* format = "% 010D\n";
//	char* format = "%#x\n";
//	char* format = "%O\n";
//	char nb = 100;
//	printf(format, nb);
//	ft_printf(format, nb);
//	printf("%-20.15s.\n", "chocolate");
//	ft_printf("%-20.15s.\n", "chocolate");
//	printf("%15.10d.\n", 125);
//	ft_printf("%15.10d.\n", 125);
//	printf("cat%%vog.\n");
//	ft_printf("cat%%vog.\n");
	printf("%ld.\n", 123456789078);
	ft_printf("%ld.\n", 123456789078);
	return (0);
}
