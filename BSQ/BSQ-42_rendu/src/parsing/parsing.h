/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:58:21 by mchenava          #+#    #+#             */
/*   Updated: 2022/07/27 18:33:34 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "../../includes.h"
# include "../solver/map.h"

/*----------------------read_first_line.c-------------------------------*/
int		get_first_line_size(char *filename);
char	*get_first_line(char *content, t_alloc_stack *alloc_stack);

/*----------------------read_file.c-------------------------------------*/
int		get_file_size(char *filename);
int		test_file(char *filename);
char	*read_file(char *filename, t_alloc_stack *alloc_stack);
char	*read_stdin(t_alloc_stack *alloc_stack);

/*----------------------get_params.c------------------------------------*/
int		get_nb_lines_param(char *first_line);
char	*get_charset_params(char *first_line, t_alloc_stack *alloc_stack);

/*----------------------check_map_file----------------------------------*/
int		check_all_map(char *content, t_alloc_stack *alloc_stack);
int		check_first_line(char *first_line, int size);

/*----------------------parsing.c---------------------------------------*/
char	**parse(char *filename, t_alloc_stack *alloc_stack);
char	**int_to_map(int **map_int, char **map_char, char *charset);
int		**map_to_int(char **map_str, char *charset,
			t_map *s_map, t_alloc_stack *alloc_stack);
void	display_map(char **map);
char	*dup_line(char *line_adrr, int index);
int		**prepare_map(int **map, t_map *s_map);

#endif