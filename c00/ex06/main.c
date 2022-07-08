/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:19:42 by agaley            #+#    #+#             */
/*   Updated: 2022/07/08 09:38:57 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
void ft_print_comb2();
void ft_putnum22(int i, int j, int with_comma);

int main()
{
	int i = 33;
	int j = 29;
	char rn = '\n';
	ft_putnum22(i, j, 1);
	ft_putnum22(j, i, 0);
	write(1, &rn, 1);
	write(1, &rn, 1);
	ft_print_comb2();
	return 0;
}
