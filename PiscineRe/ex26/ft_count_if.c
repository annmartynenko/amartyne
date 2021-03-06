/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 18:58:45 by amartyne          #+#    #+#             */
/*   Updated: 2018/03/21 19:30:45 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			a++;
		i++;
	}
	return (a);
}
