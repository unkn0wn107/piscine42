/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:52:33 by agaley            #+#    #+#             */
/*   Updated: 2022/07/21 14:52:41 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putcursor(int nbr, int size)
{
	if (size != 0)
		ft_putcursor(nbr / 16, size - 1);
	write(1, &"0123456789abcdef"[nbr % 16], 1);
}

void	ft_puthex(char c)
{
	write(1, &"0123456789abcdef"[c / 16], 1);
	write(1, &"0123456789abcdef"[c % 16], 1);
}

void	ft_printmem(char *ptr_c, int computedsize, int with_c)
{
	int		i;

	if (computedsize >= 16)
		computedsize = 16;
	if (with_c && computedsize != 0)
		write(1, " ", 1);
	i = 0;
	while (i < computedsize)
	{
		write(1, " ", 1);
		ft_puthex(*ptr_c);
		if (i == 7 && with_c)
			write(1, " ", 1);
		i++;
		ptr_c++;
	}
	while (i < 16 && computedsize != 0)
	{
		write(1, "   ", 3);
		if (i == 7)
			write(1, " ", 1);
		i++;
	}
}

void	ft_printchars(char *ptr_c, int computedsize)
{
	int		i;

	if (computedsize >= 16)
		computedsize = 16;
	if (computedsize != 0)
	{
		write(1, "  |", 3);
		i = 0;
		while (i < computedsize)
		{
			if (31 < *ptr_c)
				write(1, ptr_c, 1);
			else
				write(1, ".", 1);
			i++;
			ptr_c++;
		}
		write(1, "|", 1);
	}
}

int	ft_is_same_chunk(char *ptr_c, void *addr, int f)
{
	int		i;
	char	*ptr_cpy;

	ptr_cpy = (char *)addr;
	i = 0;
	while (i < 16)
	{
		if (*ptr_c != *ptr_cpy)
			return (0);
		ptr_cpy++;
		ptr_c++;
		i++;
	}
	if (!f)
	{
		write(1, "*", 1);
		write(1, "\n", 1);
	}
	return (1);
}

void	ft_print_memory(void *addr, long long int size, int with_c)
{
	int		i;
	int		f;

	f = 0;
	i = -1;
	while (++i <= size / 16)
	{
		if (i > 0)
			f = ft_is_same_chunk(&addr[i * 16], &addr[(i - 1) * 16], f);
		if (i > 0 && f)
			continue ;
		ft_putcursor(i * 16, 6 + with_c);
		ft_printmem(&addr[i * 16], size - 16 * i, with_c);
		if (with_c)
			ft_printchars(&addr[i * 16], size - 16 * i);
		if (size - 16 * i != 0)
			write(1, "\n", 1);
	}
	if (size % 16)
		ft_putcursor((i - 1) * 16 + size % 16, 6 + with_c);
	write(1, "\n", 1);
}
