/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:46:18 by agaley            #+#    #+#             */
/*   Updated: 2022/07/13 19:18:54 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dstlen;
	unsigned int	len;

	dstlen = ft_strlen(dest);
	len = dstlen + ft_strlen(src);
	if (size < dstlen)
		return (size + ft_strlen(src));	
	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (i < size - dstlen - 1 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i < size - 1)
		dest[i] = '\0';
	return (len);
}
