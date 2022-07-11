/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:23:43 by agaley            #+#    #+#             */
/*   Updated: 2022/07/11 21:42:29 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	int	i = 0;
	char str[][25] = {"", "123456789", "abcde125ABCDE", "abcde'ABCDE", "1/"};
	while (i < 5)
	{
		printf("%d : %s\n", ft_str_is_numeric(str[i]), str[i]);
		i++;
	}
}
