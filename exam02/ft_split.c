/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:08:49 by agaley            #+#    #+#             */
/*   Updated: 2022/07/26 14:02:39 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strchr(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	wc;

	wc = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && ft_strchr(charset, str[i]))
			i++;
		while (str[i] && !ft_strchr(charset, str[i]))
			i++;
		wc++;
		while (str[i] && ft_strchr(charset, str[i]))
			i++;
	}
	return (wc);
}

void	ft_add_word(char *str, char **tab, int wc, int start, int end)
{
	int	i;

	tab[wc] = malloc(end - start + 1);
	if (!tab[wc])
		return ;
	i = 0;
	while (start <= end)
	{
		tab[wc][i] = str[start];
		start++;
		i++;
	}
	tab[wc][i] = '\0';
	printf("%s\n", tab[wc]);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		w;

	tab = malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	w = 0;
	while (str[i])
	{
		while (str[i] && ft_strchr(charset, str[i]))
			i++;
		j = i;
		while (str[i] && !ft_strchr(charset, str[i]))
			i++;
		if (!ft_add_word(str, tab, w, j, i - 1))
			return NULL;
		w++;
		while (str[i] && ft_strchr(charset, str[i]))
			i++;
	}
	tab[w] = NULL;
	return (tab);
}

int main(void)
{
	char	str[] = " ,";

	printf("%d\n", ft_strchr(str, ' '));
	printf("%d\n", ft_strchr(str, 'a'));
	printf("%d\n", ft_count_words("Combien il y a de mots ici ?", " "));
	printf("%d\n", ft_split("  /, /    Ca     marche/aussi avec,des espaces avant, ou apres ", " ,/"));
}