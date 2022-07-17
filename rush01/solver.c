/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_4x4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:50:33 by jmoutous          #+#    #+#             */
/*   Updated: 2022/07/17 23:31:12 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define N 4

int		**ft_get_restab(char *str, int dim);
int		ft_check_conditions(int **tab, int val, int x, int y);
int		**ft_tabcpy(int **tab, int dim);
void	resolve_row(int **tab);
void	resolve_col(int **tab);
int		**ft_merge_tabs(int **tab1, int **tab2, int dim);
void	ft_fill_4th_n(int **tab, int dim);
void	ft_free_tab(int **tab, int dim);

int	**ft_pre_solve(int **tab, int dim)
{
	int	**tab1;
	int	**tab2;
	int	**mergedtab;

	(void)dim;
	tab1 = ft_tabcpy(tab, N);
	tab2 = ft_tabcpy(tab, N);
	resolve_row(tab1);
	resolve_col(tab2);
	mergedtab = ft_merge_tabs(tab1, tab2, N);
	ft_free_tab(tab1, N);
	ft_free_tab(tab2, N);
	ft_fill_4th_n(mergedtab, N);
	return (mergedtab);
}

int	ft_is_val_ok(int **tab, int row, int col, int num)
{
	int	x;

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
	return (1);
}

int	ft_solve(int **tab, int row, int col)
{
	int	num;

	if (row == N && col == N + 1)
		return (1);
	if (col == N + 1)
	{
		row++;
		col = 1;
	}
	if (tab[row][col] > 0)
		return (ft_solve(tab, row, col + 1));
	num = 1;
	while (num <= N)
	{
		if (ft_is_val_ok(tab, row, col, num) == 1)
		{
			tab[row][col] = num;
			if (ft_solve(tab, row, col + 1) == 1)
				return (1);
		}
		tab[row][col] = -1;
		num ++;
	}
	return (0);
}
