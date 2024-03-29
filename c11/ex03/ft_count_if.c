/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:46:49 by agaley            #+#    #+#             */
/*   Updated: 2022/07/20 22:50:35 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	c;

	c = 0;
	while (i < length)
	{
		if ((*f)(tab[i]))
			c++;
		i++;
	}
	return (c);
}
