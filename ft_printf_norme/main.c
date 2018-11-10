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
    unsigned long int LONGMIN  = -2147483648;
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
//	printf("1original :%p. \n", p);
//	ft_printf("1ft_printf:%p. \n", p);
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
/*
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
	printf ("36<must %d, my %d>\n37<must %d, my %d>\n", len036, len36, len037, len37);*/
//	int len038 = printf("38or:%hhd\n", -129);
//	int len38 = ft_printf("38ft:%hhd\n", -129);
//	printf("|38<must %d, my %d>\n", len038, len38);
//	int len039 = printf("39or:%lld\n", 9223372036854775807);
//	int len39 = ft_printf("39ft:%lld\n", 9223372036854775807);
//	printf("39<must %d, my %d>\n", len039, len39);
//	int len040 = printf("40or:%lld\n", -9223372036854775808);
//	int len40 = ft_printf("40ft:%lld\n", -9223372036854775808);
//	printf("39<must %d, my %d>\n", len040, len40);
//	int len041 = printf("or:%lu\n", 4294967297);
//	int len41 = ft_printf("ft:%lu\n", 4294967297);
//	printf("41<must %d, my %d>\n", len041, len41);
//	int len042 = printf("or:@moulitest: %#.x %#.0x\n", 0, 0);
//	int len42 = ft_printf("ft:@moulitest: %#.x %#.0x\n", 0, 0);
//	printf("41<must %d, my %d>\n", len042, len42);
//	int len043 = printf("or:%-05o\n", 2500);
//	int len43 = ft_printf("ft:%-05o\n", 2500);
//	printf("43<must %d, my %d>\n", len043, len43);
//	int len044 = printf("or:@moulitest: %s\n", NULL);
//	int len44 = ft_printf("ft:@moulitest: %s\n", NULL);
//	printf("44<must %d, my %d>\n", len044, len44);
//	int len045 = printf("or:%s\n", "abc");
//	int len45 = ft_printf("ft:%s\n", "abc");
//	printf("45<must %d, my %d>\n", len045, len45);
//	int len046 = printf("or:%05o\n", 42);
//	int len46 = ft_printf("ft:%05o\n", 42);
//	printf("46<must %d, my %d>\n", len046, len46);
//	int len047 = printf("or:@moulitest: %5.x %5.0x\n", 0, 0);
//	int len47 =   ft_printf("ft:@moulitest: %5.x %5.0x\n", 0, 0);
//	printf("47<must %d, my %d>\n", len047, len47);
//	int len048 = printf("or:@moulitest:%.d %.0d\n", 42, 43);
//	int len48 =   ft_printf("ft:@moulitest:%.d %.0d\n", 42, 43);
//	printf("48<must %d, my %d>\n", len048, len48);
//	int len049 = printf("or:@moulitest: %.d %.0d\n", 0, 0);
//	int len49 = ft_printf("ft:@moulitest: %.d %.0d\n", 0, 0);
//	printf("48<must %d, my %d>\n", len049, len49);
//	int len050 = printf("or:%5.d %5.0d\n", 0, 0);
//	int len50 = ft_printf("ft:%5.d %5.0d\n", 0, 0);
//	printf("48<must %d, my %d>\n", len050, len50);
//	int len051 = printf("or:%-10.5o\n", 2500);
//	int len51 = ft_printf("ft:%-10.5o\n", 2500);
//	printf("51<must %d, my %d>\n", len051, len51);
//	int len052 = printf("or:%4.15d\n", 42);
//	int len52 = ft_printf("ft:%4.15d\n", 42);
//	printf("52<must %d, my %d>\n", len052, len52);
//	int len053 = printf("or:%-10.5d\n", 4242);
//	int len53 = ft_printf("ft:%-10.5d\n", 4242);
//	printf("53<must %d, my %d>\n", len053, len53);
//	int len054 = printf("or:%5d\n", 42);
//	int len54 = ft_printf("ft:%5d\n", 42);
//	printf("54<must %d, my %d>\n", len054, len54);
//	int len055 = printf("or:%+10.5d\n", 4242); //--
//	int len55 = ft_printf("ft:%+10.5d\n", 4242);
//	printf("55<must %d, my %d>\n", len055, len55);
//	int len056 = printf("or:%-+10.5d\n", 4242);
//	int len56 = ft_printf("ft:%-+10.5d\n", 4242);
//	printf("56<must %d, my %d>\n", len056, len56);
//	int len057 = printf("or:%03.2d\n", -1);
//	int len57 = ft_printf("ft:%03.2d\n", -1);
//	printf("57<must %d, my %d>\n", len057, len57);
//	int len056 = printf("or:%.10d\n", -42);
//	int len56 = ft_printf("ft:%.10d\n", -42);
//	printf("56<must %d, my %d>\n", len056, len56);

