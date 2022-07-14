/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:01:23 by agaley            #+#    #+#             */
/*   Updated: 2022/07/14 16:13:38 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char str[][25] = {"pareil 1", "pareil 2", "A\nBCDE", "abc\177deABCDE"};
	printf("%d : %s\n", ft_strncmp(str[0], str[1], 10), str[1]);
	printf("%d : %s\n", ft_strncmp(str[2], str[3], 10), str[3]);
	printf("------ Vraie strcmp ------\n");
	printf("%d : %s\n", strncmp(str[0], str[1], 10), str[1]);
	printf("%d : %s\n", strncmp(str[2], str[3], 10), str[3]);
}
