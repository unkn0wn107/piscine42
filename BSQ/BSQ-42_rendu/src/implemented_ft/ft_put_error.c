/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:18:27 by mchenava          #+#    #+#             */
/*   Updated: 2022/07/27 14:36:15 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/**
 * Ft_put_error() takes a string as an argument 
 * and prints it to the standard error output
 * 
 * @param error The error message to be displayed.
 */
void	ft_put_error(char *error)
{
	ft_putstr(error, STDERR);
}
