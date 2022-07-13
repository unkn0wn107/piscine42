/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:11:02 by agaley            #+#    #+#             */
/*   Updated: 2022/07/12 18:23:07 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_non_printable(char c, int with_zero)
{
	char	base[16];
	char	d;

	base = "0123456789abcdef";
	if (c <= 16)
	{
		d = base[(int)c];
		write(1, "\\", 1);
		if (with_zero)
			write(1, "0", 1);
		write(1, &d, 1);
	}
	else
	{
		ft_putchar_non_printable(c / 16, 0);
		d = base[c % 16];
		write(1, &d, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < 32 || c == 127)
			ft_putchar_non_printable(c, 1);
		else
			write(1, &c, 1);
		i++;
	}
}
