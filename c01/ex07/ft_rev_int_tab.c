/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:10:54 by agaley            #+#    #+#             */
/*   Updated: 2022/07/07 18:09:58 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	middle;

	i = 0;
	if (size % 2)
		middle = size / 2;
	else
		middle = size / 2 - 1;
	while (i <= middle)
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}
