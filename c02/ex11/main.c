/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:23:43 by agaley            #+#    #+#             */
/*   Updated: 2022/07/13 16:15:17 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	int	i = 0;
	char src[][70] = {"\1 \2 \3 \4 \5 \6 \7 \10 \11 \12 \13 \14 \15 \16 \17 \20 \21 \22 \23 \24 \25 \26 \27 \30 \31 \32 \33 \34 \35 \36 \37", "Null\0 terminated\0", "Plu\177s que\n la taille de destination", "/"};
	while (i < 4)
	{
		ft_putstr_non_printable(src[i]);
		write(1, "\n", 1);
		i++;
	}	
}