//	int len057 = printf("or:%hhd\n", 128);
//	int len57 = ft_printf("ft:%hhd\n", 128);
//	printf("57<must %d, my %d>\n", len057, len57);
//	int len058 = printf("or:%hhd\n", -128);
//	int len58 = ft_printf("ft:%hhd\n", -128);
//	printf("58<must %d, my %d>\n", len058, len58);
//	int len059 = printf("or:%lu\n", -42);
//	int len59 = ft_printf("ft:%lu\n", -42);
//	printf("59<must %d, my %d>\n", len059, len59); //  strange thing
//	int len060 = printf("or:%hU\n", 4294967296);
//	int len60 = ft_printf("ft:%hU\n", 4294967296);
//	printf("60<must %d, my %d>\n", len060, len60);
//	int len061 = printf("or:%p\n", 0);
//	int len61 = ft_printf("ft:%p\n", 0);
//	printf("61<must %d, my %d>\n", len061, len61);
//	int len062 = printf("or:% Zooo\n");
//	int len62 = ft_printf("ft:% Zooo\n");
//	printf("62<must %d, my %d>\n", len062, len62);
//	int len063 = printf("or:%C\n", 'c');//-
//	int len63 = ft_printf("ft:%C\n", 'c');
//	printf("63<must %d, my %d>\n", len063, len63);
//	int len064 = printf("or:%C, %C\n", '4', '2');
//	int len64 = ft_printf("ft:%C, %C\n", '4', '2');
//	printf("64<must %d, my %d>\n", len064, len64);
//	int len065 = printf("or:%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C \
//%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C\
//%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C\n",
//						' ', '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-',
//						'.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';',
//						'<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
//						'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
//						'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e',
//						'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
//						't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}');
//	int len65 = ft_printf("ft:%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C \
//%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C\
//%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C\n",
//						  ' ', '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-',
//						  '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';',
//						  '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
//						  'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
//						  'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e',
//						  'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
//						  't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}');
//	printf("65<must %d, my %d>\n", len065, len65);
//	int len066 = printf("or:%C\n", L'猫');
//	int len66 = ft_printf("ft:%C\n", L'猫');
//	printf("66<must %d, my %d>\n", len066, len66);
//	int len067 = printf("or:%C\n", 0);
//	int len67 = ft_printf("ft:%C\n", 0);
//	printf("67<must %d, my %d>\n", len067, len67);
//	int len068 = printf("or:%S\n", L"米");
//	int len68 = ft_printf("ft:%S\n", L"米");
//	printf("68<must %d, my %d>\n", len068, len68);
//	int len069 = printf("or:%D\n", −9223372036854775807);
//	int len69 = ft_printf("ft:%D\n", -9223372036854775807);
//	printf("69<must %d, my %d>\n", len069, len69);
//	int len069 = printf("or:%lo, %lo\n", 0, 4294967295);
//	int len69 = ft_printf("ft:%lo, %lo\n", 0, 4294967295);
//	printf("69<must %d, my %d>\n", len069, len69);
//	int len070 = printf("or:%lc, %lc\n", L'暖', L'ح');
//	int len70 = ft_printf("ft:%lc, %lc\n", L'暖', L'ح');
//	printf("70<must %d, my %d>\n", len070, len70);
//	int len071 = printf("%ls, %ls\n", L"暖炉", L"لحم خنزير");
//	int len71 = ft_printf("%ls, %ls\n", L"暖炉", L"لحم خنزير");
//	printf("71<must %d, my %d>\n", len071, len71);
//	int len072 = printf("or:%llu, %llu\n", 0, 18446744073709551615);
//	int len72 = ft_printf("ft:%llu, %llu\n", 0, 18446744073709551615);
//	printf("72<must %d, my %d>\n", len072, len72);
//	int len073 = printf("or:%hhS, %hhS\n", 0, L"米米");
//	int len73 = ft_printf("ft:%hhS, %hhS\n", 0, L"米米");
//	printf("73<must %d, my %d>\n", len073, len73);
//	int len074 = printf("or:%ju, %ju\n", 0, 18446744073709551615);
//	int len74 = ft_printf("ft:%ju, %ju\n", 0, 18446744073709551615);
//	printf("74<must %d, my %d>\n", len074, len74);
//	int len075 = printf("or:%-15u\n", 245875980);
//	int len75 = ft_printf("ft:%-15u\n", 245875980);
//	printf("74<must %d, my %d>\n", len075, len75);
//	int len076 = printf("or:{%-30d}\n", 10000);
//	int len76 = ft_printf("ft:{%-30d}\n", 10000);
//	printf("76<must %d, my %d>\n", len076, len76);
//	int len077 = printf("or:{%-15p}\n", 0);
//	int len77 = ft_printf("ft:{%-15p}\n", 0);
//	printf("77<must %d, my %d>\n", len077, len77);
//	int len078 = printf("or:{%30S}\n", L"我是一只猫。");
//	int len78 = ft_printf("ft:{%30S}\n", L"我是一只猫。");
//	printf("78<must %d, my %d>\n", len078, len78);
//	int len079 = printf("or:{%10R}\n");
//	int len79 = ft_printf("ft:{%10R}\n");
//	printf("79<must %d, my %d>\n", len079, len79);
//	int len080 = printf("or:%010x\n", 542);
//	int len80 = ft_printf("ft:%010x\n", 542);
//	printf("80<must %d, my %d>\n", len080, len80);
//	int len081 = printf("or:%5p\n", 0);
//	int len81 = ft_printf("ft:%5p\n", 0);
//	printf("81<must %d, my %d>\n", len081, len81);
//	int len082 = printf("or:%#08x\n", 42);
//	int len82 = ft_printf("ft:%#08x\n", 42);
//	printf("82<must %d, my %d>\n", len082, len82);
//	int len083 = printf("or:%15.4S\n", L"我是一只猫。"); //i dont know
//	int len83 = ft_printf("ft:%15.4S\n", L"我是一只猫。");
//	printf("83<must %d, my %d>\n", len083, len83);
//	int len084 = printf("%.0O, %.o\n", 0, 0); //HERE
//	int len84 = ft_printf("%.0O, %.o\n", 0, 0);
//	printf("84<must %d, my %d>\n", len084, len84);
//	int len085 = printf("%.5p\n", 0);
//	int len85 = ft_printf("%.5p\n", 0);
//	printf("85<must %d, my %d>\n", len085, len85);
//	int len086 = printf("%9.2p\n", 1234); //i dont know
//	int len86 = ft_printf("%9.2p\n", 1234);
//	printf("86<must %d, my %d>\n", len086, len86);
//	int len087 = printf("%9.2p\n", 1234567);
//	int len87 = ft_printf("%9.2p\n", 1234567);
//	printf("87<must %d, my %d>\n", len087, len87);
//	int len088 = printf("%2.9p\n", 1234);
//	int len88 = ft_printf("%2.9p\n", 1234);
//	printf("88<must %d, my %d>\n", len088, len88);
//	int len089 = printf("%2.9p\n", 1234567);
//	int len89 = ft_printf("%2.9p\n", 1234567);
//	printf("89<must %d, my %d>\n", len089, len89);
//	int len090 = printf("%9.2p\n", 1234);
//	int len90 = ft_printf("%9.2p\n", 1234);
//	printf("90<must %d, my %d>\n", len090, len90);
//	int len091 = printf("%9.2p\n", 1234567);
//	int len91 = ft_printf("%9.2p\n", 1234567);
//	printf("91<must %d, my %d>\n", len091, len91);
//	int len092 = printf("% p|%+p\n", 42, 42);
//	int len92 = ft_printf("% p|%+p\n", 42, 42);
//	printf("92<must %d, my %d>\n", len092, len92);
//	int len093 = printf("%o, %ho, %hho\n", -42, -42, -42);
//	int len93 = ft_printf("%o, %ho, %hho\n", -42, -42, -42);
//	printf("93<must %d, my %d>\n", len093, len93);
//	int len094 = printf("%o\n", 2147483647);
//	int len94 = ft_printf("%o\n", 2147483647);
//	printf("94<must %d, my %d>\n", len094, len94);
//	int len095 = printf("%O\n",LONGMIN);
//	int len95 = ft_printf("%O\n", LONGMIN);
//	printf("95<must %d, my %d>\n", len095, len95);
//	int len096 = printf("%#.o\n", 42);
//	int len96 = ft_printf("%#.o\n", 42);
//	printf("96<must %d, my %d>\n", len096, len96);
//	int len097 = printf("{%05.s}\n", 0);
//	int len97 = ft_printf("{%05.s}\n", 0);
//	printf("97<must %d, my %d>\n", len097, len97);
//	int len098 = printf("{%05.%}\n", 0);
//	int len98 = ft_printf("{%05.%}\n", 0);
//	printf("98<must %d, my %d>\n", len098, len98);
//	int len099 = printf("{%05.Z}\n", 0);
//	int len99 = ft_printf("{%05.Z}\n", 0);
//	printf("99<must %d, my %d>\n", len099, len99);
//	int len0100 = printf("%#.3o\n", 1);
//	int len100 = ft_printf("%#.3o\n", 1);
//	printf("100<must %d, my %d>\n", len0100, len100);
//	int len0101 = printf("{%05.S}\n", L"42 c est cool"); //must 0000
//	int len101 = ft_printf("{%05.S}\n", L"42 c est cool"); // my 42 c est cool
//	printf("101<must %d, my %d>\n", len0101, len101);
//	int len0102 = printf("{%05p}\n", 0);
//	int len102 = ft_printf("{%05p}\n", 0);
//	printf("102<must %d, my %d>\n", len0102, len102);
//	int len0103 = printf("{%-30S}\n", L"我是一只猫。");
//	int len103 = ft_printf("{%-30S}\n", L"我是一只猫。");
//	printf("103<must %d, my %d>\n", len0103, len103);
//	int len0104 = printf("%.4S\n", L"我是一只猫。");
//	int len104 = ft_printf("%.4S\n", L"我是一只猫。");
//	printf("104<must %d, my %d>\n", len0104, len104);
//	int len0105 = printf("%15.4S\n", L"我是一只猫。");
//	int len105 = ft_printf("%15.4S\n", L"我是一只猫。");
//	printf("105<must %d, my %d>\n", len0105, len105);
//	int len0106 = printf("%4.15S\n", L"我是一只猫。");
//	int len106 = ft_printf("%4.15S\n", L"我是一只猫。");
//	printf("106<must %d, my %d>\n", len0106, len106);
//	int len0107 = printf("%4.1S\n", L"Jambon");
//	int len107 = ft_printf("%4.1S\n", L"Jambon");
//	printf("107<must %d, my %d>\n", len0107, len107);
	int len0106 = printf("{%-30S}\n", L"我是一只猫。");
	int len106 = ft_printf("{%-30S}\n", L"我是一只猫。");
	printf("106<must %d, my %d>\n", len0106, len106);
	return (0);
}
















