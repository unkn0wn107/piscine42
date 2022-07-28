/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchenava <mchenava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:39:33 by mchenava          #+#    #+#             */
/*   Updated: 2022/07/27 16:16:12 by mchenava         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "../../includes.h"

/**
 * Count the number of words in a string,
 * where a word is defined as a sequence of characters that are
 * not in the charset
 * 
 * @param str the string to be split
 * @param charset the characters that will be used to split the string
 */
int	ft_count_words(char *str, char *charset)
{
	int			i;
	int			count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_strchr(charset, str[i]) == NULL)
		{
			count++;
			while (str[i] && ft_strchr(charset, str[i]) == NULL)
				i++;
		}
		else
			i++;
	}
	return (count);
}

/**
 * It copies characters from src to dest
 * until it encounters a character in charset
 * 
 * @param dest the destination string
 * @param src the string to be split
 * @param charset the characters that will be used to split the string
 * @param start the index of the string to start at
 * 
 * @return The index of the first character in the string that is in the charset.
 */
int	duplicate(char *dest, char *src, char *charset, int start)
{
	int	j;

	j = 0;
	while (src[start] && ft_strchr(charset, src[start]) == NULL)
	{
		dest[j] = src[start];
		start++;
		j++;
	}
	dest[j] = '\0';
	return (start);
}

/**
 * It takes a string, splits it into words,
 * and returns an array of strings
 * 
 * @param dest the array of strings that will be returned
 * @param src the string to be split
 * @param charset the characters that will be used to split the string
 * @param alloc_stack a pointer to a t_alloc_stack structure.
 * This structure is used to
 */
void	cut_words(char **dest, char *src, char *charset,
	t_alloc_stack *alloc_stack)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (src[i])
	{
		while (src[i] && ft_strchr(charset, src[i]) != NULL)
			i++;
		j = i;
		while (src[j] && ft_strchr(charset, src[j]) == NULL)
			j++;
		dest[k] = (char *)malloc_n_collect(
				alloc_stack, sizeof(char) * (j - i + 1));
		if (j - i > 0)
		{
			i = duplicate(dest[k], src, charset, i);
			k++;
		}
	}
	dest[k] = 0;
}

/**
 * It splits a string into words,
 * and returns an array of pointers to those words
 * 
 * @param str the string to be split
 * @param charset the characters that will be used to split the string
 * @param alloc_stack a pointer to a t_alloc_stack struct.
 * This is used to keep track of all the memory
 * allocated by the function.
 * 
 * @return An array of strings.
 */
char	**ft_split(char *str, char *charset, t_alloc_stack *alloc_stack)
{
	char	**dest;
	int		count;

	count = ft_count_words(str, charset);
	dest = (char **)malloc_n_collect(alloc_stack, sizeof(char *) * (count + 1));
	cut_words(dest, str, charset, alloc_stack);
	return (dest);
}
