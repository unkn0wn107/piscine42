/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_4th_4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:40:53 by jmoutous          #+#    #+#             */
/*   Updated: 2022/07/17 12:10:13 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int find_yn(int **tab, int dim, int n)
{
	int	x;
	int	y;
	int yn;

	x = 1;
	y = 1;
	yn = 0;
	while (yn == 0 && y < dim + 1)
	{
		while (x < dim + 1 && tab[x][y] != n)
		{
			x++;
		}
		if (tab[x][y] == n && x != dim + 1)
		{
			y++;
			x = 1;
		}
		else
			yn = y;
	}
	printf("find yn : %d\n", yn);
	return (yn);
}

int find_xn(int **tab, int dim, int n)
{
	int	x;
	int	y;
	int xn;

	x = 1;
	y = 1;
	xn = 0;
	while (xn == 0 && x < dim + 1)
	{
		while (y < dim + 1 && tab[x][y] != n)
			y++;
		if (tab[x][y] == n && y != dim + 1)
		{
			x++;
			y = 1;
		}
		else
			xn = x;
	}
	printf("find xn : %d\n", xn);
	return (xn);
}


// int	main()
// {
// 	int dim = 4;
// 	int **tab;
// 	tab = ft_get_restab("1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4", dim);
// 					//printf("%d", dim);
// 	ft_display_answer(tab, dim);
// 	// int i = 1;
// 	// int j;
// 	// while (i < dim + 1)
// 	// {
// 	// 	j = 1;
// 	// 	while (j < dim + 1)
// 	// 	{
// 	// 		ft_putchar(tab[i][j] + '0');
// 	// 		ft_putchar(' ');
// 	// 		j++;
// 	// 	}
// 	// 	ft_putchar('\n');
// 	// 	i++;
// 	// }
// 	// find_x4(tab);
// 	printf("xn %d - yn %d", find_xn(tab, dim, 2), find_yn(tab, dim, 2));
// 	// tab[find_x4(tab)][find_y4(tab)] = 4;
// 	// int i = 0;
// 	// int j;
// 	// while (i < 4 + 2)
// 	// {
// 	// 	j = 0;
// 	// 	while (j < 4 + 2)
// 	// 	{
// 	// 		printf("%d\t", tab[i][j]);
// 	// 		j++;
// 	// 	}
// 	// 	printf("\n\n");
// 	// 	i++;
// 	// }
// 	return (0);
// }
