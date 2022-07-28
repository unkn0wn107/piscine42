/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:20:36 by mchenava          #+#    #+#             */
/*   Updated: 2022/07/27 14:51:40 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes.h"

/**
 * The function ft_strchr() takes a string and a character as arguments
 * and returns a pointer to the
 * first occurrence of the character in the string
 * 
 * @param str The string to search.
 * @param c the character to search for
 * 
 * @return The address of the first occurence 
 * of the character c in the string str.
 */
char	*ft_strchr(char *str, char c)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}

/**
 * It returns the length of a string
 * 
 * @param str The string to be measured.
 * 
 * @return The length of the string.
 */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * Write a function that takes a string 
 * and a file descriptor and writes the string to the file
 * descriptor
 * 
 * @param str The string to be printed.
 * @param fd file descriptor
 */
void	ft_putstr(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}
