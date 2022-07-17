/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_col.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:01:02 by jmoutous          #+#    #+#             */
/*   Updated: 2022/07/17 19:04:18 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	resolve_col_5(int **tab, int c);

void	resolve_col_3(int **tab, int c);

void	resolve_col(int **tab)
{
	int	c;

	c = 1;
	while (c < 5)
	{
		if (tab[0][c] + tab[5][c] == 5)
			resolve_col_5(tab, c);
		else if (tab[0][c] + tab[5][c] == 3)
			resolve_col_3(tab, c);
		if (tab[0][c] == 1)
			tab[1][c] = 4;
		if (tab[5][c] == 1)
			tab[4][c] = 4;
		c++;
	}
}

void	resolve_col_5(int **tab, int c)
{
	if (tab[0][c] == 4)
	{
		tab[1][c] = 1;
		tab[2][c] = 2;
		tab[3][c] = 3;
		tab[4][c] = 4;
	}
	if (tab[0][c] == 1)
	{
		tab[1][c] = 4;
		tab[2][c] = 3;
		tab[3][c] = 2;
		tab[4][c] = 1;
	}
	if (tab[0][c] == 3)
		tab[3][c] = 4;
	if (tab[0][c] == 2)
		tab[2][c] = 4;
}

void	resolve_col_3(int **tab, int c)
	{
	if (tab[0][c] == 2)
	{
		tab[1][c] = 3;
		tab[4][c] = 4;
	}
	if (tab[0][c] == 1)
	{
		tab[1][c] = 4;
		tab[4][c] = 3;
	}
}
