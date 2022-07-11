/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:23:43 by agaley            #+#    #+#             */
/*   Updated: 2022/07/12 00:46:15 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	int	i = 0;
	char src[][35] = {"A\nBC", "Null\17 terminated\0", "Plus que la taille de destination", "/"};
	while (i < 4)
	{
		ft_putstr_non_printable(src[i]);
		i++;
	}	
}
