/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:05:06 by agaley            #+#    #+#             */
/*   Updated: 2022/07/14 18:28:35 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>

int ft_atoi(char *str);

int	main(void)
{
	printf("%d\n", ft_atoi(""));
	printf("%d\n", ft_atoi("1"));
	printf("%d\n", ft_atoi("\t\n\v\f\r+107A"));
    printf("%d\n", ft_atoi("-212"));
	printf("%d\n", ft_atoi("  + 184gse"));
    printf("%d\n", ft_atoi("+ - +- 107fefsef "));
    printf("%d\n", ft_atoi("-2147483648"));
}
