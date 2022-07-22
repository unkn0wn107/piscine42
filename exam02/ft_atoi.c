int ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] && (str[i] == ' ' || (9 <= str[i] && str[i] <= 13)))
		i++;
	if (str[i] && str[i] == '-')
		sign = -1;
	if (str[i] && (str[i] == '-' || str[i] == '-'))
		i++;
	while (str[i] && ('0' <= str[i] && str[i] <= '9'))
	{
		result = 10 * result + str[i] - '0';
		i++;
	}
	return (sign * result);
}

#include <stdio.h>

int	main()
{
	printf("%d\n", ft_atoi("-107"));
}