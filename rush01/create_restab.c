/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_restab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:59:44 by agaley            #+#    #+#             */
/*   Updated: 2022/07/16 19:21:02 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// Copie de tableau
// Display du tableau de reponses

#include <stdlib.h>

int	    **ft_split(char *str, int dim);

int ft_params_tab_error(int **tab, int dim)
{
    int row;
    int col;

    row = 0;
    while (row < dim)
    {
        col = 0;
        while (col < dim)
        {
            if (tab[row][col] < 0 || tab[row][col] > dim)
                return (1);
            col++;
        }
        row++;
    }
    return (0);
}

int	**ft_create_restab(int dim)
{
	int	row;
	int	**restab;

	restab = malloc((dim + 2) * sizeof(int *));
    row = 0;
	while (row < dim + 2)
	{
		restab[row] = malloc((dim + 2) * sizeof(int));
		row++;
	}
	return (restab);
}

void	ft_fill_restab_values(int **restab, int dim)
{
	int	col;
	int	row;

	restab[0][0] = -42;
	restab[0][dim + 1] = -42;
	restab[dim + 1][0] = -42;
	restab[dim + 1][dim + 1] = -42;
    row = 1;
    while (row < dim + 1)
    {
        col = 1;
        while (col < dim + 1)
        { 
            restab[row][col] = -1;
            col++;    
        }
        row++;
    }
}

void	ft_fill_restab_headers(int **restab, int **paramstab, int dim)
{
	int	col;
    int	row;

	col = 1;
	while (col < dim + 1)
	{
		restab[0][col] = paramstab[0][col - 1];
		restab[dim + 1][col] = paramstab[1][col - 1];
		col++;
	}
    row = 1;
    while (row < dim + 1)
	{
		restab[row][0] = paramstab[2][row - 1];
		restab[row][dim + 1] = paramstab[3][row - 1];
		row++;
	}
}

int	**ft_get_restab(char *str, int dim)
{
    int **paramstab;
    int	**restab;

    paramstab = ft_split(str, dim);
    if (ft_params_tab_error(paramstab, dim))
        return (int **)0;
	restab = ft_create_restab(dim);
    ft_fill_restab_values(restab, dim);
    ft_fill_restab_headers(restab, paramstab, dim);
    return (restab);
}
