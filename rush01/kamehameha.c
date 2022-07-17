/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kamehameha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:22:30 by agaley            #+#    #+#             */
/*   Updated: 2022/07/17 19:36:40 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
void	ft_putchar(char c);
int     ft_count_params(char *str);

void    ft_display_error(void);
int     **ft_get_restab(char *str, int dim);
void	ft_free_tab(int **tab, int dim);
int		ft_is_feasable(int **tab, int dim);

int ft_sqrt(int i)
{
	return (i);
}

int main(int argc, char *argv[])
{
	int dim;
	int **tab;
	if (argc != 2 || !argv[1][0] || ft_count_params(argv[1]) == -1
		|| ft_count_params(argv[1]) % 4 != 0)
	{
		ft_display_error();
		return (1);
	}

	printf("Params num : %d\n", ft_count_params(argv[1]));

	dim = ft_count_params(argv[1]) / 4;
	printf("Dimension : %d\n", dim);
	// if (dim != 4) // Pour le rush de base (a enlever pour bonus)
	// {
	//     ft_display_error();
	//     return (1);
	// }

	tab = ft_get_restab(argv[1], dim);
	if (!tab || !ft_is_feasable(tab, dim))
	{
		ft_display_error();
		return (1);
	}

	ft_pre_solve(tab, dim);

	// Affiche le tableau intermediaire
	int i = 0;
	int j;
	while (i < dim + 2)
	{
		j = 0;
		while (j < dim + 2)
		{
			printf("%d\t", tab[i][j]);
			j++;
		}
		printf("\n\n");
		i++;
	}

	ft_free_tab(tab, dim);

	// int **tab = ft_split(argv[1]);
	return (0);
}
