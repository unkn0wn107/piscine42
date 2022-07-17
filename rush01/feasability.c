/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   feasability.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:17:30 by jmoutous          #+#    #+#             */
/*   Updated: 2022/07/16 13:46:59 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// int	**ft_get_restab(char *str, int dim);

int ft_is_feasable(int **tab, int dim)
{
	int row;
	int col;

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

// int	main()
// {
// 	int dim = 4;
// 	int **tab;
// 	tab = ft_get_restab("4 3 2 1 1 2 2 1 4 3 2 1 1 2 2 2", dim);
// 	//Affiche le tableau intermediaire
// 	int i = 0;
// 	int j;
// 	while (i < dim + 2)
// 	{
// 		j = 0;
// 		while (j < dim + 2)
// 		{
// 			printf("%d\t", tab[i][j]);
// 			j++;
// 		}
// 		printf("\n\n");
// 		i++;
// 	}
// 	printf("%d", ft_is_feasable(tab, dim));
// 	return (0);
// }