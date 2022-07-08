/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:02:08 by agaley            #+#    #+#             */
/*   Updated: 2022/07/07 20:28:38 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	arr[] = {0,1,-22,3,1,-2541,5000};
	printf("tableau de base : "); 
	for (int i = 0; i < 6; i++)
	{
		printf("%d, ", arr[i]);
	}
	ft_sort_int_tab(arr, 6);
	printf("tableau apres tri : "); 
	for (int j = 0; j < 6; j++)
	{
		printf("%d, ", arr[j]);
	}
	return 0;
}
