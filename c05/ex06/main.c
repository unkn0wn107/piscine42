/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:20:32 by agaley            #+#    #+#             */
/*   Updated: 2022/07/18 17:28:07 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("%d, ", ft_is_prime(-1));
	printf("%d, ", ft_is_prime(0));
	printf("%d, ", ft_is_prime(1));
	printf("%d, ", ft_is_prime(41));
	printf("%d, ", ft_is_prime(97));
	printf("%d, ", ft_is_prime(57));
}
