/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:16:28 by agaley            #+#    #+#             */
/*   Updated: 2022/07/18 13:22:58 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power);

int	main()
{
	printf("%d\n", ft_iterative_power(4, -1));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(4, 1));
	printf("%d\n", ft_iterative_power(4, 2));
	printf("%d\n", ft_iterative_power(4, 4));
}
