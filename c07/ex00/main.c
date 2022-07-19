/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:12:17 by agaley            #+#    #+#             */
/*   Updated: 2022/07/19 16:48:03 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strdup(char *src);

int main()
{
	printf("%s\n", ft_strdup("Ceci est une chaine a copier"));
	printf("%s\n", strdup("Ceci est une chaine a copier"));
}
