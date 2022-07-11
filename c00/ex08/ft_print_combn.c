/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:04:08 by agaley            #+#    #+#             */
/*   Updated: 2022/07/11 15:02:08 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_pow(int a, int n)
{
	if (a == 0)
		return (0);
	if (n <= 0)
		return (1);
	return (a * ft_pow(a, n - 1));
}

void	ft_putdigits(int *arr, int n)
{
	int		i;
	int		d;
	char	c;

	if (n == 1)
	{
		c = arr[8] + '0';
		write(1, &c, 1);
	}
	if (arr[8 - n + 1] == arr[8 - n + 2])
		return;
	i = 0;
	while (i < n)
	{
		d = arr[8 - n + i + 1];
		if (d != -1)
		{
			c = d + '0';
			write(1, &c, 1);
		}
		else 
			write(1, "0", 1);
		i++;
	}
}	

//void	ft_putnbr_pos(unsigned int nb)
//{
//	char c;
//
//	if (nb < 10)
//	{
//		c = nb + '0';	
//		write(1, &c, 1);
//	}
//	else
//	{
//		c = (nb % 10) + '0';
//		ft_putnbr_pos(nb / 10);
//		write(1, &c, 1);
//	}
//}

void	ft_itodigits(int nbr, int *arr)
{
	int	i;
	int	mult;
	int	mod;

	i = 8;
	mult = 10;
	while (i >= 0)
	{
		mod = (10 * nbr / mult) % mult;
		while (mod > 9)
			mod %= 10;
		if (mod != nbr)
			arr[i] = mod;
		else
			arr[i] = 0;
		mult *= 10;
		i--;
	}
	i = 0;
	while (arr[i] == 0 && i < 9)
	{
		arr[i] = (-1);
		i++;
	}
}

int	ft_are_digits_asc(int *arr, int n)
{
	int last;
	int	i;
	int	prev;

	last = 1;
	i = 1;
	prev = arr[0];
	while (i < 9)
	{
		//printf("\nprev : %d -- arr[i] %d -- diff %d", prev, arr[i], arr[i] - prev);
		if (arr[i] != -1 && prev >= arr[i])
			return (0);
		if (prev != -1 && (arr[i] - prev) != 1)
		//if (arr[9] != 9 || arr[9 - n] != n)
			last = 0;
		prev = arr[i];
		i++;
	}
	//printf("%d - %d - %d\n", arr[8], arr[9-n], n);
	if (arr[8] == 9 && arr[9 - n] == 9 - n + 1)
		return (-1);
	else
		return (1);
}

void	ft_print_combn(int n)
{
	int	arr[8];
	int	i;
	int	ord;

	if (n == 1)
	{
		write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9", 28);
	   	return;
	}
	else if (n == 2)
		write(1, "01, ", 4);

	i = 0;
	while (i < ft_pow(10, n))
	{
		ft_itodigits(i, arr);
		ord = ft_are_digits_asc(arr, n);
		//printf("i %d - ord %d\n", i, ord);
		//for (int j = 0; j < 10; j++)
		//{
		//	printf("%d", arr[j]);
		//}
		if (n != 1 && ord && arr[9 - n] != arr[9 - n + 1])
		{
			//ft_putnbr_pos(i);
			ft_putdigits(arr, n);
			if (ord != -1)
				write(1, ", ", 2);
		}
		i++;
	}
}
