/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   guess_row.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:57:44 by jmoutous          #+#    #+#             */
/*   Updated: 2022/07/16 18:49:56 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int main(int **tab)
{
	int y;
	int a;
	int b;
	int c;
	int d;
	int i;

	y = 1;
	while (y < 5)
	{
		a = tab[1][y];
		b = tab[2][y];
		c = tab[3][y];
		d = tab[4][y];
		if (a == -1)
		{
			a = 1;
			i = 0;
			while (a == b || a == c || a == d)
			{
				a = 1 + i;
				i++;
			}
		}
		if (b == -1)
		{
			b = 1;
			i = 0;
			while (b == a || b  == c || b == d)
			{
				b = 1 + i;
				i++;
			}
		}
		if (c == -1)
		{
			c = 1;
			i = 0;
			while (c == a || c == b || c == d)
			{
				c = 1 + i;
				i++;
			}
		}
		if (d == -1)
		{
			d = 1;
			i = 0;
			while (d == a || d == b || d == c)
			{
				d = 1 + i;
				i++;
			}
		}
		CHECK LINE
		y++;
	}
}
