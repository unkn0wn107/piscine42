/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchenava <mchenava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:20:55 by mchenava          #+#    #+#             */
/*   Updated: 2022/07/26 03:58:02 by mchenava         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

# include "../../includes.h"

# define STDERR	2
# define STDOUT	1
# define STDIN 	0

char	*ft_strchr(char *str, char c);
void	ft_putstr(char *str, int fd);
int		ft_strlen(char *str);
void	ft_put_error(char *error);
char	**ft_split(char *str, char *charset, t_alloc_stack *alloc_stack);

#endif
