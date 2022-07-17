/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:42:47 by agaley            #+#    #+#             */
/*   Updated: 2022/07/16 20:42:49 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    ft_free_tab(int **tab, int dim)
{
    int i;

    i = 0;
    while (i < dim + 2)
    {
        free(tab[i]);
        i++;
    }
    free(tab);
}
