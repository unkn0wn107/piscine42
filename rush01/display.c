/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:28:13 by agaley            #+#    #+#             */
/*   Updated: 2022/07/17 22:51:12 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_display_error(void)
{
	ft_putstr("Error\n");
}

void	ft_display_answer(int **restab, int dim)
{
	int	i;
	int	j;

	i = 1;
	while (i < dim + 1)
	{
		j = 1;
		while (j < dim + 1)
		{
			ft_putchar(restab[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_display_restab(int **restab, int dim)
{
	int	i;
	int	j;

	i = 0;
	while (i < dim + 2)
	{
		j = 0;
		while (j < dim + 2)
		{
			ft_putchar(restab[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
