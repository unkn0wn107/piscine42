/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:49:07 by agaley            #+#    #+#             */
/*   Updated: 2022/07/29 02:30:32 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_utlimate_range(int **range, int min, int max);

int	*ft_utlimate_range(int min, int max);

int main()
{
    int i = 0;
    int *ints = ft_utlimate_range(INT_MIN, INT_MAX);
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
