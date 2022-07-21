void	ft_print_memory(void *addr, long long int size, int with_c);

int	main()
{
	char	str[] = "# **************************************************************************** #";
	ft_print_memory(str, 80, 1);
}