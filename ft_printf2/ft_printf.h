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

# define low 0
# define up 1
# define P 2
# include <unistd.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

typedef struct		q_struct
{
	char			plus;
	char 			minus;
	char 			space;
	char 			hash;
	char 			nul;
	int				width;
	int 			precision;
}					a_struct;
void	n_time(int i, void (*f)(char c), char str);
void	ft_putunsnbr(unsigned int n, a_struct flags);
void	ft_itoa_base(long long int n, int base, int letter, a_struct flags);
void	word(char format, va_list ap, a_struct flags);
void	number(char format, va_list ap, a_struct flags);
int		ft_printf(char *format, ...);
int		count_bin(unsigned int numb);
void	unicode(wchar_t numb, a_struct flags, int mark);
void	ft_putunslnbr(unsigned long int n, a_struct flags);
void	uni_str(wchar_t *arr, a_struct flags);
void	ft_putlnbr(long int n, a_struct flags);
void	convert(char format, va_list ap, a_struct flags);
a_struct find_flag(char *str, int *i, va_list ap);
int		a_len(long long int n, int base, int len, long long *j);
void	if_flags(a_struct flags, int len);
void	next_fl(char *str, int *i, a_struct *flags);
void	if_flags_ito(a_struct flags, int len, int base, int letter);
void	n_time(int i, void (*f)(char), char str);


#endif