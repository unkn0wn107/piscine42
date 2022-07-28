/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchenava <mchenava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:40:51 by agaley            #+#    #+#             */
/*   Updated: 2022/07/27 15:59:18 by mchenava         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

typedef struct s_map
{
	char	*charset;
	char	empty;
	char	obstacle;
	char	full;
	int		width;
	int		height;
	char	**chargrid;
	int		**intgrid;
	int		bsqsize;
	int		bsqr;
	int		bsqc;
}t_map;

t_map	load_map(char *content, t_alloc_stack *alloc_stack);
void	solve_map(t_map	*map);
void	fill_intgrid(t_map *map);
void	fill_intgrid_small_square(t_map *map);
void	fill_intgrid_small_rect(t_map *map);
void	fill_map_solution(t_map *map, int row, int col, int size);

#endif