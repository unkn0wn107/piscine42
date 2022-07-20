/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:01:05 by agaley            #+#    #+#             */
/*   Updated: 2022/07/20 17:05:34 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);

int main()
{
	ft_putstr("putstr");
	ft_putchar('\n');
	ft_strcmp("qw", "aw");
	ft_strlen("srted");
	int a = 2;
	int *ptra = &a;
	int b = 3;
	int *ptrb = &b;
	ft_swap(ptra, ptrb);
}
