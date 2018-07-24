/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 18:33:58 by amartyne          #+#    #+#             */
/*   Updated: 2018/03/23 15:04:35 by amartyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		ft_strcmp(char *s1, char *s2)
{
	int res;
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i + 1] == '\0' && s2[i + 1] == '\0')
			res = 0;
		i++;
	}
	if (s1[i] != s2[i])
		res = s1[i] - s2[i];
	return (res);
}

void	ft_print(int n, char **a)
{
	int i;

	i = 1;
	while (i != n)
	{
		ft_putstr(a[i]);
		ft_putstr("\n");
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int y;
	int a;

	i = 1;
	j = 1;
	if (argc >= 2)
	{
		while (i++ != argc)
		{
			j = 1;
			y = 2;
			while (y != argc)
			{
				a = ft_strcmp(argv[j], argv[j + 1]);
				if (a > 0)
					ft_swap(&argv[j], &argv[j + 1]);
				j++;
				y++;
			}
		}
		ft_print(argc, argv);
	}
	return (0);
}
