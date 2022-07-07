/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:37:33 by agaley            #+#    #+#             */
/*   Updated: 2022/07/07 15:56:33 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 3;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("a %d - b %d - div %d - mod %d ", a, b, div, mod);
	return 0;
}
