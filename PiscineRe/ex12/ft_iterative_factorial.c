/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 15:47:12 by amartyne          #+#    #+#             */
/*   Updated: 2018/03/24 10:38:24 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;
	int i;

	res = 1;
	i = 1;
	if (nb > 0 && nb <= 12)
	{
		while (i - 1 != nb)
		{
			res = res * i;
			i++;
		}
	}
	else if (nb == 0)
		res = 1;
	else
		res = 0;
	return (res);
}
