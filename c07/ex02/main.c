/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:49:07 by agaley            #+#    #+#             */
/*   Updated: 2022/07/19 17:49:40 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_utlimate_range(int **range, int min, int max);

int main()
{
	int	*range;

	printf("%d", ft_ultimate_range(&range, -1, 1 ));
}
