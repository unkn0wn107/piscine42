/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:23:43 by agaley            #+#    #+#             */
/*   Updated: 2022/07/12 11:58:47 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	int	i = 0;
	char src[][35] = {"A\nBC", "Null\17 terminated\0", "Plu\177s que\n la taille de destination", "/"};
	while (i < 4)
	{
		ft_putstr_non_printable(src[i]);
		write(1, "\n", 1);
		i++;
	}	
}
