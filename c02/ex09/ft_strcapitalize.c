/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 22:56:17 by agaley            #+#    #+#             */
/*   Updated: 2022/07/12 21:47:32 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if ('A' <= c && c <= 'Z')
			str[i] = c + 'a' - 'A';
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	char	d;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		d = str[i + 1];
		if (i == 0 && 'a' <= c && c <= 'z')
			str[0] = c - 'a' + 'A';
		if ('a' <= d && d <= 'z' && (c < '0' || c > 'z'
				|| (90 < c && c < 97)
				|| (57 < c && c < 65)))
			str[i + 1] = d - 'a' + 'A';
		i++;
	}
	return (str);
}
