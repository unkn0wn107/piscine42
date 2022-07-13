/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:01:23 by agaley            #+#    #+#             */
/*   Updated: 2022/07/13 14:41:39 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[][25] = {"debut  fin  des haricots", "fin ", "A\nBE", "BCE"};
	printf("%s - depuis : %s\n", ft_strstr(str[0], str[1]), str[1]);
	printf("%s - depuis : %s\n", ft_strstr(str[2], str[3]), str[3]);
	printf("------ Vraie strstr ------\n");
	printf("%s - depuis : %s\n", strstr(str[0], str[1]), str[1]);
	printf("%s - depuis : %s\n", strstr(str[2], str[3]), str[3]);
}
