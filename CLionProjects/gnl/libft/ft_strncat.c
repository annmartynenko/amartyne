/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 13:45:38 by amartyne          #+#    #+#             */
/*   Updated: 2018/03/28 19:42:19 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	nn;
	int		i;
	int		j;

	i = 0;
	j = 0;
	nn = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0' && nn != n)
	{
		s1[i] = s2[j];
		i++;
		j++;
		nn++;
	}
	s1[i] = '\0';
	return (s1);
}
