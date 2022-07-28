/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:15:16 by agaley            #+#    #+#             */
/*   Updated: 2022/07/28 13:06:10 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_floor(int min, int max, int nb)
{
	long int	mean;

	mean = (min + max) / 2;
	if (min <= max)
	{
		if (mean * mean <= nb && (mean + 1) * (mean + 1) > nb)
			return (mean);
		else if (mean * mean < nb)
			return (ft_sqrt_floor(mean + 1, max, nb));
		else
			return (ft_sqrt_floor(min, mean - 1, nb));
	}
	return (min);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	if (nb > 3)
	{
		i = 3;
		while (i < ft_sqrt_floor(0, nb, nb))
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
	else
		return (0);
}
