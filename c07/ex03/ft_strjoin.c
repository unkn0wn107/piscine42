/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:42:53 by agaley            #+#    #+#             */
/*   Updated: 2022/07/19 19:26:12 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strslen(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		len += ft_strlen(sep);
		i++;
	}
	len -= ft_strlen(sep);
	return (len);
}

int	ft_add_sep(char *str, char *sep, int ind)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		str[ind] = sep[i];
		i++;
		ind++;
	}
	return (ind);
}

void	ft_build_str(char *str, int size, char **strs, char *sep)
{
	int	n;
	int	i;
	int	j;

	n = 0;
	i = 0;
	while (n < size)
	{
		j = 0;
		while (strs[n][j])
		{
			str[i] = strs[n][j];
			i++;
			j++;
		}
		if (n != size - 1)
			i = ft_add_sep(str, sep, i);
		n++;
	}
	str[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	if (size == 0)
	{
		str = (char *)malloc(1);
		str[0] = '\0';
		return (str);
	}
	str = (void *)malloc(ft_strslen(size, strs, sep) + 1);
	ft_build_str(str, size, strs, sep);
	return (str);
}
