/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:16:28 by agaley            #+#    #+#             */
/*   Updated: 2022/07/18 17:20:16 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int index);

int	main()
{
	printf("%d\n", ft_sqrt(-2));
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(-2147483648));
	printf("%d\n", ft_sqrt(2147483647));
}
