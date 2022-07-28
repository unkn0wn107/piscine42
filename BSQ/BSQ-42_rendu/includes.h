/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:35:25 by agaley            #+#    #+#             */
/*   Updated: 2022/07/27 10:59:28 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H

# include <fcntl.h>			// open()
# include <unistd.h> 		// pour NULL
# include <sys/types.h>		// pour open()
# include <sys/stat.h>		// pour open()
# include <string.h>
# include <libgen.h>
# include <errno.h>
# include <stdio.h>			
# include <stdlib.h>		// pour malloc

# include "src/memory/allocated.h"
# include "src/implemented_ft/str.h"
# include "src/parsing/parsing.h"
# include "src/solver/map.h"

# define MAP_ERR "map error\n"
# define ALLOC_FAIL "allocating memory failed\n"

int	start_stdin(t_map map, t_alloc_stack *alloc_stack);
int	start_files(int argc, char **argv, t_map map, t_alloc_stack *alloc_stack);

# define READ_STDIN 16384

#endif
