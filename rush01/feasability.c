/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   feasability.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:17:30 by jmoutous          #+#    #+#             */
/*   Updated: 2022/07/17 23:25:21 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_feasable(int **tab, int dim)
{
	int	row;
	int	col;

	row = 1;
	col = 1;
	while (col < dim + 1)
	{
		if (tab[0][col] + tab[dim + 1][col] > dim + 1
			|| tab[0][col] + tab[dim + 1][col] == 2)
			return (0);
		col++;
	}
	while (row < dim + 1)
	{
		if (tab[row][0] + tab[row][dim + 1] > dim + 1
			|| tab[row][0] + tab[row][dim + 1] == 2)
			return (0);
		row++;
	}
	return (1);
}
