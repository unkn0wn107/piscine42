/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:19:27 by mchenava          #+#    #+#             */
/*   Updated: 2022/07/27 18:40:50 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes.h"

/**
 * It takes a string, checks if it's a valid map,
 * and returns a 2D array of strings
 * 
 * @param content the content of the file
 * @param alloc_stack This is a pointer to a t_alloc_stack struct. 
 * This struct is used to keep track of
 * all the memory that is allocated in the program. 
 * This is used to free all the memory at the end of
 * the program.
 * 
 * @return A pointer to a pointer to a char.
 */
char	**parse(char *content, t_alloc_stack *alloc_stack)
{
	char	**map;
	int		i;

	if (check_all_map(content, alloc_stack) == 0)
	{
		ft_put_error(MAP_ERR);
		return (NULL);
	}
	i = 0;
	while (content[i] && content[i] != '\n')
		i++;
	i++;
	map = ft_split(&content[i], "\n", alloc_stack);
	return (map);
}

/**
 * It takes a map in string form,
 * and converts it to an integer array
 *
 * @param map_str the map in string format
 * @param charset the string containing the characters that are used in the map.
 * @param s_map a pointer to a t_map structure,
 * which contains the width and height of the map.
 * @param alloc_stack a pointer to a t_alloc_stack struct,
 * which is a linked list of
 *
 * @return A pointer to a pointer to an int.
 */
int	**map_to_int(char **map_str, char *charset,
	t_map *s_map, t_alloc_stack *alloc_stack)
{
	int	i;
	int	j;
	int	cursor;
	int	**map;

	map = malloc_n_collect(alloc_stack, sizeof(int *) * s_map->height);
	i = 0;
	while (map_str[i])
	{
		map[i] = malloc_n_collect(alloc_stack, sizeof(int) * s_map->width);
		j = 0;
		while (map_str[i][j])
		{
			cursor = 0;
			while (map_str[i][j] != charset[cursor])
				cursor++;
			if (cursor == 0)
				map[i][j] = -42;
			else if (cursor == 1)
				map[i][j] = 0;
			j++;
		}
		i++;
	}
	return (map);
}

/**
 * It takes a map of integers and a map of characters,
 * and returns a map of characters with the
 * characters replaced by the characters in the charset
 * 
 * @param map_int the map in int form
 * @param map_char the map in char format
 * @param charset the string containing the characters to use for the map
 * 
 * @return The map_char is being returned.
 */
char	**int_to_map(int **map_int, char **map_char, char *charset)
{
	int	i;
	int	j;

	i = 0;
	while (map_char[i])
	{
		j = 0;
		while (map_char[i][j])
		{
			if (map_int[i][j] == -2)
				map_char[i][j] = charset[2];
			j++;
		}
		i++;
	}
	return (map_char);
}

/**
 * It checks the edges of the map and if it finds a non-zero value,
 * it sets it to 1
 */
/** @param map the map that we're going to be working with
 * @param s_map a struct that contains the map's height and width
 * 
 * @return the map.
 */
int	**prepare_map(int **map, t_map *s_map)
{
	int	i;
	int	j;

	i = 0;
	while (i < s_map->height)
	{
		j = 0;
		while (j < s_map->width)
		{
			if ((j == s_map->width - 1 || i == s_map->height - 1)
				&& s_map->width > 1 && s_map->height > 1
				&& map[i][j] != 0)
				map[i][j] = 1;
			j++;
		}
		i++;
	}
	return (map);
}

/**
 * It displays the map
 * 
 * @param map The map that you want to display.
 */
void	display_map(char **map)
{
	int		i;

	i = 0;
	while (map[i] != NULL)
	{
		ft_putstr(map[i], STDOUT);
		ft_putstr("\n", STDOUT);
		i++;
	}
}
