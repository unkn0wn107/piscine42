/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 22:55:40 by agaley            #+#    #+#             */
/*   Updated: 2022/07/19 22:55:44 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_is_sep(str[i], charset))
			i++;
		while (str[i] && !ft_is_sep(str[i], charset))
			i++;
		count++;
		while (str[i] && ft_is_sep(str[i], charset))
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		c;
	char	**tab;

	tab = (char **)malloc(ft_count_words(str, charset) + 1);
	i = 0;
	c = 0;
	while (str[i])
	{
		while (str[i] && ft_is_sep(str[i], charset))
			i++;
		j = i;
		while (str[i] && !ft_is_sep(str[i], charset))
			i++;
		tab[c] = (char *)malloc(i - j + 1);
		tab[c][i - j] = '\0';
		while (--j >= 0)
			tab[c][j] = str[j + i];
		c++;
		// while (str[i] && ft_is_sep(str[i], charset))
		// 	i++;
	}
	tab[c] = (void *)0;
	return (tab);
}

#include <stdio.h>
int	main()
{
	char **tab;
	int wc = ft_count_words("  Je teste count  words  ", " ");
	printf("%d mots\n", wc);
	tab = ft_split("  Je teste count  words  ", " ");
	int	i = 0;
	while (i < wc)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
