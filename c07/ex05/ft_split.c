/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 22:55:40 by agaley            #+#    #+#             */
/*   Updated: 2022/07/28 11:15:43 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
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

char	*ft_strdup_word(char *str, char *charset, int start)
{
	int		i;
	char	*word;

	i = 0;
	while (!ft_is_sep(str[start], charset))
	{
		start++;
		i++;
	}
	word = (char *)malloc(i * sizeof(char));
	word[i] = '\0';
	start--;
	while (--i >= 0 && !ft_is_sep(str[start + i], charset))
	{
		word[i] = str[start + i];
		start--;
		i--;
	}
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		wn;
	char	**tab;

	tab = (char **)malloc((ft_count_words(str, charset) + 1) * sizeof(char *));
	i = 0;
	wn = 0;
	while (str[i])
	{
		while (str[i] && ft_is_sep(str[i], charset))
			i++;
		tab[wn] = ft_strdup_word(str, charset, i);
		while (str[i] && !ft_is_sep(str[i], charset))
			i++;
		wn++;
		while (str[i] && ft_is_sep(str[i], charset))
			i++;
	}
	tab[wn] = (void *)0;
	return (tab);
}

#include <stdio.h>
int	ft_count_words(char *str, char *charset);
char	**ft_split(char *str, char *charset);

int	main()
{
	char **tab;
	int wc = ft_count_words("  Je teste count,sep  words  ", " ,");
	printf("%d mots\n", wc);
	tab = ft_split("  Je teste count,sep  words", " ,");
	int	i = 0;
	while (i < wc)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
