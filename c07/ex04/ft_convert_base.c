/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:47:30 by agaley            #+#    #+#             */
/*   Updated: 2022/07/19 22:52:51 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_base_error(char *base);
int	ft_atoi_base(char *str, char *base_from);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_straddchar(char *dest, char c)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	dest[i] = c;
	dest[i + 1] = '\0';
	return (dest);
}

void	ft_addnbr_base(int nbr, char *base_to, char *str)
{
	int	btolen;
	int	pos;

	pos = 0;
	if (-2147483648 < nbr && nbr < 0)
	{
		ft_straddchar(str, '-');
		nbr *= -1;
	}
	btolen = 0;
	while (base_to[btolen])
		btolen++;
	if (0 <= nbr && nbr < btolen)
		ft_straddchar(str, base_to[nbr]);
	else if (nbr == -2147483648)
	{
		ft_addnbr_base(nbr / btolen, base_to, str);
		ft_straddchar(str, base_to[(nbr - 1) % btolen + 1]);
	}
	else
	{
		ft_addnbr_base(nbr / btolen, base_to, str);
		ft_straddchar(str, base_to[nbr % btolen]);
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		outlen;
	char	*out;

	if (ft_base_error(base_from) || ft_base_error(base_to))
		return ((void *)0);
	nb = ft_atoi_base(nbr, base_from);
	outlen = ft_strlen(nbr) * ft_strlen(base_from) / ft_strlen(base_to);
	out = (char *)malloc(outlen + 1);
	ft_addnbr_base(nb, base_to, out);
	return (out);
}
