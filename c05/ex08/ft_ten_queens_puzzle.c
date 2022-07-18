/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:50:28 by agaley            #+#    #+#             */
/*   Updated: 2022/07/19 00:57:30 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(int map[10][10])
{
	int		r;
	int		c;
	char	a;

	r = 0;
	while (r < 10)
	{
		c = 0;
		while (c < 10)
		{
			a = map[r][c] + '0';
			write(1, &a, 1);
			write(1, " ", 1);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
}

int	ft_count_and_display(int map[10][10], int disp_c, int disp_r)
{
	int		r;
	int		c;
	int 	count;
	char 	pos;

	count = 0;
	r = 0;
	while (r < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (map[r][c] == 1)
				count++;
			if (map[r][c] == 1 && disp_c)
				pos = c + '0';
			if (map[r][c] == 1 && disp_r)
				pos = r + '0';
			if (map[r][c] == 1 && (disp_r || disp_c))
				write(1, &pos, 1);
			c++;
		}
		r++;
	}
	if (disp_r && disp_c)
		write(1, "\n", 1);
	return (count);
}

int	ft_queen_pos_ok(int tab[10][10], int row, int col)
{
	int	x;
	int	rdiagp;
	int	cdiagp;
	int	rdiagm;
	int	cdiagm;

	x = 0;
	rdiagp = row + 1;
	rdiagm = row - 1;
	cdiagp = col + 1;
	cdiagm = col - 1;
	while (x < 10)
	{
		if ((x != row && tab[x][col] == 1) || (x != col && tab[row][x] == 1))
			return (0);
		if ((rdiagp < 10 && cdiagp < 10 && tab[rdiagp][cdiagp] == 1)
				|| (rdiagm >= 0 && cdiagm >= 0 && tab[rdiagm][cdiagm] == 1))
			return (0);
		if ((rdiagp < 10 && cdiagm >= 0 && tab[rdiagp][cdiagm] == 1)
				|| (rdiagm >= 0 && cdiagp < 10 && tab[rdiagm][cdiagp] == 1))
			return (0);
		rdiagp++;
		cdiagp++;
		rdiagm--;
		cdiagm--;
		x++;
	}
	return (1);
}
#include <stdio.h>
int	ft_put_queens(int tab[10][10], int row, int col)
{
	int	r = 0;
	printf("row %d - col %d - pos ok %d\n", row, col, ft_queen_pos_ok(tab, row, col));
	if (row == 9 && col == 10)
		return (1);
	else if (col == 10)
	{
		row++;
		col = 0;
	}
	while (r < 10)
	{
		if (tab[r][col] == 1)
			return	(ft_put_queens(tab, r, col + 1));
		else if (ft_queen_pos_ok(tab, r, col))
		{
			tab[r][col] = 1;
			// ft_display(tab);
			if (ft_put_queens(tab, r, col + 1))
				return (1);
		}
		r++;
	}
	//tab[row][col] = 0;
	return (0);
}

#include <string.h>
int	ft_ten_queens_puzzle(void)
{
	int		map[10][10];
	int		i;
	int		j;
	int		k;
	int		l;
	int		count;

	count = 0;

	// k = 0;
	// while (k < 10)
	// {
	// 	l = 0;
	// 	while (l < 10)
	// 	{
	// 		map[k][l] = 0;
	// 		l++;
	// 	}
	// 	k++;
	// }
	// ft_put_queens(map, 2, 2);
	// ft_display(map);

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			//printf("i %d - j %d", i, j);
			// ft_put_queens(map, i, j);
			//printf("%d, ", ft_count_and_display(map, 0, 0));
			k = 0;
			while (k < 10)
			{
				l = 0;
				while (l < 10)
				{
					map[k][l] = 0;
					l++;
				}
				k++;
			}
			ft_put_queens(map, i, j);
			printf("Queens num : %d\n", ft_count_and_display(map, 0, 0));
			ft_display(map);
			if (ft_count_and_display(map, 0, 0) == 10)
			{
				ft_count_and_display(map, 1, 0);
				ft_count_and_display(map, 0, 1);
				count++;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int main()
{
	ft_ten_queens_puzzle();
}
