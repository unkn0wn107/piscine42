/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchenava <mchenava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:01:14 by marvin            #+#    #+#             */
/*   Updated: 2022/07/27 15:59:18 by mchenava         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

/**
 * retrun -1 or the filedescriptor of the file if it's valid
 * 
 * @param filename the name of the file to open
 * 
 * @return The file descriptor of the file.
 */
int	test_file(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	return (fd);
}

/**
 * It reads a file into a buffer
 * 
 * @param filename the name of the file to read
 * 
 * @return A pointer to a string.
 */
char	*read_file(char *filename, t_alloc_stack *alloc_stack)
{
	int		fd;
	int		file_size;
	char	*buffer;
	int		last_pos;

	file_size = get_file_size(filename);
	if (file_size == -1)
		return (NULL);
	fd = test_file(filename);
	buffer = (char *)malloc_n_collect(
			alloc_stack, sizeof(char) * (file_size + 1));
	last_pos = read(fd, buffer, file_size);
	close(fd);
	buffer[last_pos] = '\0';
	return (buffer);
}

/**
 * It opens a file, reads it, and returns the size of the file
 * 
 * @param filename the name of the file to be read
 * 
 * @return The size of the file.
 */
int	get_file_size(char *filename)
{
	int		fd;
	int		size;
	int		act_pos;
	char	buffer[1];

	fd = test_file(filename);
	if (fd == -1)
		return (-1);
	size = 0;
	act_pos = 1;
	while (act_pos != 0)
	{
		act_pos = read(fd, buffer, 1);
		size++;
	}
	close(fd);
	return (size);
}
