/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   how_many_4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:53:34 by jmoutous          #+#    #+#             */
/*   Updated: 2022/07/17 12:10:47 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// void	ft_display_answer(int **restab, int dim);
// int	**ft_get_restab(char *str, int dim);

int ft_how_many_n(int **tab, int dim, int n)
{
	int	row;
	int	col;
	int count_n;

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

// int	main()
// {
// 	int dim = 4;
// 	int **tab;
// 	tab = ft_get_restab("1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4", dim);
// 	tab[1][1] = 2;
// 	tab[2][2] = 2;
// 	tab[3][4] = 2;
// 	ft_display_answer(tab, dim);
// 	printf("%d", ft_how_many_n(tab, dim, 2));
// 	return (0);
// }
