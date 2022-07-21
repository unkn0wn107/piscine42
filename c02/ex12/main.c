void	*ft_print_memory(void *addr, unsigned int size);

int	main()
{
	char	str[] = "Imprimons une memoire\0composee\tde\tcaracteres non imprimables";
	ft_print_memory(str, 60);
}
