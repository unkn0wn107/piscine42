/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:02:40 by agaley            #+#    #+#             */
/*   Updated: 2022/07/15 11:48:51 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_base_error(char *base)
{
	int	i;
	int	j;

	if (!base[0] || !base[1])
		return (1);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[j] == '+')
			return (1);
		while (base[j])
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	baselen;

	if (ft_base_error(base))
		return ;
	if (-2147483648 < nbr && nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	baselen = 0;
	while (base[baselen])
		baselen++;
	if (0 <= nbr && nbr < baselen)
		ft_putchar(base[nbr]);
	else if (nbr == -2147483648)
	{
		ft_putnbr_base(nbr / baselen, base);
		ft_putchar(base[(nbr - 1) % baselen + 1]);
	}
	else
	{
		ft_putnbr_base(nbr / baselen, base);
		ft_putchar(base[nbr % baselen]);
	}
}
