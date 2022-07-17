/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conditions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:36:26 by agaley            #+#    #+#             */
/*   Updated: 2022/07/17 19:36:29 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#define N 4

int ft_check_conditions_left(int **tab, int val, int r, int c)
{
	int col;
	int max;
	int count;

	max = 0;
	col = 1;
	count = 0;
	while (col < N + 1 && max != N)
	{
		if (col == c && val > max)
		{
			max = val;
			count++;
		}
		else if (tab[r][col] > max)
		{
			max = tab[r][col];
			count++;
		}
		// printf("col %d - max %d - count %d - tab %d //// ", col, max, count, tab[r][col]);
		if (count > tab[r][0])
			return (0);
		col++;
	}
	if (count <= tab[r][0])
		return (1);
	else
		return (0);
}

int ft_check_conditions_right(int **tab, int val, int r, int c)
{
	int col;
	int max;
	int count;

	max = 0;
	col = N;
	count = 0;
	while (col > 0 && max !=4)
	{
		if (col == c && val > max)
		{
			max = val;
			count++;
		}
		else if (tab[r][col] > max)
		{
			max = tab[r][col];
			count++;
		}
		// printf("col %d - max %d - count %d - tab %d //// ", col, max, count, tab[r][col]);
		if (count > tab[r][N + 1])
			return (0);
		col--;
	}
	if (count <= tab[r][N + 1])
		return (1);
	else
		return (0);
}

int ft_check_conditions_down(int **tab, int val, int r, int c)
{
	int row;
	int max;
	int count;

	max = 0;
	row = 1;
	count = 0;
	while (row < N + 1 && max != N)
	{
		if (row == r && val > max)
		{
			max = val;
			count++;
		}
		else if (tab[row][c] > max)
		{
			max = tab[row][c];
			count++;
		}
		if (count > tab[0][c])
			return (0);
		row++;
	}
	if (count <= tab[0][c])
		return (1);
	else
		return (0);
}

int ft_check_conditions_up(int **tab, int val, int r, int c)
{
	int row;
	int max;
	int count;

	max = 0;
	row = N;
	count = 0;
	while (row > 0 && max != N)
	{
		if (row == r && val > max)
		{
			max = val;
			count++;
		}
		else if (tab[row][c] > max)
		{
			max = tab[row][c];
			count++;
		}
		if (count > tab[N + 1][c])
			return (0);
		row--;
	}
	if (count <= tab[N + 1][c])
		return (1);
	else
		return (0);
}

int ft_check_conditions(int **tab, int val, int row, int col)
{
	printf("val %d - row %d - col %d\n", val, row, col);
	printf("left %d - ", ft_check_conditions_left(tab, val, row, col));
	printf("right %d - ", ft_check_conditions_right(tab, val, row, col));
	printf("down %d - ", ft_check_conditions_down(tab, val, row, col));
	printf("up %d\n", ft_check_conditions_up(tab, val, row, col));
	return (ft_check_conditions_left(tab, val, row, col)
		&& ft_check_conditions_right(tab, val, row, col)
		&& ft_check_conditions_down(tab, val, row, col)
		&& ft_check_conditions_up(tab, val, row, col));
}

// void	ft_display_answer(int **restab, int dim);
// int	    **ft_get_restab(char *str, int dim);

// int	main()
// {
// 	int dim = 4;
// 	int **tab;
// 	tab = ft_get_restab("4 3 2 1 1 2 2 2 4 4 4 2 2 2 2 2", dim);
// 	tab[1][1] = 3;
// 	tab[1][2] = 2;
// 	tab[1][3] = 1;
// 	tab[1][4] = 4;
// 	tab[2][1] = 3;
// 	tab[2][3] = 2;
// 	tab[3][1] = 1;
// 	tab[3][2] = 3;
// 	tab[4][1] = 1;
//     tab[4][2] = 2;
// 	    	// Affiche le tableau intermediaire
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
// 	printf("%d\n", ft_check_conditions_right(tab, 4, 2, 2));
//     printf("%d\n", ft_check_conditions_right(tab, 1, 2, 2));

// 	printf("%d\n", ft_check_conditions_right(tab, 4, 2, 4));
//     printf("%d\n", ft_check_conditions_right(tab, 1, 2, 4));

//     printf("%d\n", ft_check_conditions_right(tab, 4, 3, 3));
//     printf("%d\n", ft_check_conditions_right(tab, 2, 3, 3));

//     printf("%d\n", ft_check_conditions_right(tab, 4, 3, 4));
//     printf("%d\n", ft_check_conditions_right(tab, 2, 3, 4));

//     printf("%d\n", ft_check_conditions_right(tab, 2, 4, 3));
//     printf("%d\n", ft_check_conditions_right(tab, 3, 4, 3));

//     printf("%d\n", ft_check_conditions_right(tab, 3, 4, 4));
//     printf("%d\n", ft_check_conditions_right(tab, 4, 4, 4));
// 	return (0);
// }
