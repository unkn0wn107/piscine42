/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:59:36 by agaley            #+#    #+#             */
/*   Updated: 2022/07/11 20:22:32 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char	src[] = "12345678";
	char	dest1a[7];
	char	*dest1b;
	char	dest2a[9];
	char	*dest2b;
	char	dest3a[12];
	char	*dest3b;
	char	dest4a[7];
	char	*dest4b;
	char	dest5a[9];
	char	*dest5b;
	char	dest6a[12];
	char	*dest6b;
	
	dest1b = ft_strncpy(dest1a, src, 7);
	dest2b = ft_strncpy(dest2a, src, 9);
	dest3b = ft_strncpy(dest3a, src, 12);
	printf("ft_strncpy, 1 : dest[7], 2 : dest[9], 3 : dest[12] // +3 retours\n");
	printf("%s\n", dest1a);
	printf("%s\n", dest2a);
	printf("%s\n", dest3a);
	printf("%s\n", dest1b);
	printf("%s\n", dest2b);
	printf("%s\n", dest3b);

	dest4b = strncpy(dest4a, src, 7);
	dest5b = strncpy(dest5a, src, 9);
	dest6b = strncpy(dest6a, src, 12);
	printf("\nstrncpy, 1 : dest[7], 2 : dest[9], 3 : dest[12] // +3 retours\n");
	printf("%s\n", dest4a);
	printf("%s\n", dest5a);
	printf("%s\n", dest6a);
	printf("%s\n", dest4b);
	printf("%s\n", dest5b);
	printf("%s\n", dest6b);
}
