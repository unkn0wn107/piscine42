/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:01:23 by agaley            #+#    #+#             */
/*   Updated: 2022/07/12 14:47:15 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char str[][25] = {"pareil", "pareil", "A\nBCDE", "abc\177deABCDE"};
	printf("%d : %s\n", ft_strcmp(str[0], str[1]), str[1]);
	printf("%d : %s\n", ft_strcmp(str[2], str[3]), str[3]);
	printf("------ Vraie strcmp ------\n");
	printf("%d : %s\n", strcmp(str[0], str[1]), str[1]);
	printf("%d : %s\n", strcmp(str[2], str[3]), str[3]);
}
