/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:24:58 by agaley            #+#    #+#             */
/*   Updated: 2022/07/20 22:36:19 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb > 1)
	{
		i = 2;
		while (i < nb / 2)
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

int	*ft_map(int *tab, int length, int(*f)(int));

#include <stdio.h>

int	main()
{
	int	tab[] = { 107, 184, 212 };
	int	*out;
	int	i;

	out = ft_map(tab, 3, &ft_find_next_prime);
	i = 0;
	while (i < 3)
	{
		printf("%d, ", out[i]);
		i++;
	}
}
