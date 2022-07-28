/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_params.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchenava <mchenava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:47:09 by mchenava          #+#    #+#             */
/*   Updated: 2022/07/27 16:09:16 by mchenava         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

/**
 * It gets the number of lines from the first line of the file
 * 
 * @param first_line the first line of the file
 * 
 * @return The number of lines in the file.
 */
int	get_nb_lines_param(char *first_line)
{
	int		i;
	int		nb_lines;
	int		size;

	size = get_first_line_size(first_line);
	if (check_first_line(first_line, size) == 0)
		return (-1);
	i = 0;
	nb_lines = 0;
	while (first_line[i] && first_line[i] >= '0'
		&& first_line[i] <= '9' && i < size - 3)
	{
		nb_lines = nb_lines * 10 + (first_line[i] - '0');
		i++;
	}
	return (nb_lines);
}

/**
 * It takes a string, checks if it's a valid first line, 
 * and if it is, it returns the charset
 */
/** @param first_line the first line of the file
 *  @param alloc_stack This is a pointer to the memory allocation stack.
 * 
 *  @return a pointer to a string containing the charset
 */
char	*get_charset_params(char *first_line, t_alloc_stack *alloc_stack)
{
	int		i;
	int		j;
	char	*charset;
	int		size;

	size = get_first_line_size(first_line);
	charset = (char *)malloc_n_collect(alloc_stack, sizeof(char) * (3 + 1));
	if (check_first_line(first_line, size) == 0)
		return (NULL);
	i = 0;
	while (first_line[i] && first_line[i] >= '0'
		&& first_line[i] <= '9' && i < size - 3)
		i++;
	j = 0;
	while (first_line[i] && j < 3
		&& first_line[i] >= ' ' && first_line[i] <= '~')
	{	
		if (first_line[i] == charset[j - 1] && j > 0)
			return (NULL);
		charset[j] = first_line[i];
		i++;
		j++;
	}
	charset[j] = '\0';
	return (charset);
}
