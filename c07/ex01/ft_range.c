/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:48:50 by agaley            #+#    #+#             */
/*   Updated: 2022/07/19 17:06:03 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*ints;
	int	i;

	if (min >= max)
		return ((int *)0);
	size = max - min;
	ints = (int *)malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		ints[i] = min;
		min++;
		i++;
	}
	return (ints);
}
