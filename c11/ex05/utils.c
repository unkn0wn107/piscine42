/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 23:15:22 by agaley            #+#    #+#             */
/*   Updated: 2022/07/21 00:15:33 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (-2147483648 < nb && nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (0 <= nb && nb < 10)
		ft_putchar(nb + '0');
	else if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	i;
	int	result;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && '0' <= str[i] && str[i] <= '9')
	{
		result = 10 * result + str[i] - '0';
		i++;
	}
	return (sign * result);
}
