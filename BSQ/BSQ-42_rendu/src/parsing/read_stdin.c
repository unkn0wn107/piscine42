/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchenava <mchenava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 04:15:47 by mchenava          #+#    #+#             */
/*   Updated: 2022/07/27 16:17:02 by mchenava         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes.h"

/**
 * It reads the first line that contain the params of the map.
 * 
 * @param alloc_stack a pointer to the t_alloc_stack 
 * struct that contains the list of allocated memory.
 * 
 * @return A pointer to the first line of the file.
 */
char	*read_first_line(t_alloc_stack *alloc_stack)
{
	int		last_pos;
	int		boolean;
	char	*line;

	ft_putstr("write the first line and press [ENTER]: \n", 1);
	line = malloc_n_collect(alloc_stack, sizeof(char) * (READ_STDIN + 1));
	boolean = 1;
	last_pos = read(STDIN_FILENO, line, READ_STDIN);
	line[last_pos] = '\0';
	return (line);
}

/**
 * It takes a string and adds it to the end of another string
 * 
 * @param buffer This is the buffer that we're going to fill with the line.
 * @param line the line that was read from the file
 * 
 * @return The buffer is being returned.
 */
char	*fill_buffer(char *buffer, char *line)
{
	int		j;
	int		i;

	j = 0;
	i = 0;
	while (buffer[j] != '\0')
		j++;
	while (line[i] != '\0')
	{
		buffer[j] = line[i];
		j++;
		i++;
	}
	buffer[j] = '\0';
	return (buffer);
}

/**
 * It reads the first line of the input,
 * then reads the rest of the input and returns it
 * 
 * @param alloc_stack a pointer to the stack of allocated memory.
 * 
 * @return A string containing the lines of the file.
 */
char	*read_stdin(t_alloc_stack *alloc_stack)
{
	char	*line;
	char	*buffer;
	char	*first_line;
	int		nb_lines;

	first_line = read_first_line(alloc_stack);
	if (!first_line)
		return (NULL);
	nb_lines = get_nb_lines_param(first_line);
	if (nb_lines == -1)
		return (NULL);
	buffer = malloc_n_collect(alloc_stack, sizeof(char) * (READ_STDIN + 1));
	buffer = fill_buffer(buffer, first_line);
	line = malloc_n_collect(alloc_stack, sizeof(char) * (READ_STDIN + 1));
	ft_putstr(
		"write the next lines and press [ENTER] between each lines : \n", 1);
	while (nb_lines > 0)
	{
		read(STDIN_FILENO, line, READ_STDIN);
		buffer = fill_buffer(buffer, line);
		nb_lines--;
	}
	return (buffer);
}
