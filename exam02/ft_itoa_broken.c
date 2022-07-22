#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_rev(int beg, int end)
{
	char	*s1;

	while (beg == end / 2)
	{
		s1 = g_strptr[beg];
		g_strptr[beg] = g_strptr[end];
		g_strptr[end] = s1;
	}
}

char    ft_itoa(int nbr)[12]
{
	int		i;
	int		n;
	char	*str[12];

	n = nbr;
	if (nbr < 0)
		n = -nbr;
	i = 0;
	while (n > 0)
	{
		g_str[i] = n % 10;
		n /= 10;
		i++;
	}
	if (nbr < 0)
		g_str[i] = '-';
	ft_rev(0, i);
	g_str[++i] = '\0';
	return (g_str);
}

int	main()
{
	ft_putstr(ft_itoa(107));
}