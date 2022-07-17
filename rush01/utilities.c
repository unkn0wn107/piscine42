/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:42:47 by agaley            #+#    #+#             */
/*   Updated: 2022/07/16 20:42:49 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**ft_merge_tabs(int **tab1, int **tab2, int dim)
{
	int	row;
	int	col;
	int	**newtab;

	newtab = malloc((dim + 2) * sizeof(int *));
	row = 0;
	while (row < dim + 2)
	{
		newtab[row] = malloc((dim + 2) * sizeof(int));
		col = 0;
		while (col < dim + 2)
		{
			if (tab1[row][col] == tab2[row][col])
				newtab[row][col] = tab1[row][col];
			else if (tab1[row][col] != -1 && tab2[row][col] == -1)
				newtab[row][col] = tab1[row][col];
			else if (tab1[row][col] == -1 && tab2[row][col] != -1)
				newtab[row][col] = tab2[row][col];
			col++;
		}
		row++;
	}
	return (newtab);
}

int	**ft_tabcpy(int **tab, int dim)
{
	int	row;
	int	col;
	int	**newtab;

	newtab = malloc((dim + 2) * sizeof(int *));
	row = 0;
	while (row < dim + 2)
	{
		newtab[row] = malloc((dim + 2) * sizeof(int));
		col = 0;
		while (col < dim + 2)
		{
			newtab[row][col] = tab[row][col];
			col++;
		}
		row++;
	}
	return (newtab);
}

void	ft_free_tab(int **tab, int dim)
{
	int	i;

	i = 0;
	while (i < dim + 2)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
