/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:31:38 by agaley            #+#    #+#             */
/*   Updated: 2022/07/20 22:34:28 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*arr;
	int	i;

	arr = (int *)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		arr[i] = (*f)(tab[i]);
		i++;
	}
	return (tab);
}
