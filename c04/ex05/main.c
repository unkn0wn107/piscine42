/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:05:06 by agaley            #+#    #+#             */
/*   Updated: 2022/07/14 17:07:31 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("%d\n", ft_atoi_base("1", ""));
	printf("%d\n", ft_atoi_base("1", "1"));
	printf("%d\n", ft_atoi_base("107A", "0123456789"));
	printf("%d\n", ft_atoi_base("107A", "107"));
    printf("%d\n", ft_atoi_base("-212", "12"));
	printf("%d\n", ft_atoi_base("  + 184gse", "184"));
    printf("%d\n", ft_atoi_base("+ - +- 107fefsef ", "107fe"));
    printf("%d\n", ft_atoi_base("-2147483648", "0123456789"));
}
