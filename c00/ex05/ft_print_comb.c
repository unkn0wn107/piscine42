/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:07:46 by agaley            #+#    #+#             */
/*   Updated: 2022/07/07 12:09:53 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum3(int i, int j, int k)
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
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i <= 9)
	{
		while (j <= 8)
		{
			while (k <= 7)
			{
				ft_putnum3(k, i, j);
				if (i != j && i != k && j != k)
				{
					ft_putnum3(k, j, i);
				}
				i++;
				j++;
				k++;
			}
		}
	}
}
