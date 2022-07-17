/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_4th_4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:40:53 by jmoutous          #+#    #+#             */
/*   Updated: 2022/07/17 23:28:50 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	find_coln(int **tab, int dim, int n)
{
	int	row;
	int	col;
	int	coln;

	row = 1;
	col = 1;
	coln = 0;
	while (coln == 0 && col < dim + 1)
	{
		while (row < dim + 1 && tab[row][col] != n)
		{
			row++;
		}
		if (tab[row][col] == n && row != dim + 1)
		{
			col++;
			row = 1;
		}
		else
			coln = col;
	}
	return (coln);
}

int	find_rown(int **tab, int dim, int n)
{
	int	row;
	int	col;
	int	rown;

	row = 1;
	col = 1;
	rown = 0;
	while (rown == 0 && row < dim + 1)
	{
		while (col < dim + 1 && tab[row][col] != n)
			col++;
		if (tab[row][col] == n && col != dim + 1)
		{
			row++;
			col = 1;
		}
		else
			rown = row;
	}
	return (rown);
}

int	ft_how_many_n(int **tab, int dim, int n)
{
	int	row;
	int	col;
	int	count_n;

	col = 1;
	count_n = 0;
	while (col < dim + 1)
	{
		row = 1;
		while (row < dim + 1)
		{
			if (tab[row][col] == n)
				count_n++;
			row++;
		}
		col++;
	}
	return (count_n);
}

void	ft_fill_4th_n(int **tab, int dim)
{
	int	rown;
	int	coln;
	int	n;

	n = 1;
	while (n < dim + 1)
	{
		if (ft_how_many_n(tab, dim, n) == 3)
		{
			rown = find_rown(tab, dim, n);
			coln = find_coln(tab, dim, n);
			tab[rown][coln] = n;
		}
		n++;
	}
}
