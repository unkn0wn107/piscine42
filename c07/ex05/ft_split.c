/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 22:55:40 by agaley            #+#    #+#             */
/*   Updated: 2022/07/20 11:40:39 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	**ft_split(char *str, char *charset);

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

void	ft_add_word(char *str, char **tab, int wn, int star, int end)
{
	int	i;

	i = 0;
	while (i < (end - star))
	{
		tab[wn][i] = str[star + i];
		i++;
	}
	tab[wn][i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		wn;
	char	**tab;

	tab = (char **)malloc((ft_count_words(str, charset) + 1) * sizeof(char *));
	i = 0;
	wn = 0;
	while (str[i])
	{
		while (str[i] && ft_is_sep(str[i], charset))
			i++;
		j = i;
		while (str[i] && !ft_is_sep(str[i], charset))
			i++;
		tab[wn] = (char *)malloc(i - j + 1);
		ft_add_word(str, tab, wn, j, i);
		wn++;
		while (str[i] && ft_is_sep(str[i], charset))
			i++;
	}
	tab[wn] = (void *)0;
	return (tab);
}
