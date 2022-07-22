#include <stdlib.h>

int ft_nbrlen(int nbr)
{
	int			i;
	int			min;
	long int	n;

	i = 0;
	min = 0;
	n = nbr;
	if (n < 0)
	{
		n *= -1;
		min = 1;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (++i + min);
}

char    *ft_itoa(int nbr)
{
	int			i;
	long int	n;
	char		*str;

	str = (char *)malloc((1 + ft_nbrlen(nbr)) * sizeof(char));
	n = nbr;
	if (n < 0)
		n *= -1;
	i = ft_nbrlen(nbr);
	str[i + 1] = '\0';
	while (n == 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
	}
	if (nbr < 0)
		str[i] = '-';
	return (str);
}

#include <stdio.h>
#include <limits.h>

int	main()
{
	printf("%d\n", ft_nbrlen(INT_MIN));
	printf("%s\n", ft_itoa(INT_MIN));
}