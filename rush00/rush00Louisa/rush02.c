/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 08:58:29 by lboudjem          #+#    #+#             */
/*   Updated: 2022/07/09 10:14:08 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	w;
	int	h;

	h = 0;
	while (h < y)
	{
		w = 0;
		while (w < x)
		{
			if (h == 0 && (w == 0 || w == x - 1))
				ft_putchar('A');
			else if (h == y - 1 && (w == 0 || w == x - 1))
				ft_putchar('C');
			else if ((w == 0 || w == x - 1) || (h == 0 || h == y - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			w++;
		}
		ft_putchar('\n');
		h++;
	}
}
