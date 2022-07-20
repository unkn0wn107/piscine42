/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:05:08 by agaley            #+#    #+#             */
/*   Updated: 2022/07/20 22:06:49 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i])
		i++;
	dup = (char *)malloc((i + 1) * sizeof(char));
	if (!dup)
		return ((char *)0);
	dup[i] = '\0';
	while (i >= 0)
	{
		dup[i] = src[i];
		i--;
	}
	return (dup);
}

int	ft_strchr(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *sep)
{
	int	i;
	int	wc;

	wc = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && ft_strchr(str[i], sep))
			i++;
		while (str[i] && !ft_strchr(str[i], sep))
			i++;
		wc++;
		while (str[i] && ft_strchr(str[i], sep))
			i++;
	}
	return (wc);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		wc;
	char	*str2;
	char	**strs;

	str2 = ft_strdup(str);
	strs = (char **)malloc((ft_count_words(str, charset) + 1) * sizeof(char *));
	if (!strs)
		return ((char **)0);
	wc = 0;
	i = 0;
	while (str2[i])
	{
		while (str2[i] && ft_strchr(str2[i], charset))
		{
			str2[i] = '\0';
			i++;
		}
		strs[wc] = &str2[i];
		while (str2[i] && !ft_strchr(str2[i], charset))
			i++;
		wc++;
	}
	strs[wc] = (char *)0;
	return (strs);
}
