/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:07:46 by agaley            #+#    #+#             */
/*   Updated: 2022/07/07 15:01:34 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum22(int i, int j, int k, int l, int withComma)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = i + '0';
	b = j + '0';
	c = k + '0';
	d = l + '0';
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if (withComma)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				if (k > j && j > i && (i != 7 || j != 8 || k != 9))
					ft_putnum3(i, j, k, 1);
				else if (k > j && j > i && i == 7 && j == 8 && k == 9)
					ft_putnum3(i, j, k, 0);
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
}
