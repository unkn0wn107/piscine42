/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:13:51 by agaley            #+#    #+#             */
/*   Updated: 2022/07/18 13:06:37 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main()
{
	printf("%d\n", ft_recursive_factorial(-1));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(5));
}
