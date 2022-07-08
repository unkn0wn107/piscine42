/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:19:42 by agaley            #+#    #+#             */
/*   Updated: 2022/07/08 11:02:25 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
void ft_putnbr(int nb);

int main()
{
	char rn = '\n';
	ft_putnbr(42);
	write(1, &rn, 1);
	ft_putnbr(INT_MAX);
	write(1, &rn, 1);
	ft_putnbr(INT_MIN);
	//printf("%d", INT_MIN);
	return 0;
}
