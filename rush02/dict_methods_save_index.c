/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   methods.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:32:43 by agaley            #+#    #+#             */
/*   Updated: 2022/07/23 15:54:54 by agaley           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "../ftlib.h"
#include <stdlib.h>

#define N 41

t_dict	*g_dict_index[N];

int	dict_get_new_index(void)
{
	int		i;

	i = 0;
	while (i < N && g_dict_index[i] != NULL)
		i++;
	if (i == N - 1 && g_dict_index[i] != NULL)
		return (-1);
	return (i);
}

t_dict	*dict_search(char *nbr)
{
	t_dict	*nd;
	int		i;

	i = 0;
	while (i < N && g_dict_index[i] != NULL)
	{
		nd = g_dict_index[i];
		if (!ft_strcmp(nbr, nd->nbr))
			return (nd);
		i++;
	}
	return (NULL);
}

t_dict	*dict_add(char *nbr, char *word)
{
	t_dict	*nd;
	int		i;

	if (dict_search(nbr) == NULL)
	{
		nd = (t_dict *)malloc(sizeof(*nd));
		if (!nd)
			return (NULL);
		nd->nbr = ft_strdup(nbr);
		nd->word = ft_strdup(word);
		i = dict_get_new_index();
		g_dict_index[i] = nd;
		if (i != 0)
			g_dict_index[i - 1]->next = nd;
		return (nd);
	}
	else
		return (NULL);
}

void	free_all_dict(void)
{
	int	i;

	i = 0;
	while (i < N)
		free(g_dict_index[i]);
}

#include <stdio.h>
int main()
{
	t_dict	*found;
	dict_add("0", "zero");
	dict_add("1", "un");
	dict_add("2", "deux");
	found = dict_search("1");
	printf("%s", found->word);
	found = dict_search("2");
	printf("%s", found->word);
}
