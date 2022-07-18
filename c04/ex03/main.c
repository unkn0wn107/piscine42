/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:05:06 by agaley            #+#    #+#             */
/*   Updated: 2022/07/18 16:42:58 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_atoi(char *str);

int	main(void)
{
	printf("%d\n", atoi(""));
	printf("%d\n", atoi("1"));
	printf("%d\n", atoi("\t\n\v\f\r-107A"));
    printf("%d\n", atoi("-212"));
	printf("%d\n", atoi("  +-184gse"));
    printf("%d\n", atoi("+ - +- 107fefsef "));
    printf("%d\n", atoi("-2147483648"));
}
