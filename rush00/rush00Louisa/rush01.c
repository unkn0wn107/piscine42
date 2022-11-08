void	ft_putchar(char c);

void	rush01(int x, int y)
{
	int	w;
	int	h;

	h = 0;
	while (h < y)
	{
		w = 0;
		while (w < x)
		{
			if ((h == w && w == 0) || (h == y - 1 && w == x - 1))
				ft_putchar('/');
			else if ((h == 0 && w == x - 1) || (w == 0 && h == y - 1))
				ft_putchar('\\');
			else if (w == 0 || w == x - 1 || h == 0 || h == y - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			w++;
		}
		ft_putchar('\n');
		h++;
	}
}

int	main()
{
	rush01(5, 1);
	return (0);
}
