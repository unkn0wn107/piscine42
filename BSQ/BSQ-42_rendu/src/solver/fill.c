/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:19:19 by agaley            #+#    #+#             */
/*   Updated: 2022/07/27 18:34:29 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes.h"

/**
 * Fill the solution parameters of a map
 * @param map a t_map to fill
 * @param row the row coordinate of the BSQ
 * @param col the column coordinate of the BSQ
 * @param size the size of the BSQ
 */
void	fill_map_solution(t_map *map, int row, int col, int size)
{
	map->bsqr = row;
	map->bsqc = col;
	map->bsqsize = size;
	map->intgrid[row][col] = -2;
}

/**
 * Fill the intgrid of a 1x1 or 2x2 map
 * @param map a t_map to fill with a prepared intgrid
 */
void	fill_intgrid_small_square(t_map *map)
{
	if (map->width == 1 && map->height == 1 && map->intgrid[0][0] == -42)
		fill_map_solution(map, 0, 0, 1);
	else if (map->width == 2 && map->height == 2)
	{
		if (map->intgrid[0][1] == 1)
			fill_map_solution(map, 0, 1, 1);
		else if (map->intgrid[1][0] == 1)
			fill_map_solution(map, 1, 0, 1);
		else if (map->intgrid[1][1] == 1)
			fill_map_solution(map, 1, 1, 1);
	}
}

/**
 * Fill the intgrid of a map with a 1-sized map
 * @param map a t_map to solve with a prepared intgrid
 */
void	fill_intgrid_small_rect(t_map *map)
{
	int	x;

	x = 0;
	while (x < map->height - 1 && map->width == 1 && map->height > 1)
	{
		if (map->intgrid[x][0] != 0)
		{
			fill_map_solution(map, x, 0, 1);
			return ;
		}
		x++;
	}
	while (x < map->width - 1 && map->width > 1 && map->height == 1)
	{
		if (map->intgrid[0][x] != 0)
		{
			fill_map_solution(map, 0, x, 1);
			return ;
		}
		x++;
	}
}

/**
 * Fill the intgrid of a map
 * @param map a t_map to solve with a prepared intgrid
 */
void	fill_intgrid(t_map *map)
{
	int	row;
	int	col;

	if (map->bsqsize <= 0 && (map->width != map->height))
		fill_intgrid_small_rect(map);
	else if (map->bsqsize <= 0 && map->width == map->height)
		fill_intgrid_small_square(map);
	else
	{
		row = map->bsqr;
		while (row < map->bsqsize + map->bsqr)
		{
			col = map->bsqc;
			while (col < map->bsqsize + map->bsqc)
			{
				map->intgrid[row][col] = -2;
				col++;
			}
			row++;
		}
	}
}
