/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:43:20 by agaley            #+#    #+#             */
/*   Updated: 2022/07/27 00:44:44 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb == 1)
		return (1);
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
