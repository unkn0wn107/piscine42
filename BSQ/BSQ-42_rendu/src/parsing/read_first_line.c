/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_first_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:55:55 by mchenava          #+#    #+#             */
/*   Updated: 2022/07/26 07:49:50 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

/**
 * It reads the first line of a file and returns the size of that line
 * 
 * @param filename the name of the file to be read
 * 
 * @return The size of the first line of the file.
 */
int	get_first_line_size(char *content)
{
	int	i;

	i = 0;
	while (content[i] && content[i] != '\n')
		i++;
	return (i);
}

/**
 * It reads the first line of a file and returns it as a string
 * 
 * @param filename the name of the file to read
 * 
 * @return The first line of the file.
 */
char	*get_first_line(char *content, t_alloc_stack *alloc_stack)
{
	char	*line;
	int		i;
	int		size;

	size = get_first_line_size(content);
	line = (char *)malloc_n_collect(
			alloc_stack, sizeof(char) * (size) + 1);
	i = 0;
	while (content[i] && content[i] != '\n')
	{
		line[i] = content[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}
