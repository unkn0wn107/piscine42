/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:19:42 by agaley            #+#    #+#             */
/*   Updated: 2022/07/11 15:13:04 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
void	ft_putnbr_pos(unsigned int nb);
void	ft_itodigits(int nbr, int *arr);
int		ft_are_digits_asc(int *arr);
void	ft_print_combn(int n);
int		ft_pow(int a, int n);
//void	ft_putnumn(int i, int n, int with_comma);

int main()
{
//	const char RN = '\n';
//	int i = 0;
//	int j = 89;
//	int arr[9];
//	char c;

//	ft_putnbr_pos(j);
//	write(1, &RN, 1);
//	ft_itodigits(j, arr);
//	while(i < 9)
//	{
//		c = arr[i] + '0';
//		write(1, &c, 1);
//		write(1, ", ", 2);
//		i++;
//	}
//	write(1, &RN, 1);
//	printf("%d", ft_are_digits_asc(arr));
//	write(1, &RN, 1);
	int	i = 1;
	while (i < 10)
	{
		ft_print_combn(i);
		i++;
	}
	//ft_print_combn(9);
//	write(1, &RN, 1);
	return 0;
}
