/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:07:46 by agaley            #+#    #+#             */
/*   Updated: 2022/07/07 14:47:32 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum3(int i, int j, int k, int withComma)
{
	char	a;
	char	b;
	char	c;

	a = i + '0';
	b = j + '0';
	c = k + '0';
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (withComma)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
		ft_putchar('.');
}

void	ft_print_comb(void)
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
