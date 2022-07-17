/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_row.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:11:52 by jmoutous          #+#    #+#             */
/*   Updated: 2022/07/17 19:14:19 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	resolve_row_5(int **tab, int r);
void	resolve_row_3(int **tab, int r);

void	resolve_row(int **tab)
{
	int	r;

	r = 1;
	while (r < 5)
	{
		if (tab[r][0] + tab[r][5] == 5)
			resolve_row_5(tab, r);
		else if (tab[r][0] + tab[r][5] == 3)
			resolve_row_3(tab, r);
		if (tab[r][0] == 1)
			tab[r][1] = 4;
		if (tab[r][5] == 1)
			tab[r][4] = 4;
		r++;
	}
}

void	resolve_row_5(int **tab, int r)
{
	if (tab[r][0] == 4)
	{
		tab[r][1] = 1;
		tab[r][2] = 2;
		tab[r][3] = 3;
		tab[r][4] = 4;
	}
	if (tab[r][0] == 1)
	{
		tab[r][1] = 4;
		tab[r][2] = 3;
		tab[r][3] = 2;
		tab[r][4] = 1;
	}
	if (tab[r][0] == 3)
		tab[r][3] = 4;
	if (tab[r][0] == 2)
		tab[r][2] = 4;
}

void	resolve_row_3(int **tab, int r)
{
	if (tab[r][0] == 2)
	{
		tab[r][1] = 3;
		tab[r][4] = 4;
	}
	if (tab[r][0] == 1)
	{
		tab[r][1] = 4;
		tab[r][4] = 3;
	}
}
