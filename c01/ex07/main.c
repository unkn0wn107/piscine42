/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:02:08 by agaley            #+#    #+#             */
/*   Updated: 2022/07/07 17:45:44 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	arr[] = {0,1,2,3,4,5};
	printf("tableau de base : "); 
	for (int i = 0; i < 6; i++)
	{
		printf("%d, ", arr[i]);
	}
	ft_rev_int_tab(arr, 6);
	printf("tableau apres inversion : "); 
	for (int j = 0; j < 6; j++)
	{
		printf("%d, ", arr[j]);
	}
	return 0;
}
