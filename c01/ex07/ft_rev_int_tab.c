/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:10:54 by agaley            #+#    #+#             */
/*   Updated: 2022/07/07 17:57:22 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	rev_tab[size];
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		rev_tab[i] = tab[size - i - 1];
		i++;
	}
	j = 0;
	while (j < size)
	{
		tab[j] = rev_tab[j];
		j++;
	}
}
