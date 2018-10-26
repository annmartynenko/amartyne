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
# define unco 3
# include <unistd.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct		q_struct
{
	char			plus;
	char 			minus;
	char 			space;
	char			hash;
	char 			nul;
	int				width;
	int 			precision;
	char 			sp;
}					a_struct;
void		*ft_memset(void *b, int c, size_t len);
size_t		ft_strlen(const char *s);
int			ft_putchar(char c);
int			ft_putstr(char const *s);
void		ft_arrfree(char **s);
void		ft_putnbr(int n, int *len_res);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const*s, int fd);
void		*ft_memcpy(void *restrict dst, const void *restrict src, \
size_t n);
int			ft_isdigit(int c);
int			ft_atoi(const char *str);
int			ft_isalpha(int c);
int			n_time(int i, int (*f)(char c), char str);
void		ft_putunsnbr(unsigned int n, a_struct flags, int *len_res);
int			ft_itoa_base(long long int n, int base, int letter, a_struct flags);
void		word(char format, va_list ap, a_struct flags, int *len_res);
void		number(char format, va_list ap, a_struct flags, int *len_res);
int			ft_printf(char *format, ...);
int			count_bin(unsigned int numb);
void		unicode(wchar_t numb, a_struct flags, int mark, int *len_res);
void		ft_putunslnbr(unsigned long int n, a_struct flags, int *len_res);
void		uni_str(wchar_t *arr, a_struct flags, int *len_res);
void		ft_putlnbr(long int n, a_struct flags, int *len_res);
int		convert(char format, va_list ap, a_struct flags,\
unsigned long modifer);
a_struct 	find_flag(char *str, int *i, va_list ap);
int			a_len(long long int n, int base, int len, long long *j);
void		if_flags(a_struct flags, int len, int *len_res);
void		next_fl(char *str, int *i, a_struct *flags);
int			if_flags_ito(a_struct flags, int len, int base, int letter);
void		for_minus(a_struct flags, int len, int base, int *len_res);
int			len_unco(int size);
void		ft_putstring(char const *s, a_struct flags, int *len_res);
void		ft_putnumber(long long int n, a_struct flags, int *len_res);
int			specifier(char *format, int *i, va_list ap, a_struct flags);
int			valid(char format);
void		not_spec(a_struct flags, int *len_res);
int			ft_itoa_base_int(unsigned int n, unsigned int base, int letter, a_struct flags);
int			ft_itoa_unslong(unsigned long n, unsigned long base, int letter, a_struct flags);
int			ft_itoa_max(uintmax_t n, uintmax_t base, int letter, a_struct flags);
void 		ft_putmax(intmax_t n, a_struct flags, int *len_res);
a_struct		if_flags_d(a_struct flags, int *len, int *len_res);
void		ft_putint(int n, a_struct flags, int *len_res);
void		ft_putschar(int n, a_struct flags, int *len_res);
void		for_h(char *format, int *i, va_list ap, a_struct flags, int *len_res);
void		for_l(char *format, int *i, va_list ap, a_struct flags, int *len_res);
void		for_ll(char *format, int *i, va_list ap, a_struct flags, int *len_res);
void		for_hh(char *format, int *i, va_list ap, a_struct flags, int *len_res);

#endif