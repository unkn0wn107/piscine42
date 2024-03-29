/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:49:07 by agaley            #+#    #+#             */
/*   Updated: 2022/07/29 01:04:47 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	*ft_range(int min, int max);

int main()
{
    int i = 0;
    int *ints = ft_range(INT_MIN, INT_MAX);
    if (!ints)
        printf("null");
    else
    {
        while(i<40)
        {
            printf("%d, ", ints[i]);
            i++;
        }
    }
}