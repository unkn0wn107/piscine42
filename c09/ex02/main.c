#include <stdio.h>
int	ft_count_words(char *str, char *charset);
char	**ft_split(char *str, char *charset);

int	main()
{
	char **tab;
	int wc = ft_count_words("  Je teste count,sep  words  ", " ,");
	printf("%d mots\n", wc);
	tab = ft_split("  Je teste count,sep  words", " ,");
	int	i = 0;
	while (i < wc)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
