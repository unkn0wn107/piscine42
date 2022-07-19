/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:43:46 by agaley            #+#    #+#             */
/*   Updated: 2022/07/19 19:22:37 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char *ft_strjoin(int size, char **strs, char *sep);

int main()
{
	char *strs[] = { "Je", "teste", "strjoin" };
	char *joined = ft_strjoin(2, strs, "/");
	printf("%s", joined);
}
