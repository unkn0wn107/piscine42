/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:23:43 by agaley            #+#    #+#             */
/*   Updated: 2022/07/11 22:53:06 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	int	i = 0;
	char str[][25] = {"", " ", "ABCDE", "abcdeABCDE", "/"};
	while (i < 5)
	{
		printf("%s - %s\n", str[i], ft_strlowcase(str[i]));
		i++;
	}
}
