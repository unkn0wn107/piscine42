/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchenava <mchenava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:10:36 by mchenava          #+#    #+#             */
/*   Updated: 2022/07/27 16:16:59 by mchenava         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes.h"

/**
 * It checks if the first line of the file is valid
 * 
 * @param line the line to check
 * @param size the size of the line
 * 
 * @return the number of lines in the file.
 */
int	check_first_line(char *line, int size)
{
	int	i;
	int	j;

	i = 0;
	while (line[i] && line[i] >= '0' && line[i] <= '9' && i < size - 3)
		i++;
	if (i == 0)
		return (0);
	j = i;
	while (line[j] && line[j] >= ' ' && line[j] <= '~')
		j++;
	if (j - i != 3)
		return (0);
	return (1);
}

/**
 * It checks if all the lines in the string have the same length
 * 
 * @param lines the string containing the tetriminos
 * 
 * @return The length of the first line.
 */
int	check_lines_lenght(char *lines)
{
	int	i;
	int	len_ref_line;
	int	len_line;

	len_ref_line = 0;
	while (lines[len_ref_line] && lines[len_ref_line] != '\n')
		len_ref_line++;
	i = len_ref_line + 1;
	while (lines[i])
	{
		len_line = 0;
		while (lines[i] && lines[i] != '\n')
		{
			len_line++;
			i++;
		}
		if (len_line != len_ref_line)
			return (0);
		i++;
	}
	return (len_ref_line);
}

/**
 * It checks if a character is in a charset*/
/** 
 * @param content the content of the line
 * @param c the character to check
 * @param alloc_stack This is a pointer to the 
 * stack that holds all the memory allocated*/
/**
 * @return 1 if the char is in the charset 0 else.
 */
int	check_charset(char *content, char c, t_alloc_stack *alloc_stack)
{
	char	*charset;

	charset = get_charset_params(content, alloc_stack);
	if (charset == NULL)
		return (0);
	if (c == charset[0] || c == charset[1])
		return (1);
	return (0);
}

/**
 * It checks the content of the file
 * 
 * @param content the content of the file
 * @param alloc_stack the stack of allocated memory
 * 
 * @return 1 if the content is valid, 0 otherwise.
 */
int	check_content(char *content, t_alloc_stack *alloc_stack)
{
	int		i;
	int		count_lines;

	i = 0;
	while (content[i] && content[i] != '\n')
		i++;
	count_lines = 0;
	if (check_lines_lenght(&content[i + 1]) == 0)
		return (0);
	while (content[i])
	{
		if (content[i] == '\n' && content[i + 1] != '\0')
		{
			count_lines++;
			i++;
		}
		if (check_charset(content, content[i], alloc_stack) == 0
			&& content[i] != '\n')
			return (0);
		i++;
	}
	if (count_lines != get_nb_lines_param(content))
		return (0);
	return (1);
}

/**
 * It checks the first line of the map, then checks the rest of the map
 *
 * @param content the content of the file*/
/** @param alloc_stack This is a pointer to a t_alloc_stack struct.
 * This struct is used to keep track of*/
/** all the memory that is allocated in the program. 
 * This is used to free all the memory at the end of
 * the program.*/

/** @return the size of the first line of the map.
 */
int	check_all_map(char *content, t_alloc_stack *alloc_stack)
{
	char	*first_line;
	int		size_first_line;

	size_first_line = get_first_line_size(content);
	if (content == NULL)
		return (0);
	first_line = get_first_line(content, alloc_stack);
	if (first_line == NULL)
		return (0);
	if (check_first_line(first_line, size_first_line) == 0)
		return (0);
	if (check_content(content, alloc_stack) == 0)
		return (0);
	return (1);
}
