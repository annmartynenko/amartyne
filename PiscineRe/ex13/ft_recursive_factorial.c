/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 16:02:15 by amartyne          #+#    #+#             */
/*   Updated: 2018/03/23 13:20:52 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb > 0 && nb <= 12)
		res = nb * ft_recursive_factorial(nb - 1);
	else if (nb == 0)
		res = 1;
	else
		res = 0;
	return (res);
}
