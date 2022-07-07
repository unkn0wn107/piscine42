/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:19:42 by agaley            #+#    #+#             */
/*   Updated: 2022/07/07 16:58:14 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strlen(char *str);

int main()
{
	char *str = "Super, ca marche vraiment tres bien meme !";
	int n = ft_strlen(str);
	printf("'%s' fait %d caracteres", str, n);
	return 0;
}
