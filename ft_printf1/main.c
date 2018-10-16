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
	k1 = 75;
	wchar_t *r;
    int *p;
    int *a;
    int e = 5;
    a = &e;
	//int 	s[5] = {2222, 2222, 945, 0, 3000};
	short f = 26;
	r = (wchar_t*)malloc(sizeof(wchar_t) * 4);
	r[0] = 167;
	r[1] = 12587;
	r[2] = 4587;
	r[3] = '\0';
    p = &k1;
    int len1;
    int len2;
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
//	len1 = printf("%hd.\n", f);
//	len2 = ft_printf("%hd.\n", f);
//	len1 = printf("%p, %p\n", p, a);
//	len2 = ft_printf("%p, %p\n", p, a);
//	len1 = printf("%u%u%u%u%u\n", 1, 100, 999, 42, 999988888);
//	len2 = ft_printf("%u%u%u%u%u\n", 1, 100, 999, 42, 999988888);
//	len1 = printf("%-5%\n");
//	len2 = ft_printf("%-5%\n");
//	len1 = printf("or:%-10x\n", 45);
//	len2 = ft_printf("ft:%-10x\n", 45);
//	len1 = printf("%lx\n", 4294967296);
//	len2 = ft_printf("%lx\n", 4294967296);
//	len1 = printf("%+u\n", 4294967295);
//	len2 = ft_printf("%+u\n", 4294967295);
//	len1 = printf("pr %U\n", 4294967295);
//	len2 = ft_printf("ft %U\n", 4294967295);
//	len1 = printf("% u\n", 4294967295);
//	len2 = ft_printf("% u\n", 4294967295);
//	len1 = printf("%S\n", L"Á±≥");
//	len2 = ft_printf("%S\n", L"Á±≥");
//	len1 = printf("%zd\n", 4294967295);
//	len2 = ft_printf("%zd\n", 4294967295);
//	len1 = printf("%lx\n", 4294967296);
//	len2 = ft_printf("%lx\n", 4294967296);
//	len1 = printf("%jx\n", 4294967295);
//	len2 = ft_printf("%jx\n", 4294967295);
//	len1 = printf("%5d\n", -42);
//	len2 = ft_printf("%5d\n", -42);
//	len1 = printf("%jd\n", 9223372036854775807);
//	len2 = ft_printf("%jd\n", 9223372036854775807);
//	len1 = printf("%llX\n", 4294967296);
//	len2 = ft_printf("%llX\n", 4294967296);
//	len1 = printf("%+d\n", -42);
//	len2 = ft_printf("%+d\n", -42);
//	len1 = printf("%hx\n", 4294967296);
//	len2 = ft_printf("%hx\n", 4294967296);
//	len1 = printf("%5.2x\n", 5427);
//	len2 = ft_printf("%5.2x\n", 5427);
//	len1 = printf("%#x\n", 0);
//	len2 = ft_printf("%#x\n", 0);
//	len1 = printf("%#-08x\n", 42);
//	len2 = ft_printf("%#-08x\n", 42);
//	len1 = printf("1:%5.2s is a string\n", "this");
//	len2 = ft_printf("2:%5.2s is a string\n", "this");
//	int len3 = printf("3:%10s is a string\n", "this");
//	int len4 = ft_printf("4:%10s is a string\n", "this");
//	int len5 = printf("5:%5.2s is a string\n", "");
//	int len6 = ft_printf("6:%5.2s is a string\n", "");
//	int len7 = printf("7:%-5.2s is a string\n", "this");
//	int len8 = ft_printf("8:%-5.2s is a string\n", "this");
//	printf("<must %d, my %d>\n<must %d, my %d>\n<must %d, my %d>\n<must %d, my %d>\n", len1, len2, len3, len4, len5, len6, len7, len8);
//	len1 = printf("@moulitest: %.10o\n", 42);
//	len2 = ft_printf("@moulitest: %.10o\n", 42);
//	len1 = printf("%-5.2s is a string\n", "");
//	len2 = ft_printf("%-5.2s is a string\n", "");
//	printf("<must %d, my %d>", len1, len2);
	int len01 = printf("1or:% d\n", -42);
	len1 = ft_printf("1ft:% d\n", -42);
	int len02 = printf("2or:%+d\n", -42);
	len2 = ft_printf("2ft:%+d\n", -42);
