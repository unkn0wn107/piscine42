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

void	ft_printmem(char *ptr_c, int size, int with_c)
{
	int		i;

	if (with_c && size != 0)
		write(1, " ", 1);
	i = 0;
	while (i < size)
	{
		write(1, " ", 1);
		ft_puthex(*ptr_c);
		if (i == 7 && with_c)
			write(1, " ", 1);
		i++;
		ptr_c++;
	}
	while (i < 16 && size != 0)
	{
		write(1, "   ", 3);
		if (i == 7)
			write(1, " ", 1);
		i++;
	}
}

void	ft_printchars(char *ptr_c, int size)
{
	int		i;

	if (size != 0)
	{
		write(1, "  |", 3);
		i = 0;
		while (i < size)
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

void	ft_print_memory(void *addr, long long int size, int with_c)
{
	int		i;
	char	*ptr_c;

	if (size == 0)
		return (void)0;
	ptr_c = addr;
	i = -1;
	while (++i <= size / 16)
	{
		ft_putcursor(i * 16, 6 + with_c);
		if ((size - 16 * i) >= 16)
			ft_printmem(ptr_c, 16, with_c);
		else
			ft_printmem(ptr_c, size - 16 * i, with_c);
		if ((size - 16 * i) >= 16 && with_c)
			ft_printchars(ptr_c, 16);
		else if (with_c)
			ft_printchars(ptr_c, size - 16 * i);
		if (size - 16 * i != 0)
			write(1, "\n", 1);
		ptr_c += 16;
	}
	if (size % 16)
		ft_putcursor((i - 1) * 16 + size % 16, 6 + with_c);
	write(1, "\n", 1);
}

int	main()
{
	char	str[] = "Imprimons une memoire\0composee\tde\tcaracteres non imprimables";
	ft_print_memory(str, 32, 1);
}
