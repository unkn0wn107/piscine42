/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:50:28 by agaley            #+#    #+#             */
/*   Updated: 2022/07/18 19:56:55 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(char **map)
{
	int		r;
	int		c;

	r = 0;
	while (r < 10)
	{
		c = 0;
		while (c < 10)
		{
			write(1, &map[r][c], 1);
			write(1, " ", 1);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
}

int	ft_count_and_display(char **map, int disp_c, int disp_r)
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
			if (map[r][c] == 'q')
				count++;
			if (map[r][c] == 'q' && disp_c)
				pos = c + '0';
			if (map[r][c] == 'q' && disp_r)
				pos = r + '0';
			if (map[r][c] == 'q' && (disp_r || disp_c))
				write(1, &pos, 1);
			c++;
		}
		r++;
	}
	if (disp_r && disp_c)
		write(1, "\n", 1);
	return (count);
}

int	ft_queen_pos_ok(char **tab, int row, int col)
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
		if (x != row && tab[x][col] == 'q')
			return (0);
		if (x != col && tab[row][x] == 'q')
			return (0);
		if (rdiagp < 10 && cdiagp < 10 && tab[rdiagp][cdiagp] == 'q')
			return (0);
		if (rdiagm >= 0 && cdiagm >= 0 && tab[rdiagm][rdiagp] == 'q')
			return (0);
	}
	return (1);
}

int	ft_put_queens(char **tab, int row, int col)
{
	if (row == 9 && col == 10)
		return (1);
	else if (col == 10)
	{
		row++;
		col = 0;
	}
	if (tab[row][col] == 'q')
		return	(ft_put_queens(tab, row, col + 1));
	else if (ft_queen_pos_ok(tab, row, col))
	{	
		ft_display(tab);
		tab[row][col] = 'q';
		if (ft_put_queens(tab, row, col + 1))
		   return (1);
	}
	return (0);
}
#include <stdio.h>
int	ft_ten_queens_puzzle(void)
{
	char	*map[10];
	int		i;
	int		j;
	int		count;

	count = 0;
	i = 0;
	while (i < 10)
	{
		map[i] = "oooooooooo";
		i++;
	}
	ft_display(map);
	//ft_count_and_display(map, 0, 1);
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			//printf("i %d - j %d", i, j);
			ft_put_queens(map, i, j);
			//printf("%d, ", ft_count_and_display(map, 0, 0));
			if (ft_put_queens(map, i, j) && ft_count_and_display(map, 0, 0) == 10)
			{
				ft_count_and_display(map, 1, 0);
				ft_count_and_display(map, 0, 1);
				count++;
			}
			j++;
		}
		i++;
	}
	return (count);
}

int main()
{
	ft_ten_queens_puzzle();
}
