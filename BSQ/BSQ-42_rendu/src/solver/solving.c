/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solving.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 01:04:27 by agaley            #+#    #+#             */
/*   Updated: 2022/07/27 18:39:43 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes.h"
#include <stdio.h>

/**
 * Load the map from a string to a t_map structure
 * @param content the content of the map
 * @param alloc_stack the stack of allocated memory
 * 
 * @return corresponding t_map
 */
t_map	load_map(char *content, t_alloc_stack *alloc_stack)
{
	t_map	map;
	char	*line;

	map.chargrid = NULL;
	line = get_first_line(content, alloc_stack);
	if (!line)
		return (map);
	map.bsqsize = -1;
	map.chargrid = parse(content, alloc_stack);
	if (!map.chargrid)
		return (map);
	display_map(map.chargrid);
	map.charset = get_charset_params(line, alloc_stack);
	map.height = get_nb_lines_param(line);
	map.width = ft_strlen(map.chargrid[0]);
	map.intgrid = map_to_int(map.chargrid, map.charset, &map, alloc_stack);
	map.intgrid = prepare_map(map.intgrid, &map);
	map.empty = map.charset[0];
	map.obstacle = map.charset[1];
	map.full = map.charset[2];
	return (map);
}

/**
 * Find the min of 3 integers
 * @param i first integer to check
 * @param j second integer to check
 * @param k third integer to check
 * 
 * @return the minimum integer
 */
int	ft_min3(int i, int j, int k)
{
	if (i < j && i < k)
		return (i);
	else if (j < i && j < k)
		return (j);
	return (k);
}

/**
 * Solve a map and call the intgrid filler
 * @param map a t_map to solve with a prepared intgrid
 */
void	solve_map(t_map	*map)
{
	int	row;
	int	col;

	row = map->height - 1;
	while (row >= 0)
	{
		col = map->width - 1;
		while (col >= 0)
		{
			if (map->intgrid[row][col] == -42)
				map->intgrid[row][col] = 1 + ft_min3(map->intgrid[row + 1][col],
						map->intgrid[row][col + 1],
						map->intgrid[row + 1][col + 1]);
			if (map->intgrid[row][col] >= map->bsqsize)
			{
				map->bsqsize = map->intgrid[row][col];
				map->bsqr = row;
				map->bsqc = col;
			}
			col--;
		}
		row--;
	}
	fill_intgrid(map);
}
