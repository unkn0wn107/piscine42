/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:28:57 by agaley            #+#    #+#             */
/*   Updated: 2022/07/14 17:06:42 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_error(char *base)
{
	int	i;
	int	j;

	if (!base[0] || !base[1])
		return (1);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[j] == '+')
			return (1);
		while (base[j])
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_char_pos_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_find_nbr_end(char *str, char *base)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '-' || str[i] == '+'))
		i++;
	while (str[i] && ft_char_pos_in_base(str[i], base) != -1)
		i++;
	return (i - 1);
}

int	ft_get_sign(char *str)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	baselen;
	int	result;
	int	mult;

	if (ft_base_error(base))
		return (0);
	baselen = 0;
	while (base[baselen])
		baselen++;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '-' || str[i] == '+'))
		i++;
	j = ft_find_nbr_end(str, base);
	mult = 1;
	result = 0;
	while (j >= i)
	{	
		result += mult * ft_char_pos_in_base(str[j], base);
		j--;
		mult *= baselen;
	}
	return (ft_get_sign(str) * result);
}
