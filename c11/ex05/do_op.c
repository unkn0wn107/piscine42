/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:57:39 by agaley            #+#    #+#             */
/*   Updated: 2022/07/21 00:15:16 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
int		ft_atoi(const char *str);
int		sum(int n1, int n2);
int		sub(int n1, int n2);
int		div(int n1, int n2);
int		mul(int n1, int n2);
int		mod(int n1, int n2);

int	ft_is_op(char c)
{
	return (c == '+' || c == '-' || c == '/' || c == '*' || c == '%');
}

int	ft_print_div_zero(char op, int n)
{
	if (n != 0)
		return (0);
	if (op == '/' && n == 0)
	{
		write(1, "Stop : division by zero", 23);
		return (1);
	}
	if (op == '%' && n == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		return (1);
	}
	return (0);
}

int	ft_get_op_num(char op)
{
	if (op == '+')
		return (0);
	else if (op == '-')
		return (1);
	else if (op == '/')
		return (2);
	else if (op == '*')
		return (3);
	else
		return (4);
}

int	ft_launch_cal(int (*fun)(int, int), int n1, int n2)
{
	return ((*fun)(n1, n2));
}

int	main(int argc, char const *argv[])
{
	int		n1;
	int		n2;
	int		res;
	int		(*ft_pf[5])(int, int);

	ft_pf[0] = sum;
	ft_pf[1] = sub;
	ft_pf[2] = div;
	ft_pf[3] = mul;
	ft_pf[4] = mod;
	if (argc != 4)
		return (1);
	if (!ft_is_op(argv[2][0]))
	{
		write(1, "0", 1);
		return (1);
	}
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	if (ft_print_div_zero(argv[2][0], n2))
		return (1);
	res = ft_launch_cal(ft_pf[ft_get_op_num(argv[2][0])], n1, n2);
	ft_putnbr(res);
	return (0);
}
