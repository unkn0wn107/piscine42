/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:55:04 by agaley            #+#    #+#             */
/*   Updated: 2022/07/14 18:27:17 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == ' ' || (9 <= c && c <= 13));
}

int	ft_issign(char c)
{
	return (c == '-' || c == '+');
}


int	ft_find_nbr_end(char *str)
{
	int	i;

	i = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	while (str[i] && ft_issign(str[i]))
		i++;
	while (str[i] && '0' <= str[i] && str[i] <= '9')
		i++;
	return (i - 1);
}

int	ft_get_sign(char *str)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	while (str[i] && ft_issign(str[i]))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	j;
	int	result;
	int	mult;

	sign = ft_get_sign(str);
	i = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	while (str[i] && ft_issign(str[i]))
		i++;
	j = ft_find_nbr_end(str);
	mult = 1;
	result = 0;
	while (j >= i)
	{	
		result += mult * (str[j] - '0');
		j--;
		mult *= 10;
	}
	return (sign * result);
}
