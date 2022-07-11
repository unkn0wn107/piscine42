/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:04:08 by agaley            #+#    #+#             */
/*   Updated: 2022/07/11 13:31:03 by agaley           ###   ########lyon.fr   */
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

int	ft_are_digits_asc(int *arr)
{
	int	yes;
	int last;
	int	i;
	int	prev;

	yes = 1;
	last = 1;
	i = 1;
	prev = arr[0];
	while (i < 9)
	{
		//printf("\nprev : %d -- arr[i] %d -- diff %d", prev, arr[i], arr[i] - prev);
		if (arr[i] != -1 && prev >= arr[i])
			yes = 0;
		if ((prev != -1 && (arr[i] - prev) != 1) || arr[8] != 9)
			last = 0;
		prev = arr[i];
		i++;
	}
	if (last == 1)
		return (-1);
	else
		return (yes);
}

void	ft_print_combn(int n)
{
	int	arr[8];
	int	i;
//	int j;
	int	ord;
//	char c;

	i = 0;
//	j = 0;
	while (i < ft_pow(10, n))
	{
		ft_itodigits(i, arr);
	//	while (j < 9)
	//	{
	//		c = arr[i] + '0';
	//		write(1, &c, 1);
	//		write(1, ", ", 2);
	//		j++;
	//	}
		ord = ft_are_digits_asc(arr);
		//printf("i %d - ord %d\n", i, ord);
		if (ord && arr[8 - n + 1] != arr[8 - n + 2])
		{
			//ft_putnbr_pos(i);
			ft_putdigits(arr, n);
			if (ord != -1)
				write(1, ", ", 2);
		}
		i++;
	}
}
