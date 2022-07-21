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

void	ft_putaddr(long long int addr, int size)
{
	if (size != 0)
		ft_putaddr(addr / 16, size - 1);
	write(1, &"0123456789abcdef"[addr % 16], 1);
	if (size == 16)
		write(1, ": ", 2);
}

void	ft_puthex(char c)
{
	write(1, &"0123456789abcdef"[c / 16], 1);
	write(1, &"0123456789abcdef"[c % 16], 1);
}

void	ft_printmem(char *ptr_c, int size)
{
	int		i;

	if (size != 0)
		ft_putaddr((long long int)ptr_c, 16);
	i = 0;
	while (i < size)
	{
		ft_puthex(*ptr_c);
		if (i % 2 && i != 15)
			write(1, " ", 1);
		i++;
		ptr_c++;
	}
}

void	ft_printchars(char *ptr_c, int size)
{
	int		i;

	if (size != 0 && size < 16 && !(size % 2))
		write(1, "  ", 2);
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
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	char	*ptr_c;

	if (size == 0)
		return (addr);
	ptr_c = addr;
	i = 0;
	while (i <= size / 16)
	{
		if ((size - 16 * i) >= 16)
			ft_printmem(ptr_c, 16);
		else
			ft_printmem(ptr_c, size - 16 * i);
		if (size - 16 * i != 0)
			write(1, " ", 1);
		if ((size - 16 * i) >= 16)
			ft_printchars(ptr_c, 16);
		else
			ft_printchars(ptr_c, size - 16 * i);
		if (size - 16 * i != 0)
			write(1, "\n", 1);
		ptr_c += 16;
		i++;
	}
	return (addr);
}
