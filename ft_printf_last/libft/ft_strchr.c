/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:08:04 by amartyne          #+#    #+#             */
/*   Updated: 2018/07/04 17:10:49 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	a;

	i = 0;
	a = (char)c;
	while (s[i] != '\0' && s[i] != a)
		i++;
	if (s[i] == '\0')
	{
		if (a == '\0')
			return ((char*)&s[i]);
		return (NULL);
	}
	return ((char*)&s[i]);
}
