/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kamehameha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:22:30 by agaley            #+#    #+#             */
/*   Updated: 2022/07/17 19:36:40 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		ft_count_params(char *str);
void	ft_display_error(void);
int		**ft_get_restab(char *str, int dim);
int		ft_is_feasable(int **tab, int dim);
int		**ft_pre_solve(int **tab, int dim);
int		ft_solve(int **tab, int row, int col);
void	ft_display_answer(int **restab, int dim);
void	ft_free_tab(int **tab, int dim);

int	main(int argc, char *argv[])
{
	int	dim;
	int	**tab;
	int	**filled_tab;

	if (argc != 2 || !argv[1][0] || ft_count_params(argv[1]) == -1
		|| ft_count_params(argv[1]) % 4 != 0
		|| ft_count_params(argv[1]) != 16)
	{
		ft_display_error();
		return (1);
	}
	dim = ft_count_params(argv[1]) / 4;
	tab = ft_get_restab(argv[1], dim);
	if (!tab || !ft_is_feasable(tab, dim))
	{
		ft_display_error();
		return (1);
	}
	filled_tab = ft_pre_solve(tab, dim);
	ft_free_tab(tab, dim);
	ft_solve(filled_tab, 1, 1);
	ft_display_answer(filled_tab, dim);
	ft_free_tab(filled_tab, dim);
	return (0);
}
