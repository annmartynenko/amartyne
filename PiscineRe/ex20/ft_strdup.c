/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 14:12:49 by amartyne          #+#    #+#             */
/*   Updated: 2018/03/21 21:44:45 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*cop;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	cop = (char*)malloc(sizeof(char) * (i + 1));
	if (!cop)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		cop[i] = src[i];
		i++;
	}
	cop[i] = '\0';
	return (cop);
}
