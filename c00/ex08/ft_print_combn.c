/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:04:08 by agaley            #+#    #+#             */
/*   Updated: 2022/07/09 12:00:56 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_pos(unsigned int nb)
{
	if (0 <= nb && nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr_pos(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

int	*ft_itodigits(*int nbr)
{
	int arr[9];
	int i;
	int m;

	i = 0;
	m = 1;
	while(str[i] != '\0')
		i++;
	while(i >= 0)
	{
		arr[i] = nbr % m;
		m *= 10;
	}
	return (arr);
}

//ft_putchar(',');
//ft_putchar(' ');	

void	ft_print_combn(int n)
{
	int	arr[8];

	arr = {0,0,0,0,0,0,0,0,0};
	while (i <= 999999999 && )
	{
		while (j <= 99)
		{
			if (j > i && (i != 98 || j != 99))
				ft_putnum22(i, j, 1);
			else if (j > i && i == 98 && j == 99)
				ft_putnum22(i, j, 0);
			j++;
		}
		j = 0;
		i++;
	}
}

//save void	ft_print_combn(int n)
//{
//	int	arr[8];
//
//	arr = {0,0,0,0,0,0,0,0,0};
//	while (i <= )
//	{
//		while (j <= 99)
//		{
//			if (j > i && (i != 98 || j != 99))
//				ft_putnum22(i, j, 1);
//			else if (j > i && i == 98 && j == 99)
//				ft_putnum22(i, j, 0);
//			j++;
//		}
//		j = 0;
//		i++;
//	}
//}