//	int len03 = printf("         %+d\n", 4242424242424242424242);
//	int len3 = ft_printf("       %+d\n", 4242424242424242424242);
	int len04 = printf("4or:% +d\n", 42);
	int len4 = ft_printf("4ft:% +d\n", 42);
	int len05 = printf("5or:% +d\n", -42);
	int len5 = ft_printf("5ft:% +d\n", -42);
	int len06 = printf("6or:%+ d\n", 42);
	int len6 = ft_printf("6ft:%+ d\n", 42);
	int len07 = printf("7of:%+ d\n", -42);
	int len7 = ft_printf("7ft:%+ d\n", -42);
	int len08 = printf("8or:%  +d\n", 42);
	int len8 = ft_printf("8ft:%  +d\n", 42);
	int len09 = printf("9or:%  +d\n", -42);
	int len9 = ft_printf("9ft:%  +d\n", -42);
	int len010 = printf("10or:%+  d\n", 42);
	int len10 = ft_printf("10ft:%+  d\n", 42);
	printf ("1<must %d, my %d>\n2<must %d, my %d>\n", len01, len1, len02, len2);
	printf ("4<must %d, my %d>\n", len04, len4);
	printf ("5<must %d, my %d>\n6<must %d, my %d>\n", len05, len5, len06, len6);
	printf ("7<must %d, my %d>\n8<must %d, my %d>\n", len07, len7, len08, len8);
	printf ("9<must %d, my %d>\n10<must %d, my %d>\n", len09, len9, len010, len10);
	int len011 = ft_printf("%+  d\n", -42);
	int len11 = ft_printf("%+  d\n", -42);
	int len012 = ft_printf("% ++d\n", 42);
	int len12 = ft_printf("% ++d\n", 42);
	int len013 = ft_printf("% ++d\n", -42);
	int len13 = ft_printf("% ++d\n", -42);
	int len014 = ft_printf("%++ d\n", 42);
	int len14 = ft_printf("%++ d\n", 42);
	int len015 = ft_printf("%++ d\n", -42);
	int len15 = ft_printf("%++ d\n", -42);
	int len016 = ft_printf("%0+5d\n", 42);
	int len16 = ft_printf("%0+5d\n", 42);
	int len017 = ft_printf("%05d\n", -42);
	int len17 = ft_printf("%05d\n", -42);
	int len018 = ft_printf("%0+5d\n", -42);
	int len18 = ft_printf("%0+5d\n", -42);
	int len019 = ft_printf("%-05d\n", 42);
	int len19 = ft_printf("%-05d\n", 42);
	int len020 = ft_printf("%-05d\n", -42);
	int len20 = ft_printf("%-05d\n", -42);
	printf ("11<must %d, my %d>\n12<must %d, my %d>\n", len011, len11, len012, len12);
	printf ("13<must %d, my %d>\n14<must %d, my %d>\n", len013, len13, len014, len14);
	printf ("15<must %d, my %d>\n16<must %d, my %d>\n", len015, len15, len016, len16);
	printf ("17<must %d, my %d>\n18<must %d, my %d>\n", len017, len17, len018, len18);
	printf ("19<must %d, my %d>\n20<must %d, my %d>\n", len019, len19, len020, len20);
	int len021 = printf("21or:% d\n", -42);
	int len21 = ft_printf("21ft:% d\n", -42);
	int len022 = printf("22or:%+d\n", 0);
	int len22 = ft_printf("22ft:%+d\n", 0);
	int len023 = printf("23or:%0+5d\n", 42);
	int len23 = ft_printf("23ft:%0+5d\n", 42);
	int len024 = printf("24or:%05d\n", -42);
	int len24 = ft_printf("24ft:%05d\n", -42);
	int len025 = printf("25or:%0+5d\n", -42);
	int len25 = ft_printf("25ft:%0+5d\n", -42);
	int len026 = printf("26or:%-05d\n", 42);
	int len26 = ft_printf("26ft:%-05d\n", 42);
	int len027 = printf("27or:%-05d\n", -42);
	int len27 = ft_printf("27ft:%-05d\n", -42);
	printf ("21<must %d, my %d>\n", len021, len21);
	printf ("22<must %d, my %d>\n23<must %d, my %d>\n", len022, len22, len023, len23);
	printf ("24<must %d, my %d>\n25<must %d, my %d>\n", len024, len24, len025, len25);
	printf ("26<must %d, my %d>\n27<must %d, my %d>\n", len026, len26, len027, len27);
	int len028 = printf("28or:%-10.5d\n", 4242);
	int len28 = ft_printf("28ft:%-10.5d\n", 4242);
	int len029 = printf("29or:%+10.5d\n", 4242);
	int len29 = ft_printf("29ft:%+10.5d\n", 4242);
	int len030 = printf("30or:%-+10.5d\n", 4242);
	int len30 = ft_printf("30ft:%-+10.5d\n", 4242);
	int len031 = printf("31or:%03.2d\n", 0);
	int len31 = ft_printf("31ft:%03.2d\n", 0);
	int len032 = printf("32or:%03.2d\n", 1);
	int len32 = ft_printf("32ft:%03.2d\n", 1);
	printf ("28<must %d, my %d>\n", len028, len28);
	printf ("29<must %d, my %d>\n30<must %d, my %d>\n", len029, len29, len030, len30);
	printf ("31<must %d, my %d>\n32<must %d, my %d>\n", len031, len31, len032, len32);
	int len033 = printf("33or:%0d\n", -42);
	int len33 = ft_printf("33ft:%0d\n", -42);
	int len034 = printf("34or:%00d\n", -42);
	int len34 = ft_printf("34ft:%00d\n", -42);
	int len035 = printf("35or:%05d\n", 42);
	int len35 = ft_printf("35ft:%05d\n", 42);
	int len036 = printf("36or:%5d\n", -42);
	int len36 = ft_printf("36ft:%5d\n", -42);
	int len037 = printf("37or:%03.2d\n", -1);
	int len37 = ft_printf("37ft:%03.2d\n", -1);
	printf ("33<must %d, my %d>\n", len033, len34);
	printf ("34<must %d, my %d>\n35<must %d, my %d>\n", len034, len34, len035, len35);
	printf ("36<must %d, my %d>\n37<must %d, my %d>\n", len036, len36, len037, len37);
	return (0);
}
















