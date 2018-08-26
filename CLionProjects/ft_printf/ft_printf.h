/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 19:12:26 by amartyne          #+#    #+#             */
/*   Updated: 2018/07/18 19:18:30 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

//typedef struct s_list
//{
//	char type;
//	void *f;
//}				t_list;
void ft_putunsnbr(unsigned int n);
char *ft_itoa_base(long long int n, int base);
int word(char *format, int i, va_list ap);
int number(char *format, int i, va_list ap);
int ft_printf(char *format, ...);
char *char_up(char *str);
int count_bin(unsigned int numb);
void unicode(wchar_t numb);
void ft_putunslnbr(unsigned long int n);
void uni_str(wchar_t *arr);
void ft_putlnbr(long int n);

#endif
