/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:19:42 by agaley            #+#    #+#             */
/*   Updated: 2022/07/09 12:00:59 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
void	ft_putnbr_pos(unsigned int nb);
int		*ft_itodigits(*int nbr);
void	ft_print_combn(int n);
//void	ft_putnumn(int i, int n, int with_comma);

int main()
{
	const char RN = '\n';
	int i = 0;
	int j = 2998516;
	int arr[9];
	ft_putnbr_pos(j);
	write(1, &RN, 1);
	arr = ft_itodigits(j);
	while(i < 9)
	{
		write(1, arr[i] + '0', 1);
		i++;
	}
	//ft_putnum22(i, j, 1);
	//ft_putnum22(j, i, 0);
	write(1, &RN, 1);
	//ft_print_combn();
	return 0;
}
