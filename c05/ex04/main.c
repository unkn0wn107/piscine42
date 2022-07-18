/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:16:28 by agaley            #+#    #+#             */
/*   Updated: 2022/07/18 13:37:33 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index);

int	main()
{
	printf("%d\n", ft_fibonacci(-2));
	printf("%d\n", ft_fibonacci(-1));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(10));
}
