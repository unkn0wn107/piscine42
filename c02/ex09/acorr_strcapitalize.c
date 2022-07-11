/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 22:56:17 by agaley            #+#    #+#             */
/*   Updated: 2022/07/11 23:33:42 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	char	d;
printf("%d", ft_strlen(str));
	i = 0;
	while (i < ft_strlen(str) - 1)
	{
		c = str[i];
		d = str[i + 1];
		if (i == 0 && 'a' > c && c > 'z')
			str[0] = c - 'a' + 'A';
		if ('a' <= d && d <= 'z' && (c < 65 || c > 122 || (90 < c && c < 97)))
			str[i + 1] = d - 'a' + 'A';
		i++;
	}
	return (str);
}
