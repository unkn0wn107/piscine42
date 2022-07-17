/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_4x4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:50:33 by jmoutous          #+#    #+#             */
/*   Updated: 2022/07/17 19:36:59 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

#define N 4

void	ft_display_answer(int **restab, int dim);
int	    **ft_get_restab(char *str, int dim);

int ft_check_conditions(int **tab, int val, int x, int y);

void	print(int **arr)
{
	int i;
	i = 0;
	while (i < N)
	{
		int j;
		j = 0;
		while (j < N)
		{
			printf("%d ",arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

int ft_is_val_ok(int **tab, int row, int col, int num)
{
	int x;
	x = 1;
	while (x <= 4)
	{
		if (tab[row][x] == num)
			return (0);
		x++;
	}
	x = 1;
	while (x <= 4)
	{
		if (tab[x][col] == num)
			return (0);
		x++;
	}
	if (!ft_check_conditions(tab, num, row, col))
		return (0);
	return 1;
}

int ft_solve(int **tab, int row, int col)
{
	if (row == N && col == N + 1 )
		return (1);
	if (col == N + 1)
	{
		row++;
		col = 1;
	}
	   if (tab[row][col] > 0)
		return (ft_solve(tab, row, col + 1));

	int num;
	num = 1;
	while (num <= N)
	{
		if (ft_is_val_ok(tab, row, col, num) == 1)
		{
			tab[row][col] = num;
			if (ft_solve(tab, row, col + 1) == 1)
				return (1);
		}
		tab[row][col] = 0;
		num ++;
	}
	return (0);
}

int	main()
{
	int dim = 4;
	int **tab;
	tab = ft_get_restab("2 4 1 2 3 1 3 2 2 1 3 2 2 3 1 2", dim);
	// tab[1][1] = 4;
	// tab[1][2] = 2;
	tab[1][3] = 4;
	// tab[1][4] = 4;
	tab[2][1] = 4;
	// tab[2][3] = 4;
	// tab[2][4] = 4;
	// tab[3][1] = 3;
	tab[3][4] = 4;
	 tab[4][2] = 4;
	// tab[4][3] = 4;
	// tab[4][4] = 3;
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
	ft_solve(tab, 1, 1);
	ft_display_answer(tab, dim);
	return (0);
}
