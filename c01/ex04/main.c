/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:37:33 by agaley            #+#    #+#             */
/*   Updated: 2022/07/07 16:05:47 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int a;
	int b;

	a = 10;
	b = 3;
	printf("a %d - b %d - ", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div %d - mod %d", a, b);
	return 0;
}
