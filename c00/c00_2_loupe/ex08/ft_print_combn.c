/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:04:08 by agaley            #+#    #+#             */
/*   Updated: 2022/07/11 20:08:42 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		return ;
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
	int	last;
	int	i;
	int	prev;

	last = 1;
	i = 1;
	prev = arr[0];
	while (i < 9)
	{
		if (arr[i] != -1 && prev >= arr[i])
			return (0);
		if (prev != -1 && (arr[i] - prev) != 1)
			last = 0;
		prev = arr[i];
		i++;
	}
	if (arr[8] == 9 && arr[9 - n] == 9 - n + 1)
		return (-1);
	else
		return (1);
}

void	ft_print_combn(int n)
{
	int	arr[8];
	int	i;

	if (n == 1)
	{
		write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9", 28);
		return ;
	}
	else if (n == 2)
		write(1, "01, ", 4);
	i = 0;
	while (i < ft_pow(10, n) && i <= 23456789)
	{
		ft_itodigits(i, arr);
		if (n != 1 && ft_are_digits_asc(arr, n) && arr[9 - n] != arr[9 - n + 1])
		{
			ft_putdigits(arr, n);
			if (ft_are_digits_asc(arr, n) != -1)
				write(1, ", ", 2);
		}
		i++;
	}
	if (n == 9)
		write(1, "123456789", 9);
}
