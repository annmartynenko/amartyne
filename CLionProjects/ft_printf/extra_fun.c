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

char *char_up(char *str)
{
	int len;
	int i;

	i = 0;
	len = ft_strlen(str);
	while(i < len)
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}