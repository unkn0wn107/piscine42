/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:01:23 by agaley            #+#    #+#             */
/*   Updated: 2022/07/13 19:18:46 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char str[][25] = {"debut     ", "fin", "ABCE", "abcdeABCDE"};
//	char dst1[25];
	char dst2[25];
//	printf("%u - %s depuis : %s\n", ft_strlcat(str[0], str[1], 0), str[0], str[1]);
//	printf("%u - %s depuis : %s\n", ft_strlcat(str[0], str[1], 9), str[0], str[1]);
//	printf("%u - %s depuis : %s\n", ft_strlcat(str[2], str[3], 5), str[2], str[3]);
//	printf("%u - %s depuis : %s\n", ft_strlcat(dst1, str[3], 5), str[3], dst1);
	printf("------ Vraie strcat ------\n");
	printf("%lu - %s depuis : %s\n", strlcat(str[0], str[1], 0), str[0], str[1]);
	printf("%lu - %s depuis : %s\n", strlcat(str[0], str[1], 9), str[0], str[1]);
	printf("%lu - %s depuis : %s\n", strlcat(str[2], str[3], 5), str[2], str[3]);
	printf("%lu - %s depuis : %s\n", strlcat(dst2, str[3], 5), str[3], dst2);
}