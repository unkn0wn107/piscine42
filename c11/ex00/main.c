/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:24:58 by agaley            #+#    #+#             */
/*   Updated: 2022/07/20 22:29:32 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (0 <= nb && nb < 10)
		ft_putchar(nb + '0');
	else if (-2147483648 < nb && nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-1 * nb);
	}
	else if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar(8 + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

void	ft_foreach(int *tab, int length, void(*f)(int));

int	main()
{
	int	tab[] = { 107, 184, 212 };

	ft_foreach(tab, 3, &ft_putnbr);
}
