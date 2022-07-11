/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:11:02 by agaley            #+#    #+#             */
/*   Updated: 2022/07/12 00:46:13 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar_non_printable(char c)
{
	char	base[] = "0123456789abcdef";
	char	d;

	if (c <= 16)
	{
		d = base[(int)c];
		write(1, "\\0", 2);
		write(1, &d, 1);
	}
	else
	{
		ft_putchar_non_printable(c / 16);
		d = base[c % 16];
   		write(1, &d, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
    int     i;
	char	c;

    i = 0;
    while (str[i] != '\0')
    {
        c = str[i];
        if (c < 32 || c > 126)
            ft_putchar_non_printable(c);
		else
			write(1, &c, 1);
        i++;
    }
}
