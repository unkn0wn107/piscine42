/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:59:36 by agaley            #+#    #+#             */
/*   Updated: 2022/07/10 20:08:30 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
	char	src[] = "123456789";
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
	
	dest1b = ft_strcpy(dest1a, src);
	dest2b = ft_strcpy(dest2a, src);
	dest3b = ft_strcpy(dest3a, src);
	printf("ft_strcpy, 1 : dest[7], 2 : dest[9], 3 : dest[12] // +3 retours\n");
	printf("%s\n", dest1a);
	printf("%s\n", dest2a);
	printf("%s\n", dest3a);
	printf("%s\n", dest1b);
	printf("%s\n", dest2b);
	printf("%s\n", dest3b);

	dest4b = strcpy(dest4a, src);
	dest5b = strcpy(dest5a, src);
	dest6b = strcpy(dest6a, src);
	printf("\nstrcpy, 1 : dest[7], 2 : dest[9], 3 : dest[12] // +3 retours\n");
	printf("%s\n", dest4a);
	printf("%s\n", dest5a);
	printf("%s\n", dest6a);
	printf("%s\n", dest4b);
	printf("%s\n", dest5b);
	printf("%s\n", dest6b);
}
