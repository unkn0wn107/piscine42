#include "includes.h"

int	main(int argc, char **argv)
{
	t_alloc_stack	*alloc_stack;
	t_map			map;

	map.chargrid = NULL;
	alloc_stack = init_alloc_stack();
	if (argc >= 2)
	{
		return (start_files(argc, argv, map, alloc_stack));
	}
	else
		return (start_stdin(map, alloc_stack));
	return (1);
}

/**
 * It reads the standard input, loads the map, solves it,
 * displays it, and frees the allocated memory
 * 
 * @param map the map structure
 * @param alloc_stack a stack of pointers to allocated memory.
 * 
 * @return the number of files that were successfully read.
 */
int	start_stdin(t_map map, t_alloc_stack *alloc_stack)
{
	char			*content;

	content = read_stdin(alloc_stack);
	if (!content)
	{
		ft_put_error(MAP_ERR);
		free_allocated(alloc_stack);
		kill_stack(alloc_stack);
		return (1);
	}
	map = load_map(content, alloc_stack);
	if (map.chargrid != NULL)
	{
		solve_map(&map);
		display_map(int_to_map(map.intgrid, map.chargrid, map.charset));
	}
	free_allocated(alloc_stack);
	kill_stack(alloc_stack);
	return (0);
}

int	start_files(int argc, char **argv, t_map map, t_alloc_stack *alloc_stack)
{
	int		i;
	char	*content;

	i = 1;
	while (i < argc)
	{
		content = read_file(argv[i], alloc_stack);
		if (!content)
		{
			ft_put_error(MAP_ERR);
			free_allocated(alloc_stack);
			kill_stack(alloc_stack);
			return (1);
		}
		map = load_map(content, alloc_stack);
		if (map.chargrid != NULL)
		{
			solve_map(&map);
			int_to_map(map.intgrid, map.chargrid, map.charset);
			display_map(int_to_map(map.intgrid, map.chargrid, map.charset));
		}
		free_allocated(alloc_stack);
		ft_putstr("\n", 1);
		i++;
	}
	kill_stack(alloc_stack);
	return (0);
}
