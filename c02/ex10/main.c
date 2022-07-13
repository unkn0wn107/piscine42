/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:23:43 by agaley            #+#    #+#             */
/*   Updated: 2022/07/13 14:04:21 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	int	i = 0;
	int len = 0;
	char src[][35] = {"ABC", "Null-terminated\0", "Plus que la taille de destination", "/"};
	char dest[15];
	while (i < 4)
	{
		len = ft_strlcpy(dest, src[i], 15);
		printf("%s => %s // len %d\n", src[i], dest, len);
		i++;
	}	
	i = 0;
	printf("Vraie strlcpy :\n");
	while (i < 4)
	{
		len = strlcpy(dest, src[i], 15);
		printf("%s => %s // len %d\n", src[i], dest, len);
		i++;
	}	
}
