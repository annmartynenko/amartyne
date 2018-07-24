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

//typedef struct p_list
//{
//	char type;
//	void *f;
//};
int word(char *format, int i, va_list ap);
int number(char *format, int i, va_list ap);
int ft_printf(char *format, ...);

#endif
