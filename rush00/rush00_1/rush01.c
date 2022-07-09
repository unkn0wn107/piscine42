/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:01:15 by agaley            #+#    #+#             */
/*   Updated: 2022/07/09 09:58:53 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

// Affiche un tableau 2d en sortie
// L largeur, correspond a i, H hauteur, correspond a j
void	ft_print_2d_array(char **arr, int L, int H)
{
	int	l;
	int	h;

	l = 0;
	h = 0;
	while (h < H)
	{
		while (l < L)
		{
			ft_putchar(arr[h][l]);
			l++;
		}
		ft_putchar('\n');
		l = 0;
		h++;
	}
	ft_putchar('\n');
}

//void	rush(int i, int j)
