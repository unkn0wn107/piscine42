/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:01:23 by agaley            #+#    #+#             */
/*   Updated: 2022/07/12 15:11:29 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char str[][25] = {"debut     ", "fin", "A\nBCE", "abc\177deABCDE"};
	printf("%s - depuis : %s\n", ft_strcat(str[0], str[1]), str[1]);
	printf("%s - depuis : %s\n", ft_strcat(str[2], str[3]), str[3]);
	printf("------ Vraie strcat ------\n");
	printf("%s - depuis : %s\n", strcat(str[0], str[1]), str[1]);
	printf("%s - depuis : %s\n", strcat(str[2], str[3]), str[3]);
}
