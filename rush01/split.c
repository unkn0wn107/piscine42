/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:24:38 by agaley            #+#    #+#             */
/*   Updated: 2022/07/16 19:20:45 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c)
{
	int		i;
	char	sep[2];

	sep[0] = ' ';
	sep[1] = '\0';
	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_params(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!ft_is_sep(str[i]))
			i++;
		else
			return (-1);
		if (str[i] == '\0' || ft_is_sep(str[i]))
			count++;
		else
			return (-1);
		if (str[i])
			i++;
		if (!str[i] && ft_is_sep(str[i - 1]))
			return (-1);
	}
	return (count);
}

int	**ft_split(char *str, int dim)
{
	int	i;
	int	col;
	int	row;
	int	**tab;

	tab = malloc(dim * sizeof(int *));
	i = 0;
	row = 0;
	while (str[i])
	{
		tab[row] = malloc(dim * sizeof(int));
		col = 0;
		while (col < dim)
		{
			if (!ft_is_sep(str[i]))
				i++;
			if (!str[i] || ft_is_sep(str[i]))
				tab[row][col] = str[i - 1] - '0';
			col++;
			if (str[i])
				i++;
		}
		row++;
	}
	return (tab);
}
