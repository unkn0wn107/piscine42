/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:05:06 by agaley            #+#    #+#             */
/*   Updated: 2022/07/15 11:52:25 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>

void	ft_putchar(char c);
int		ft_base_error(char *base);
void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	printf("%d\n", ft_base_error("01234567"));
	printf("%d\n", ft_base_error("0123456789AB"));
	printf("%d\n", ft_base_error(""));
	printf("%d\n", ft_base_error("0"));
	printf("%d\n", ft_base_error("01"));
	printf("%d\n", ft_base_error("0123452"));
	printf("%d\n", ft_base_error("-01234567"));
	printf("%d\n", ft_base_error("0123+4567"));

	// 127 en base octale puis hexa
	ft_putnbr_base(127, "01234567");
	ft_putchar('\n');
	ft_putnbr_base(0x7f, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(INT_MIN, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(6789, "whatDeFuck");
	ft_putchar('\n');
	ft_putnbr_base(INT_MIN, "0123456789");
	ft_putchar('\n');
	printf("%d", INT_MIN);
	printf("\n%x", INT_MIN);
}
