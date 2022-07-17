/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flortie <flortie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:59:32 by flortie           #+#    #+#             */
/*   Updated: 2022/07/17 02:46:47 by flortie          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_createvalue(int values, int dim)
{
	int	temp;

	temp = 0;
	while (values[temp])
	{
		if (values[temp] == -1 && values[temp - 1] != -1)
		{
			if (values[temp - 1] == dim)
			{
				values[temp] = 1;
			}
			else
			{
				values[temp] = values[temp - 1] + 1;
			}
		}
		temp++;
	}
	return (values);
}

void	ft_check(int **row)
{
	int	maxval;
	int	i;

	maxval = 0;
	i = 0;
	while (row[maxval])
	{
		maxval++;
	}
	while (row[i])
	{
		if (row[0] == maxval)
		{

		}
	}

}
