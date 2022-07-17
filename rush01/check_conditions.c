/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conditions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:36:26 by agaley            #+#    #+#             */
/*   Updated: 2022/07/17 22:52:06 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#define N 4

int	ft_check_conditions_left(int **tab, int val, int r, int c)
{
	int	col;
	int	max;
	int	count;
	int	flag;

	max = 0;
	flag = 0;
	col = 1;
	count = 0;
	while (col < N + 1 && max != N)
	{
		if (col != c && tab[r][col] == -1)
			flag = 1;
		if ((col == c && val > max) || tab[r][col] > max)
			count++;
		if (col == c && val > max)
			max = val;
		else if (tab[r][col] > max)
			max = tab[r][col];
		col++;
	}
	if (count == tab[r][0] || flag)
		return (1);
	else
		return (0);
}

int	ft_check_conditions_right(int **tab, int val, int r, int c)
{
	int	col;
	int	max;
	int	count;
	int	flag;

	max = 0;
	flag = 0;
	col = N;
	count = 0;
	while (col > 0 && max != 4)
	{
		if (col != c && tab[r][col] == -1)
			flag = 1;
		if ((col == c && val > max) || tab[r][col] > max)
			count++;
		if (col == c && val > max)
			max = val;
		else if (tab[r][col] > max)
			max = tab[r][col];
		col--;
	}
	if (count == tab[r][N + 1] || flag)
		return (1);
	else
		return (0);
}

int	ft_check_conditions_down(int **tab, int val, int r, int c)
{
	int	row;
	int	max;
	int	count;
	int	flag;

	max = 0;
	flag = 0;
	row = 1;
	count = 0;
	while (row < N + 1 && max != N)
	{
		if (row != r && tab[row][c] == -1)
			flag = 1;
		if ((row == r && val > max) || tab[row][c] > max)
			count++;
		if (row == r && val > max)
			max = val;
		else if (tab[row][c] > max)
			max = tab[row][c];
		row++;
	}
	if (count == tab[0][c] || flag)
		return (1);
	else
		return (0);
}

int	ft_check_conditions_up(int **tab, int val, int r, int c)
{
	int	row;
	int	max;
	int	count;
	int	flag;

	max = 0;
	flag = 0;
	row = N;
	count = 0;
	while (row > 0 && max != N)
	{
		if (row != r && tab[row][c] == -1)
			flag = 1;
		if ((row == r && val > max) || tab[row][c] > max)
			count++;
		if (row == r && val > max)
			max = val;
		else if (tab[row][c] > max)
			max = tab[row][c];
		row--;
	}
	if (count == tab[N + 1][c] || flag)
		return (1);
	else
		return (0);
}

int	ft_check_conditions(int **tab, int val, int row, int col)
{
	return (ft_check_conditions_left(tab, val, row, col)
		&& ft_check_conditions_right(tab, val, row, col)
		&& ft_check_conditions_down(tab, val, row, col)
		&& ft_check_conditions_up(tab, val, row, col));
}
