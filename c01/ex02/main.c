/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:37:33 by agaley            #+#    #+#             */
/*   Updated: 2022/07/07 15:47:23 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_swap(int *a, int *b);

int main()
{
	int a;
	int b;
	a = 1;
	b = 2;
	printf("avant swap : a %d - b %d", a, b);
	ft_swap(&a, &b);
	printf("apres swap : a %d - b %d", a, b);
	return 0;
}
