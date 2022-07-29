/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:43:46 by agaley            #+#    #+#             */
/*   Updated: 2022/07/28 23:14:54 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strjoin(int size, char **strs, char *sep);

int main()
{
	char *strs[3] = { "Je", "teste", "strjoin" };
	char *joined = ft_strjoin(2, strs, "/");
	printf("%s", joined);
}
