/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:20:32 by agaley            #+#    #+#             */
/*   Updated: 2022/07/28 12:42:17 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("%d, ", ft_is_prime(-1));
	printf("%d, ", ft_is_prime(0));
	printf("%d, ", ft_is_prime(1));
	printf("%d, ", ft_is_prime(41));
	printf("%d, ", ft_is_prime(97));
	printf("%d, ", ft_is_prime(57));
	printf("%d, ", ft_is_prime(2147483586));
	printf("%d, ", ft_is_prime(2147483587));
	printf("%d, ", ft_is_prime(147483587));
	printf("%d, ", ft_is_prime(147483588));
	printf("%d, ", ft_is_prime(INT_MIN));
	printf("%d, ", ft_is_prime(INT_MAX - 2));
}
