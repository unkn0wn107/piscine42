/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:33:36 by agaley            #+#    #+#             */
/*   Updated: 2022/07/20 15:38:32 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void ft_show_tab(struct s_stock_str *par);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int	main()
{
	char *tab[20] = { "yo", "Un autre string", "What for !" };
	ft_show_tab(ft_strs_to_tab(3, tab));
}
