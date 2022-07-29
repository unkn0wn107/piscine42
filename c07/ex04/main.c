/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 22:40:48 by agaley            #+#    #+#             */
/*   Updated: 2022/07/29 04:23:27 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	printf("%s\n", ft_convert_base("127", "01234567", "0123456789"));
	write(1, "\n", 1);
	printf("%s\n", ft_convert_base("0x7f", "0123456789ABCDEF", "0123456789"));
	write(1, "\n", 1);
	printf("%s\n", ft_convert_base("-651465846135163416", "0123456789", "0123456789ABCDEF"));
	write(1, "\n", 1);
	printf("%s\n", ft_convert_base("6789", "0123456789", "whatDeFuck"));
	write(1, "\n", 1);
	printf("%s\n", ft_convert_base("548970", "0123456789", "a123456789"));
	write(1, "\n", 1);
	printf("%s\n", ft_convert_base("135435642313165564546465", "0123456789", "0123456789"));
	write(1, "\n", 1);
}
