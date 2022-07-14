/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:01:23 by agaley            #+#    #+#             */
/*   Updated: 2022/07/15 00:37:13 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char str[][25] = {"debut \0    ", "fin", "A\nBCE", "abc\177deABCDE"};
//	printf("%s - depuis : %s\n", ft_strncat(str[0], str[1], 5), str[1]);
//	printf("%s - depuis : %s\n", ft_strncat(str[2], str[3], 3), str[3]);
	printf("------ Vraie strcat ------\n");
	printf("%s - depuis : %s\n", strncat(str[0], str[1], 5), str[1]);
	printf("%s - depuis : %s\n", strncat(str[2], str[3], 3), str[3]);
}
